/*
 *
 * Copyright (C) 2007-2008 Sebastian Trueg <trueg@k3b.org>
 *
 * This file is part of the K3b project.
 * Copyright (C) 1998-2008 Sebastian Trueg <trueg@k3b.org>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * See the file "COPYING" for the exact licensing terms.
 */

#include "k3bdatamultisessionparameterjob.h"

#include <k3bthread.h>
#include <k3biso9660.h>
#include <k3bdevice.h>
#include <k3bdiskinfo.h>
#include <k3bdevicetypes.h>
#include <k3bglobals.h>
#include <k3btoc.h>
#include <k3btrack.h>

#include "k3bdatadoc.h"

#include <klocale.h>


class K3bDataMultiSessionParameterJob::Private
{
public:
    K3bDataDoc* doc;

    K3bDataDoc::MultiSessionMode usedMultiSessionMode;
    unsigned int previousSessionStart;
    unsigned int nextSessionStart;
    // true if the last session should be imported into the filesystem or not
    bool importSession;
};



K3bDataMultiSessionParameterJob::K3bDataMultiSessionParameterJob( K3bDataDoc* doc, K3bJobHandler* hdl, QObject* parent )
    : K3bThreadJob( hdl, parent ),
      d( new Private() )
{
    d->doc = doc;
}


K3bDataMultiSessionParameterJob::~K3bDataMultiSessionParameterJob()
{
    delete d;
}


K3bDataDoc::MultiSessionMode K3bDataMultiSessionParameterJob::usedMultiSessionMode() const
{
    return d->usedMultiSessionMode;
}


unsigned int K3bDataMultiSessionParameterJob::previousSessionStart() const
{
    return d->previousSessionStart;
}


unsigned int K3bDataMultiSessionParameterJob::nextSessionStart() const
{
    return d->nextSessionStart;
}


bool K3bDataMultiSessionParameterJob::importPreviousSession() const
{
    return d->importSession;
}


bool K3bDataMultiSessionParameterJob::run()
{
    d->usedMultiSessionMode = d->doc->multiSessionMode();

    if( !d->doc->onlyCreateImages() ) {
        if ( d->usedMultiSessionMode == K3bDataDoc::AUTO ) {
            if( d->doc->writingMode() == K3b::WRITING_MODE_AUTO ||
                !( d->doc->writingMode() & (K3bDevice::WRITINGMODE_SAO|K3bDevice::WRITINGMODE_RAW) ) ) {
                emit newSubTask( i18n("Searching for old session") );

                //
                // Wait for the medium.
                // In case an old session was imported we always want to continue or finish a multisession CD/DVD.
                // Otherwise we wait for everything we could handle and decide what to do in
                // determineMultiSessionMode( K3bDevice::DeviceHandler* ) below.
                //

                int wantedMediaState = K3bDevice::STATE_INCOMPLETE|K3bDevice::STATE_EMPTY;
                if( d->doc->importedSession() >= 0 )
                    wantedMediaState = K3bDevice::STATE_INCOMPLETE;

                int m = waitForMedia( d->doc->burner(),
                                      wantedMediaState,
                                      K3bDevice::MEDIA_WRITABLE );

                if( m < 0 ) {
                    cancel();
                    return false;
                }
                else {
                    d->usedMultiSessionMode = determineMultiSessionModeFromMedium();
                }
            }
            else {
                d->usedMultiSessionMode = K3bDataDoc::NONE;
            }
        }

        // FIXME: not sure if it is good to always wait for a medium this early
        if( d->usedMultiSessionMode == K3bDataDoc::CONTINUE ||
            d->usedMultiSessionMode == K3bDataDoc::FINISH ) {
            int m = waitForMedia( d->doc->burner(),
                                  K3bDevice::STATE_INCOMPLETE,
                                  K3bDevice::MEDIA_WRITABLE );

            if( m < 0 ) {
                cancel();
                return false;
            }

            if ( !setupMultiSessionParameters() ) {
                return false;
            }
        }
    }

    return true;
}


K3bDataDoc::MultiSessionMode K3bDataMultiSessionParameterJob::determineMultiSessionModeFromMedium()
{
    K3bDevice::DiskInfo info = d->doc->burner()->diskInfo();

    // FIXME: Does BD-RE really behave like DVD+RW here?
    if( info.mediaType() & (K3bDevice::MEDIA_DVD_PLUS_RW|
                            K3bDevice::MEDIA_DVD_PLUS_RW_DL|
                            K3bDevice::MEDIA_DVD_RW_OVWR|
                            K3bDevice::MEDIA_BD_RE) ) {
        //
        // we need to handle DVD+RW and DVD-RW overwrite media differently since remainingSize() is not valid
        // in both cases
        // Since one never closes a DVD+RW we only differ between CONTINUE and START
        //

        kDebug() << "(K3bDataMultiSessionParameterJob) found overwrite medium.";

        // try to check the filesystem size
        K3bIso9660 iso( d->doc->burner() );
        if( iso.open() && info.capacity() - iso.primaryDescriptor().volumeSpaceSize >= d->doc->burningLength() ) {
            return K3bDataDoc::CONTINUE;
        }
        else {
            return K3bDataDoc::START;
        }
    }

    else if( info.appendable() ) {
        //
        //  1. the project does not fit -> no multisession (resulting in asking for another media above)
        //     Exception: a session was imported.
        //  2. the project does fit and fills up the medium to some arbitrary percentage -> finish multisession
        //  3. Special case for the 4GB boundary which seems to be enforced by a linux kernel issue
        //  4. the project does fit and does not fill up the CD -> continue multisession
        //

        kDebug() << "(K3bDataMultiSessionParameterJob) found appendable medium.";

        if( d->doc->size() > info.remainingSize().mode1Bytes() &&
            d->doc->importedSession() < 0 ) {
            return K3bDataDoc::NONE;
        }
        else if( d->doc->size() >= info.remainingSize().mode1Bytes()*9/10 ) {
            return K3bDataDoc::FINISH;
        }
        else if( info.capacity() < 2621440 /* ~ 5 GB */ &&
                 info.size() + d->doc->burningLength() + 11400 /* used size + project size + session gap */ > 2097152 /* 4 GB */ ) {
            return K3bDataDoc::FINISH;
        }
        else {
            return K3bDataDoc::CONTINUE;
        }
    }

    else { // empty and complete rewritable media
        //
        // 1. the project does fit and fills up the medium to some arbitrary percentage -> finish multisession
        // 2. Special case for the 4GB boundary which seems to be enforced by a linux kernel issue
        //

        kDebug() << "(K3bDataMultiSessionParameterJob) found empty or complete medium.";

        if( d->doc->size() >= info.capacity().mode1Bytes()*9/10 ||
            d->doc->writingMode() == K3b::DAO ) {
            return K3bDataDoc::NONE;
        }
        else if( ( info.capacity() < 2621440 /* ~ 5 GB */ &&
                   d->doc->size() + 11400 /* used size + project size + session gap */ > 2097152 /* 4 GB */ ) ||
                 d->doc->writingMode() == K3b::DAO ) {
            return K3bDataDoc::NONE;
        }
        else {
            return K3bDataDoc::START;
        }
    }
}


bool K3bDataMultiSessionParameterJob::setupMultiSessionParameters()
{
    K3bDevice::DiskInfo info = d->doc->burner()->diskInfo();
    K3bDevice::Toc toc = d->doc->burner()->readToc();

    //
    // determine the multisession import info
    //
    unsigned long lastSessionStart = 0;
    unsigned long nextSessionStart = 0;
    d->importSession = true;

    // FIXME: Does BD-RE really behave like DVD+RW here?
    if( info.mediaType() & (K3bDevice::MEDIA_DVD_PLUS_RW|
                            K3bDevice::MEDIA_DVD_PLUS_RW_DL|
                            K3bDevice::MEDIA_DVD_RW_OVWR|
                            K3bDevice::MEDIA_BD_RE) ) {
        lastSessionStart = 0;

        // get info from iso filesystem
        K3bIso9660 iso( d->doc->burner(), toc.last().firstSector().lba() );
        if( iso.open() ) {
            nextSessionStart = iso.primaryDescriptor().volumeSpaceSize;
        }
        else {
            emit infoMessage( i18n("Could not open Iso9660 filesystem in %1.")
                              .arg( d->doc->burner()->vendor() + " " + d->doc->burner()->description() ), K3bJob::ERROR );
            return false;
        }
    }
    else {
        nextSessionStart = d->doc->burner()->nextWritableAddress();
        lastSessionStart = toc.last().firstSector().lba();
        if ( d->doc->importedSession() > 0 ) {
            for ( K3bDevice::Toc::const_iterator it = toc.begin(); it != toc.end(); ++it ) {
                if ( ( *it ).session() == d->doc->importedSession() ) {
                    lastSessionStart = ( *it ).firstSector().lba();
                    if ( ( *it ).type() == K3bDevice::Track::AUDIO )
                        d->importSession = false;
                    break;
                }
            }
        }
    }

    if ( info.mediaType() & K3bDevice::MEDIA_DVD_ALL ) {
        // pad to closest 32K boundary
        nextSessionStart += 15;
        nextSessionStart /= 16;
        nextSessionStart *= 16;

        // growisofs does it. I actually do not know yet why.... :(
        lastSessionStart += 16;
    }

    d->previousSessionStart = lastSessionStart;
    d->nextSessionStart = nextSessionStart;

    return true;
}

#include "k3bdatamultisessionparameterjob.moc"