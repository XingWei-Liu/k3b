/*
 *
 * $Id$
 * Copyright (C) 2003 Sebastian Trueg <trueg@k3b.org>
 *
 * This file is part of the K3b project.
 * Copyright (C) 1998-2004 Sebastian Trueg <trueg@k3b.org>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * See the file "COPYING" for the exact licensing terms.
 */

#include <config.h>
#include <k3bglobals.h>

#include "k3bisoimager.h"
#include "k3bdiritem.h"
#include "k3bbootitem.h"
#include "k3bdatadoc.h"
#include <k3bexternalbinmanager.h>
#include <k3bdevice.h>
#include <k3bprocess.h>
#include <k3bcore.h>
#include <k3bversion.h>
#include <k3bglobals.h>
#include <k3bchecksumpipe.h>

#include <kdebug.h>
#include <kstandarddirs.h>
#include <klocale.h>
#include <ktempfile.h>
#include <kio/netaccess.h>
#include <kio/global.h>
#include <kio/job.h>
#include <kstringhandler.h>

#include <qfile.h>
#include <qregexp.h>
#include <qdir.h>
#include <qapplication.h>

#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <utime.h>


int K3bIsoImager::s_imagerSessionCounter = 0;


class K3bIsoImager::Private
{
public:
  QString imagePath;
  QFile imageFile;
  const K3bExternalBin* mkisofsBin;

  enum LinkHandling {
    KEEP_ALL,
    FOLLOW,
    DISCARD_ALL,
    DISCARD_BROKEN
  };

  int usedLinkHandling;

  bool knownError;

  K3bChecksumPipe checksumPipe;
};


K3bIsoImager::K3bIsoImager( K3bDataDoc* doc, K3bJobHandler* hdl, QObject* parent, const char* name )
  : K3bJob( hdl, parent, name ),
    m_pathSpecFile(0),
    m_rrHideFile(0),
    m_jolietHideFile(0),
    m_sortWeightFile(0),
    m_process( 0 ),
    m_processExited(false),
    m_doc( doc ),
    m_noDeepDirectoryRelocation( false ),
    m_importSession( false ),
    m_device(0),
    m_mkisofsPrintSizeResult( 0 ),
    m_fdToWriteTo(-1)
{
  d = new Private();
}


K3bIsoImager::~K3bIsoImager()
{
  cleanup();
  delete d;
}


bool K3bIsoImager::active() const
{
  return !m_processExited;
}


void K3bIsoImager::writeToFd( int fd )
{
  m_fdToWriteTo = fd;
}


void K3bIsoImager::writeToImageFile( const QString& path )
{
  d->imagePath = path;
  m_fdToWriteTo = -1;
}


void K3bIsoImager::slotReceivedStderr( const QString& line )
{
  parseMkisofsOutput( line );
  emit debuggingOutput( "mkisofs", line );
}


void K3bIsoImager::handleMkisofsProgress( int p )
{
  emit percent( p );
}


void K3bIsoImager::handleMkisofsInfoMessage( const QString& line, int type )
{
  emit infoMessage( line, type );
  if( type == ERROR )
    d->knownError = true;
}


void K3bIsoImager::slotProcessExited( KProcess* p )
{
  kdDebug() << k_funcinfo << endl;

  m_processExited = true;

  if( m_doc->verifyData() ) {
    d->checksumPipe.close();
    kdDebug() << "(K3bIsoImager) checksum from image: " << d->checksumPipe.checksum() << endl;
  }

  if( d->imageFile.isOpen() )
    d->imageFile.close();

  if( !m_canceled ) {
    if( p->normalExit() ) {
      if( p->exitStatus() == 0 ) {
	jobFinished( true );
      }
      else {
	switch( p->exitStatus() ) {
	case 104:
	  // connection reset by peer
	  // This only happens if cdrecord does not finish successfully
	  // so we may leave the error handling to it meaning we handle this
	  // as a known error
	  break;

	case 2:
	  // mkisofs seems to have a bug that prevents to use filenames
	  // that contain one or more backslashes
	  // mkisofs 1.14 has the bug, 1.15a40 not
	  // TODO: find out the version that fixed the bug
	  if( m_containsFilesWithMultibleBackslashes &&
	      k3bcore->externalBinManager()->binObject( "mkisofs" )->version < K3bVersion( 1, 15, -1, "a40" ) ) {
	    emit infoMessage( i18n("Due to a bug in mkisofs <= 1.15a40, K3b is unable to handle "
				   "filenames that contain more than one backslash:"), ERROR );

	    break;
	  }
	  // otherwise just fall through

	default:
	  if( !d->knownError && !mkisofsReadError() ) {
	    emit infoMessage( i18n("%1 returned an unknown error (code %2).").arg("mkisofs").arg(p->exitStatus()),
			      K3bJob::ERROR );
	    emit infoMessage( strerror(p->exitStatus()), K3bJob::ERROR );
	    emit infoMessage( i18n("Please send me an email with the last output."), K3bJob::ERROR );
	  }
	}

	jobFinished( false );
      }
    }
    else {
      emit infoMessage( i18n("%1 did not exit cleanly.").arg("mkisofs"), ERROR );
      jobFinished( false );
    }
  }

  cleanup();
}


void K3bIsoImager::cleanup()
{
  // remove all temp files
  delete m_pathSpecFile;
  delete m_rrHideFile;
  delete m_jolietHideFile;
  delete m_sortWeightFile;

  // remove boot-images-temp files
  for( QStringList::iterator it = m_tempFiles.begin();
       it != m_tempFiles.end(); ++it )
    QFile::remove( *it );
  m_tempFiles.clear();

  m_pathSpecFile = m_jolietHideFile = m_rrHideFile = m_sortWeightFile = 0;

  delete m_process;
  m_process = 0;

  clearDummyDirs();
}


void K3bIsoImager::init()
{
  jobStarted();

  cleanup();

  m_doc->prepareFilenames();
  if( m_doc->needToCutFilenames() ) {
    QString listOfRenamedItems;
    int maxlines = 10;
    QValueList<K3bDataItem*>::const_iterator it;
    for( it = m_doc->needToCutFilenameItems().begin(); 
	 maxlines > 0 && it != m_doc->needToCutFilenameItems().end();
	 ++it, --maxlines ) {
      K3bDataItem* item = *it;
      listOfRenamedItems += i18n("<em>%1</em> renamed to <em>%2</em>")
	.arg( KStringHandler::csqueeze( item->k3bName(), 30 ) )
	.arg( KStringHandler::csqueeze( item->writtenName(), 30 ) );
      listOfRenamedItems += "<br>";
    }
    if( it != m_doc->needToCutFilenameItems().end() )
      listOfRenamedItems += "...";

    if( !questionYesNo( "<p>" + i18n("Some filenames need to be shortened due to the %1 char restriction "
				     "of the Joliet extensions. If the Joliet extensions are disabled filenames "
				     "do not have to be shortened but long filenames will not be available on "
				     "Windows systems.")
			.arg( m_doc->isoOptions().jolietLong() ? 103 : 64 )
			+ "<p>" + listOfRenamedItems,
			i18n("Warning"),
			i18n("Shorten Filenames"),
			i18n("Disable Joliet extensions") ) ) {
      // No -> disable joliet
      // for now we enable RockRidge to be sure we did not lie above (keep long filenames)
      K3bIsoOptions op = m_doc->isoOptions();
      op.setCreateJoliet( false );
      op.setCreateRockRidge( true );
      m_doc->setIsoOptions( op );
      m_doc->prepareFilenames();
    }
  }

  //
  // The joliet extension encodes the volume desc in UCS-2, i.e. uses 16 bit for each char.
  // Thus, the max length here is 16.
  //
  if( m_doc->isoOptions().createJoliet() &&
      m_doc->isoOptions().volumeID().length() > 16 ) {
    if( !questionYesNo( "<p>" + i18n("The Joliet extensions (which are needed for long filenames on Windows systems) "
				     "restrict the length of the volume descriptior (the name of the filesystem) "
				     "to %1 characters. The selected descriptor '%2' is longer than that. Do you "
				     "want it to be cut or do you want to go back and change it manually?")
			.arg( 16 ).arg( m_doc->isoOptions().volumeID() ),
			i18n("Warning"),
			i18n("Cut volume descriptor in the Joliet tree"),
			i18n("Cancel and go back") ) ) {
      jobFinished( false );
      return;
    }
  }

  //
  // We always calculate the image size. It does not take long and at least the mixed job needs it
  // anyway
  //
  startSizeCalculation();
}


void K3bIsoImager::calculateSize()
{
  jobStarted();
  startSizeCalculation();
}


void K3bIsoImager::startSizeCalculation()
{
  d->mkisofsBin = initMkisofs();
  if( !d->mkisofsBin ) {
    jobFinished( false );
    return;
  }
    
  initVariables();
    
  m_process = new K3bProcess();
  m_process->setRunPrivileged(true);
    
  emit debuggingOutput( "Used versions", "mkisofs: " + d->mkisofsBin->version );
    
  *m_process << d->mkisofsBin;

  if( !prepareMkisofsFiles() || 
      !addMkisofsParameters(true) ) {
    cleanup();
    jobFinished( false );
    return;
  }

  // add empty dummy dir since one path-spec is needed
  // ??? Seems it is not needed after all. At least mkisofs 1.14 and above don't need it. ???
  //  *m_process << dummyDir();

  kdDebug() << "***** mkisofs calculate size parameters:\n";
  const QValueList<QCString>& args = m_process->args();
  QString s;
  for( QValueList<QCString>::const_iterator it = args.begin(); it != args.end(); ++it ) {
    s += *it + " ";
  }
  kdDebug() << s << endl << flush;


  // since output changed during mkisofs version changes we grab both
  // stdout and stderr

  // mkisofs version >= 1.15 (don't know about 1.14!)
  // the extends on stdout (as lonely number)
  // and error and warning messages on stderr

  // mkisofs >= 1.13
  // everything is written to stderr
  // last line is: "Total extents scheduled to be written = XXXXX"

  // TODO: use K3bProcess::OutputCollector instead iof our own two slots.

  connect( m_process, SIGNAL(receivedStderr(KProcess*, char*, int)),
	   this, SLOT(slotCollectMkisofsPrintSizeStderr(KProcess*, char*, int)) );
  connect( m_process, SIGNAL(receivedStdout(KProcess*, char*, int)),
	   this, SLOT(slotCollectMkisofsPrintSizeStdout(KProcess*, char*, int)) );
  connect( m_process, SIGNAL(processExited(KProcess*)),
	   this, SLOT(slotMkisofsPrintSizeFinished()) );
  
  // we also want error messages
  connect( m_process, SIGNAL(stderrLine( const QString& )),
	   this, SLOT(slotReceivedStderr( const QString& )) );

  m_collectedMkisofsPrintSizeStdout = QString::null;
  m_collectedMkisofsPrintSizeStderr = QString::null;
  m_mkisofsPrintSizeResult = 0;

  if( !m_process->start( KProcess::NotifyOnExit, KProcess::AllOutput ) ) {
    emit infoMessage( i18n("Could not start %1.").arg("mkisofs"), K3bJob::ERROR );
    cleanup();

    jobFinished( false );
    return;
  }
}


void K3bIsoImager::slotCollectMkisofsPrintSizeStderr(KProcess*, char* data , int len)
{
  emit debuggingOutput( "mkisofs", QString::fromLocal8Bit( data, len ) );
  m_collectedMkisofsPrintSizeStderr.append( QString::fromLocal8Bit( data, len ) );
}


void K3bIsoImager::slotCollectMkisofsPrintSizeStdout(KProcess*, char* data, int len )
{
  emit debuggingOutput( "mkisofs", QString::fromLocal8Bit( data, len ) );
  m_collectedMkisofsPrintSizeStdout.append( QString::fromLocal8Bit( data, len ) );
}


void K3bIsoImager::slotMkisofsPrintSizeFinished()
{
  bool success = true;

  kdDebug() << "(K3bIsoImager) iso size: " << m_collectedMkisofsPrintSizeStdout << endl;

  // if m_collectedMkisofsPrintSizeStdout is not empty we have a recent version of
  // mkisofs and parsing is very easy (s.o.)
  if( !m_collectedMkisofsPrintSizeStdout.isEmpty() ) {
    m_mkisofsPrintSizeResult = m_collectedMkisofsPrintSizeStdout.toInt( &success );
  }
  else {
    // parse the stderr output
    // I hope parsing the last line is enough!
    int pos = m_collectedMkisofsPrintSizeStderr.findRev( "extents scheduled to be written" );

    if( pos == -1 )
      success = false;
    else
      m_mkisofsPrintSizeResult = m_collectedMkisofsPrintSizeStderr.mid( pos+33 ).toInt( &success );
  }


  cleanup();


  if( success ) {
    jobFinished( true );
  }
  else {
    m_mkisofsPrintSizeResult = 0;
    kdDebug() << "(K3bIsoImager) Parsing mkisofs -print-size failed: " << m_collectedMkisofsPrintSizeStdout << endl;
    emit infoMessage( i18n("Could not determine size of resulting image file."), ERROR );
    jobFinished( false );
  }
}


void K3bIsoImager::initVariables()
{
  m_containsFilesWithMultibleBackslashes = false;
  m_processExited = false;
  m_canceled = false;
  d->knownError = false;

  // determine symlink handling
  // follow links superseeds discard all links which superseeds discard broken links
  // without rockridge we follow the links or discard all
  if( m_doc->isoOptions().followSymbolicLinks() )
    d->usedLinkHandling = Private::FOLLOW;
  else if( m_doc->isoOptions().discardSymlinks() )
    d->usedLinkHandling = Private::DISCARD_ALL;
  else if( m_doc->isoOptions().createRockRidge() ) {
    if( m_doc->isoOptions().discardBrokenSymlinks() )
      d->usedLinkHandling = Private::DISCARD_BROKEN;
    else
      d->usedLinkHandling = Private::KEEP_ALL;
  }
  else {
    d->usedLinkHandling = Private::FOLLOW;
  }

  m_sessionNumber = s_imagerSessionCounter++;
}


void K3bIsoImager::start()
{
  jobStarted();

  cleanup();

  d->mkisofsBin = initMkisofs();
  if( !d->mkisofsBin ) {
    jobFinished( false );
    return;
  }

  initVariables();

  m_process = new K3bProcess();
  m_process->setRunPrivileged(true);

  *m_process << d->mkisofsBin;

  // prepare the filenames as written to the image
  m_doc->prepareFilenames();

  if( !prepareMkisofsFiles() ||
      !addMkisofsParameters() ) {
    cleanup();
    jobFinished( false );
    return;
  }

  connect( m_process, SIGNAL(processExited(KProcess*)),
	   this, SLOT(slotProcessExited(KProcess*)) );

  connect( m_process, SIGNAL(stderrLine( const QString& )),
	   this, SLOT(slotReceivedStderr( const QString& )) );

  int fd = -1;
  if( m_fdToWriteTo != -1 ) {
    fd = m_fdToWriteTo;
  }
  else {
    d->imageFile.setName( d->imagePath );
    if( d->imageFile.open( IO_WriteOnly ) )
      fd = d->imageFile.handle();
    else {
      emit infoMessage( i18n("Could not open %1 for writing").arg(d->imagePath), ERROR );
      cleanup();
      jobFinished(false);
      return;
    }
  }
  if( m_doc->verifyData() ) {
    d->checksumPipe.writeToFd( fd );
    d->checksumPipe.open();
    m_process->writeToFd( d->checksumPipe.in() );
  }
  else
    m_process->writeToFd( fd );

  kdDebug() << "***** mkisofs parameters:\n";
  const QValueList<QCString>& args = m_process->args();
  QString s;
  for( QValueList<QCString>::const_iterator it = args.begin(); it != args.end(); ++it ) {
    s += *it + " ";
  }
  kdDebug() << s << endl << flush;
  emit debuggingOutput("mkisofs command:", s);
  
  if( !m_process->start( KProcess::NotifyOnExit, KProcess::AllOutput) ) {
    // something went wrong when starting the program
    // it "should" be the executable
    kdDebug() << "(K3bIsoImager) could not start mkisofs" << endl;
    emit infoMessage( i18n("Could not start %1.").arg("mkisofs"), K3bJob::ERROR );
    jobFinished( false );
    cleanup();
  }
}


void K3bIsoImager::cancel()
{
  m_canceled = true;

  if( m_process )
    if( !m_processExited ) {
      disconnect(m_process);
      m_process->kill();
    }

  if( !m_processExited ) {
    emit canceled();
    jobFinished(false);
  }
}


void K3bIsoImager::setMultiSessionInfo( const QString& info, K3bDevice::Device* dev )
{
  m_multiSessionInfo = info;
  m_device = dev;
}


bool K3bIsoImager::addMkisofsParameters( bool printSize )
{
  // add multisession info
  if( !m_multiSessionInfo.isEmpty() ) {
    *m_process << "-cdrecord-params" << m_multiSessionInfo;
    if( m_device )
      *m_process << "-prev-session" << m_device->blockDeviceName();
  }

  // add the arguments
  *m_process << "-gui";
  *m_process << "-graft-points";

  if( printSize )
    *m_process << "-print-size" << "-quiet";

  if( !m_doc->isoOptions().volumeID().isEmpty() ) {
    QString s = m_doc->isoOptions().volumeID();
    s.truncate(32);  // ensure max length
    *m_process << "-volid" << s;
  }
  else {
    emit infoMessage( i18n("No volume id specified. Using default."), WARNING );
    *m_process << "-volid" << "CDROM";
  }

  QString s = m_doc->isoOptions().volumeSetId();
  s.truncate(128);  // ensure max length
  *m_process << "-volset" << s;

  s = m_doc->isoOptions().applicationID();
  s.truncate(128);  // ensure max length
  *m_process << "-appid" << s;

  s = m_doc->isoOptions().publisher();
  s.truncate(128);  // ensure max length
  *m_process << "-publisher" << s;

  s = m_doc->isoOptions().preparer();
  s.truncate(128);  // ensure max length
  *m_process << "-preparer" << s;

  s = m_doc->isoOptions().systemId();
  s.truncate(32);  // ensure max length
  *m_process << "-sysid" << s;

  int volsetSize = m_doc->isoOptions().volumeSetSize();
  int volsetSeqNo = m_doc->isoOptions().volumeSetNumber();
  if( volsetSeqNo > volsetSize ) {
    kdDebug() << "(K3bIsoImager) invalid volume set sequence number: " << volsetSeqNo 
	      << " with volume set size: " << volsetSize << endl;
    volsetSeqNo = volsetSize;
  }
  *m_process << "-volset-size" << QString::number(volsetSize);
  *m_process << "-volset-seqno" << QString::number(volsetSeqNo);

  if( m_sortWeightFile ) {
    *m_process << "-sort" << m_sortWeightFile->name();
  }

  if( m_doc->isoOptions().createRockRidge() ) {
    if( m_doc->isoOptions().preserveFilePermissions() )
      *m_process << "-rock";
    else
      *m_process << "-rational-rock";
    if( m_rrHideFile )
      *m_process << "-hide-list" << m_rrHideFile->name();
  }

  if( m_doc->isoOptions().createJoliet() ) {
    *m_process << "-joliet";
    if( m_doc->isoOptions().jolietLong() )
      *m_process << "-joliet-long";
    if( m_jolietHideFile )
      *m_process << "-hide-joliet-list" << m_jolietHideFile->name();
  }

  if( m_doc->isoOptions().doNotCacheInodes() )
    *m_process << "-no-cache-inodes";

  //
  // Check if we have files > 2 GB and enable udf in that case.
  //
  bool filesGreaterThan2Gb = false;
  K3bDataItem* item = m_doc->root();
  while( (item = item->nextSibling()) ) {
    if( item->isFile() && item->size() > 2LL*1024LL*1024LL*1024LL ) {
      filesGreaterThan2Gb = true;
      break;
    }
  }

  if( filesGreaterThan2Gb )
    emit infoMessage( i18n("Found files bigger than 2 GB. These files will only be fully accessible if mounted with UDF."),
		      WARNING );
  
  bool udf = m_doc->isoOptions().createUdf();
  if( !udf && filesGreaterThan2Gb ) {
    emit infoMessage( i18n("Enabling UDF extension."), INFO );
    udf = true;
  }
  if( udf )
    *m_process << "-udf";

  if( m_doc->isoOptions().ISOuntranslatedFilenames()  ) {
    *m_process << "-untranslated-filenames";
  }
  else {
    if( m_doc->isoOptions().ISOallowPeriodAtBegin()  )
      *m_process << "-allow-leading-dots";
    if( m_doc->isoOptions().ISOallow31charFilenames()  )
      *m_process << "-full-iso9660-filenames";
    if( m_doc->isoOptions().ISOomitVersionNumbers() && !m_doc->isoOptions().ISOmaxFilenameLength() )
      *m_process << "-omit-version-number";
    if( m_doc->isoOptions().ISOrelaxedFilenames()  )
      *m_process << "-relaxed-filenames";
    if( m_doc->isoOptions().ISOallowLowercase()  )
      *m_process << "-allow-lowercase";
    if( m_doc->isoOptions().ISOnoIsoTranslate()  )
      *m_process << "-no-iso-translate";
    if( m_doc->isoOptions().ISOallowMultiDot()  )
      *m_process << "-allow-multidot";
    if( m_doc->isoOptions().ISOomitTrailingPeriod() )
      *m_process << "-omit-period";
  }

  if( m_doc->isoOptions().ISOmaxFilenameLength()  )
    *m_process << "-max-iso9660-filenames";

  if( m_noDeepDirectoryRelocation  )
    *m_process << "-disable-deep-relocation";

  // We do our own following
//   if( m_doc->isoOptions().followSymbolicLinks() || !m_doc->isoOptions().createRockRidge() )
//     *m_process << "-follow-links";

  if( m_doc->isoOptions().createTRANS_TBL()  )
    *m_process << "-translation-table";
  if( m_doc->isoOptions().hideTRANS_TBL()  )
    *m_process << "-hide-joliet-trans-tbl";

  *m_process << "-iso-level" << QString::number(m_doc->isoOptions().ISOLevel());

  if( m_doc->isoOptions().forceInputCharset() )
    *m_process << "-input-charset" << m_doc->isoOptions().inputCharset();

  *m_process << "-path-list" << QFile::encodeName(m_pathSpecFile->name());


  // boot stuff
  if( !m_doc->bootImages().isEmpty() ) {
    bool first = true;
    for( QPtrListIterator<K3bBootItem> it( m_doc->bootImages() );
	 *it; ++it ) {
      if( !first )
	*m_process << "-eltorito-alt-boot";

      K3bBootItem* bootItem = *it;

      *m_process << "-eltorito-boot";
      *m_process << bootItem->writtenPath();

      if( bootItem->imageType() == K3bBootItem::HARDDISK ) {
	*m_process << "-hard-disk-boot";
      }
      else if( bootItem->imageType() == K3bBootItem::NONE ) {
	*m_process << "-no-emul-boot";
	if( bootItem->loadSegment() > 0 )
	  *m_process << "-boot-load-seg" << QString::number(bootItem->loadSegment());
	if( bootItem->loadSize() > 0 )
	  *m_process << "-boot-load-size" << QString::number(bootItem->loadSize());
      }

      if( bootItem->imageType() != K3bBootItem::NONE && bootItem->noBoot() )
	*m_process << "-no-boot";
      if( bootItem->bootInfoTable() )
	*m_process << "-boot-info-table";

      first = false;
    }

    *m_process << "-eltorito-catalog" << m_doc->bootCataloge()->writtenPath();
  }


  // additional parameters from config
  const QStringList& params = k3bcore->externalBinManager()->binObject( "mkisofs" )->userParameters();
  for( QStringList::const_iterator it = params.begin(); it != params.end(); ++it )
    *m_process << *it;

  return true;
}


int K3bIsoImager::writePathSpec()
{
  delete m_pathSpecFile;
  m_pathSpecFile = new KTempFile();
  m_pathSpecFile->setAutoDelete(true);

  if( QTextStream* t = m_pathSpecFile->textStream() ) {
    // recursive path spec writing
    int num = writePathSpecForDir( m_doc->root(), *t );

    m_pathSpecFile->close();

    return num;
  }
  else
    return -1;
}


int K3bIsoImager::writePathSpecForDir( K3bDirItem* dirItem, QTextStream& stream )
{
  if( dirItem->depth() > 7 ) {
    kdDebug() << "(K3bIsoImager) found directory depth > 7. Enabling no deep directory relocation." << endl;
    m_noDeepDirectoryRelocation = true;
  }

  // now create the graft points
  int num = 0;
  for( QPtrListIterator<K3bDataItem> it( dirItem->children() ); it.current(); ++it ) {
    K3bDataItem* item = it.current();
    bool writeItem = item->writeToCd();

    if( item->isSymLink() ) {
      if( d->usedLinkHandling == Private::DISCARD_ALL ||
	  ( d->usedLinkHandling == Private::DISCARD_BROKEN &&
	    !item->isValid() ) )
	writeItem = false;

      else if( d->usedLinkHandling == Private::FOLLOW ) {
	QFileInfo f( K3b::resolveLink( item->localPath() ) );
	if( !f.exists() ) {
	  emit infoMessage( i18n("Could not follow link %1 to non-existing file %2. Skipping...")
			    .arg(item->k3bName())
			    .arg(f.filePath()), WARNING );
	  writeItem = false;
	}
	else if( f.isDir() ) {
	  emit infoMessage( i18n("Ignoring link %1 to folder %2. K3b is unable to follow links to folders.")
			    .arg(item->k3bName())
			    .arg(f.filePath()), WARNING );
	  writeItem = false;
	}
      }
    }
    else if( item->isFile() ) {
      QFileInfo f( item->localPath() );
      if( !f.exists() ) {
	emit infoMessage( i18n("Could not find file %1. Skipping...").arg(item->localPath()), WARNING );
	writeItem = false;
      }
      else if( !f.isReadable() ) {
	emit infoMessage( i18n("Could not read file %1. Skipping...").arg(item->localPath()), WARNING );
	writeItem = false;
      }
    }

    if( writeItem ) {
      num++;

      // some versions of mkisofs seem to have a bug that prevents to use filenames
      // that contain one or more backslashes
      if( item->writtenPath().contains("\\") )
	m_containsFilesWithMultibleBackslashes = true;
      
      
      if( item->isDir() ) {
	stream << escapeGraftPoint( item->writtenPath() )
	       << "="
	       << escapeGraftPoint( dummyDir( static_cast<K3bDirItem*>(item) ) ) << "\n";
	
	int x = writePathSpecForDir( dynamic_cast<K3bDirItem*>(item), stream );
	if( x >= 0 )
	  num += x;
	else
	  return -1;
      }
      else {
	writePathSpecForFile( static_cast<K3bFileItem*>(item), stream );
      }
    }
  }

  return num;
}


void K3bIsoImager::writePathSpecForFile( K3bFileItem* item, QTextStream& stream )
{
  stream << escapeGraftPoint( item->writtenPath() )
	 << "=";
  
  if( m_doc->bootImages().containsRef( dynamic_cast<K3bBootItem*>(item) ) ) { // boot-image-backup-hack
    
    // create temp file
    KTempFile temp;
    QString tempPath = temp.name();
    temp.unlink();
    
    if( !KIO::NetAccess::copy( KURL(item->localPath()), KURL::fromPathOrURL(tempPath) ) ) {
      emit infoMessage( i18n("Failed to backup boot image file %1").arg(item->localPath()), ERROR );
      return;
    }
    
    static_cast<K3bBootItem*>(item)->setTempPath( tempPath );
    
    m_tempFiles.append(tempPath);
    stream << escapeGraftPoint( tempPath ) << "\n";
  }
  else if( item->isSymLink() && d->usedLinkHandling == Private::FOLLOW )
    stream << escapeGraftPoint( K3b::resolveLink( item->localPath() ) ) << "\n";
  else
    stream << escapeGraftPoint( item->localPath() ) << "\n";
}


bool K3bIsoImager::writeRRHideFile()
{
  delete m_rrHideFile;
  m_rrHideFile = new KTempFile();
  m_rrHideFile->setAutoDelete(true);

  if( QTextStream* t = m_rrHideFile->textStream() ) {

    K3bDataItem* item = m_doc->root();
    while( item ) {
      if( item->hideOnRockRidge() ) {
	if( !item->isDir() )  // hiding directories does not work (all dirs point to the dummy-dir)
	  *t << escapeGraftPoint( item->localPath() ) << endl;
      }
      item = item->nextSibling();
    }

    m_rrHideFile->close();
    return true;
  }
  else
    return false;
}


bool K3bIsoImager::writeJolietHideFile()
{
  delete m_jolietHideFile;
  m_jolietHideFile = new KTempFile();
  m_jolietHideFile->setAutoDelete(true);

  if( QTextStream* t = m_jolietHideFile->textStream() ) {

    K3bDataItem* item = m_doc->root();
    while( item ) {
      if( item->hideOnRockRidge() ) {
	if( !item->isDir() )  // hiding directories does not work (all dirs point to the dummy-dir but we could introduce a second hidden dummy dir)
	  *t << escapeGraftPoint( item->localPath() ) << endl;
      }
      item = item->nextSibling();
    }

    m_jolietHideFile->close();
    return true;
  }
  else
    return false;
}


bool K3bIsoImager::writeSortWeightFile()
{
  delete m_sortWeightFile;
  m_sortWeightFile = new KTempFile();
  m_sortWeightFile->setAutoDelete(true);

  if( QTextStream* t = m_sortWeightFile->textStream() ) {
    //
    // We need to write the local path in combination with the sort weight
    // mkisofs will take care of multible entries for one local file and always
    // use the highest weight
    //
    K3bDataItem* item = m_doc->root();
    while( (item = item->nextSibling()) ) {  // we skip the root here
      if( item->sortWeight() != 0 ) {
	if( m_doc->bootImages().containsRef( dynamic_cast<K3bBootItem*>(item) ) ) { // boot-image-backup-hack
	  *t << escapeGraftPoint( static_cast<K3bBootItem*>(item)->tempPath() ) << " " << item->sortWeight() << endl;
	}
	else if( item->isDir() ) {
	  // 
	  // Since we use dummy dirs for all directories in the filesystem and mkisofs uses the local path 
	  // for sorting we need to create a different dummy dir for every sort weight value.
	  //
	  *t << escapeGraftPoint( dummyDir( static_cast<K3bDirItem*>(item) ) ) << " " << item->sortWeight() << endl;
	}
	else
	  *t << escapeGraftPoint( item->localPath() ) << " " << item->sortWeight() << endl;
      }
    }

    m_sortWeightFile->close();
    return true;
  }
  else
    return false;
}


QString K3bIsoImager::escapeGraftPoint( const QString& str )
{
  QString enc = str;

  //
  // mkisofs manpage (-graft-points) is incorrect (as of mkisofs 2.01.01)
  //
  // Actually an equal sign needs to be escaped with one backslash only
  // Single backslashes inside a filename can be used without change
  // while single backslashes at the end of a filename need to be escaped
  // with two backslashes.
  //
  // There is one more problem though: the name in the iso tree can never 
  // in any number of backslashes. mkisofs simply cannot handle it. So we
  // need to remove these slashes somewhere or ignore those files (we do 
  // that in K3bDataDoc::addUrls)
  //

  //
  // we do not use QString::replace to have full control
  // this might be slow since QString::insert is slow but we don't care
  // since this is only called to prepare the iso creation which is not 
  // time critical. :)
  //

  unsigned int pos = 0;
  while( pos < enc.length() ) {
    // escape every equal sign with one backslash
    if( enc[pos] == '=' ) {
      enc.insert( pos, "\\" );
      pos += 2;
    }
    else if( enc[pos] == '\\' ) {
      // escape every occurence of two backslashes with two backslashes
      if( pos+1 < enc.length() && enc[pos+1] == '\\' ) {
	enc.insert( pos, "\\\\" );
	pos += 4;
      }
      // escape the last single backslash in the filename (see above)
      else if( pos == enc.length()-1 ) {
	enc.insert( pos, "\\" );
	pos += 2;
      }
      else
	++pos;
    }
    else
      ++pos;
  }

//   enc.replace( "\\\\", "\\\\\\\\" );
//   enc.replace( "=", "\\=" );

  return enc;
}


bool K3bIsoImager::prepareMkisofsFiles()
{
  // write path spec file
  // ----------------------------------------------------
  int num = writePathSpec();
  if( num < 0 ) {
    emit infoMessage( i18n("Could not write temporary file"), K3bJob::ERROR );
    return false;
  }
  else if( num == 0 ) {
    emit infoMessage( i18n("No files to be written."), K3bJob::ERROR );
    return false;
  }

  if( m_doc->isoOptions().createRockRidge() ) {
    if( !writeRRHideFile() ) {
      emit infoMessage( i18n("Could not write temporary file"), K3bJob::ERROR );
      return false;
    }
  }

  if( m_doc->isoOptions().createJoliet() ) {
    if( !writeJolietHideFile() ) {
      emit infoMessage( i18n("Could not write temporary file"), K3bJob::ERROR );
      return false ;
    }
  }

  if( !writeSortWeightFile() ) {
    emit infoMessage( i18n("Could not write temporary file"), K3bJob::ERROR );
    return false;
  }

  return true;
}


QString K3bIsoImager::dummyDir( K3bDirItem* dir )
{
  //
  // since we use virtual folders in order to have folders with different weight factors and different
  // permissions we create different dummy dirs to be passed to mkisofs
  //

  QDir _appDir( locateLocal( "appdata", "temp/" ) );

  //
  // create a unique isoimager session id
  // This might become important in case we will allow multiple instances of the isoimager
  // to run at the same time.
  //
  QString jobId = qApp->sessionId() + "_" + QString::number( m_sessionNumber );

  if( !_appDir.cd( jobId ) ) {
    _appDir.mkdir( jobId );
    _appDir.cd( jobId );
  }

  QString name( "dummydir_" );
  name += QString::number( dir->sortWeight() );

  bool perm = false;
  k3b_struct_stat statBuf;
  if( !dir->localPath().isEmpty() ) {
    // permissions
    if( k3b_stat( QFile::encodeName(dir->localPath()), &statBuf ) == 0 ) {
      name += "_";
      name += QString::number( statBuf.st_uid );
      name += "_";
      name += QString::number( statBuf.st_gid );
      name += "_";
      name += QString::number( statBuf.st_mode );
      name += "_";
      name += QString::number( statBuf.st_mtime );

      perm = true;
    }
  }


  if( !_appDir.cd( name ) ) {

    kdDebug() << "(K3bIsoImager) creating dummy dir: " << _appDir.absPath() << "/" << name << endl;

    _appDir.mkdir( name );
    _appDir.cd( name );

    if( perm ) {
      ::chmod( QFile::encodeName( _appDir.absPath() ), statBuf.st_mode );
      ::chown( QFile::encodeName( _appDir.absPath() ), statBuf.st_uid, statBuf.st_gid );
      struct utimbuf tb;
      tb.actime = tb.modtime = statBuf.st_mtime;
      ::utime( QFile::encodeName( _appDir.absPath() ), &tb );
    }
  }

  return _appDir.absPath() + "/";
}


void K3bIsoImager::clearDummyDirs()
{
  QString jobId = qApp->sessionId() + "_" + QString::number( m_sessionNumber );
  QDir appDir( locateLocal( "appdata", "temp/" ) );
  if( appDir.cd( jobId ) ) {
    QStringList dummyDirEntries = appDir.entryList( "dummydir*", QDir::Dirs );
    for( QStringList::iterator it = dummyDirEntries.begin(); it != dummyDirEntries.end(); ++it )
      appDir.rmdir( *it );
    appDir.cdUp();
    appDir.rmdir( jobId );
  }
}


QCString K3bIsoImager::checksum() const
{
  return d->checksumPipe.checksum();
}

#include "k3bisoimager.moc"