#include "k3bblankingjob.h"

#include "k3b.h"
#include "k3bglobals.h"
#include "device/k3bdevice.h"

#include <kprocess.h>
#include <kconfig.h>
#include <klocale.h>

#include <qstring.h>

#include <iostream>


K3bBlankingJob::K3bBlankingJob()
  : K3bJob()
{
  m_process = new KProcess();
  m_device = 0;
  m_mode = Fast;
  m_speed = 1;

  // connect to the cdrecord slots
  connect( m_process, SIGNAL(processExited(KProcess*)),
	   this, SLOT(slotCdrecordFinished()) );
  connect( m_process, SIGNAL(receivedStderr(KProcess*, char*, int)),
	   this, SLOT(slotParseCdrecordOutput(KProcess*, char*, int)) );
  connect( m_process, SIGNAL(receivedStdout(KProcess*, char*, int)),
	   this, SLOT(slotParseCdrecordOutput(KProcess*, char*, int)) );
}


K3bBlankingJob::~K3bBlankingJob()
{
  delete m_process;
}


void K3bBlankingJob::setDevice( K3bDevice* dev )
{
  m_device = dev;
}


void K3bBlankingJob::start()
{
  if( m_process->isRunning() )
    return;

  if( m_device == 0 )
    return;

  m_process->clearArguments();
  KConfig* c = kapp->config();
  c->setGroup( "External Programs" );
  *m_process << c->readEntry( "cdrecord path" );
  *m_process << QString("dev=%1").arg( m_device->devicename() );
  *m_process << QString("speed=%1").arg(m_speed);
  if( m_force )
    *m_process << "-force";
  if( k3bMain()->eject() )
    *m_process << "-eject";

  QString mode;
  switch( m_mode ) {
  case Fast:
    mode = "fast";
    break;
  case Complete:
    mode = "all";
    break;
  case Track:
    mode = "track";
    break;
  case Unclose:
    mode = "unclose";
    break;
  case Session:
    mode = "session";
    break;
  }

  *m_process << "blank=" + mode;


  // debugging output
  cout << "***** cdrecord parameters:\n";
  QStrList* _args = m_process->args();
  QStrListIterator _it(*_args);
  while( _it ) {
    cout << *_it << " ";
    ++_it;
  }
  cout << endl << flush;



  // now we can start the process
  if( !m_process->start( KProcess::NotifyOnExit, KProcess::AllOutput ) )
    {
      // something went wrong when starting the program
      // it "should" be the executable
      qDebug("(K3bBlankingJob) could not start cdrecord");
      m_error = K3b::CDRECORD_ERROR;
      emit infoMessage( "could not start cdrecord!" );
      emit finished( this );
    }
  else
    {
      m_error = K3b::WORKING;
      emit infoMessage( i18n("Start blanking disc at speed %1...").arg(m_speed) );
    }
}


void K3bBlankingJob::cancel()
{
  if( m_process->isRunning() ) {
    m_process->kill();
    emit canceled();
    emit finished( this );
  }
}


void K3bBlankingJob::slotParseCdrecordOutput( KProcess*, char* data, int len )
{
  qDebug( QString::fromLatin1( data, len ) );
}


void K3bBlankingJob::slotCdrecordFinished()
{
  if( m_process->normalExit() )
    {
      // TODO: check the process' exitStatus()
      switch( m_process->exitStatus() )
	{
	case 0:
	  m_error = K3b::SUCCESS;
	  emit infoMessage( i18n("Process successfully finished") );
	  break;
				
	default:
	  // no recording device and also other errors!! :-(
	  emit infoMessage( i18n("Cdrecord returned some error!") );
	  emit infoMessage( i18n("Sorry, no error handling yet! :-((") );
	  m_error = K3b::CDRECORD_ERROR;
	  break;
	}
    }
  else
    {
      m_error = K3b::CDRECORD_ERROR;
      emit infoMessage( i18n("Cdrecord did not exit cleanly.") );
    }
		
  emit finished( this );
}
