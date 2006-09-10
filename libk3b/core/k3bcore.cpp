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

#include "k3bcore.h"
#include "k3bjob.h"

#include <k3bdevicemanager.h>
#include <k3bexternalbinmanager.h>
#include <k3bdefaultexternalprograms.h>
#include <k3bglobals.h>
#include <k3bversion.h>
#include <k3bjob.h>
#include <k3bthreadwidget.h>
#include <k3bglobalsettings.h>
#include <k3bpluginmanager.h>

#include <klocale.h>
#include <kconfig.h>
#include <kaboutdata.h>
#include <kstandarddirs.h>
#include <kapplication.h>

#include <qptrlist.h>



class K3bCore::Private {
public:
  Private()
    : version( LIBK3B_VERSION ),
      config(0),
      deleteConfig(false),
      deviceManager(0),
      externalBinManager(0),
      pluginManager(0),
      globalSettings(0) {
  }

  K3bVersion version;
  KConfig* config;
  bool deleteConfig;
  K3bDevice::DeviceManager* deviceManager;
  K3bExternalBinManager* externalBinManager;
  K3bPluginManager* pluginManager;
  K3bGlobalSettings* globalSettings;

  QValueList<K3bJob*> runningJobs;
  QValueList<K3bDevice::Device*> blockedDevices;
};



K3bCore* K3bCore::s_k3bCore = 0;



K3bCore::K3bCore( QObject* parent, const char* name )
  : QObject( parent, name )
{
  d = new Private();

  if( s_k3bCore )
    qFatal("ONLY ONE INSTANCE OF K3BCORE ALLOWED!");
  s_k3bCore = this;

  // create the thread widget instance in the GUI thread
  K3bThreadWidget::instance();
}


K3bCore::~K3bCore()
{
  s_k3bCore = 0;

  delete d->globalSettings;
  delete d;
}


K3bDevice::DeviceManager* K3bCore::deviceManager() const
{
  const_cast<K3bCore*>(this)->initDeviceManager();
  return d->deviceManager;
}


K3bExternalBinManager* K3bCore::externalBinManager() const
{
  const_cast<K3bCore*>(this)->initExternalBinManager();
  return d->externalBinManager;
}


K3bPluginManager* K3bCore::pluginManager() const
{
  const_cast<K3bCore*>(this)->initPluginManager();
  return d->pluginManager;
}


K3bGlobalSettings* K3bCore::globalSettings() const
{
  const_cast<K3bCore*>(this)->initGlobalSettings();
  return d->globalSettings;
}


const K3bVersion& K3bCore::version() const
{
  return d->version;
}


KConfig* K3bCore::config() const
{
  if( !d->config ) {
    kdDebug() << "(K3bCore) opening k3b config file." << endl;
    kdDebug() << "(K3bCore) while I am a " << className() << endl;
    d->deleteConfig = true;
    d->config = new KConfig( "k3brc" );
  }

  return d->config;
}


void K3bCore::init()
{
  initGlobalSettings();
  initExternalBinManager();
  initDeviceManager();
  initPluginManager();

  // load the plugins before doing anything else
  // they might add external bins
  pluginManager()->loadAll();

  externalBinManager()->search();

  if( !deviceManager()->scanBus() )
    kdDebug() << "No Devices found!" << endl;
}


void K3bCore::initGlobalSettings()
{
  if( !d->globalSettings )
    d->globalSettings = new K3bGlobalSettings();
}


void K3bCore::initExternalBinManager()
{
  if( !d->externalBinManager ) {
    d->externalBinManager = new K3bExternalBinManager( this );
    K3b::addDefaultPrograms( d->externalBinManager );
  }
}


void K3bCore::initDeviceManager()
{
  if( !d->deviceManager )
    d->deviceManager = new K3bDevice::DeviceManager( this );
}


void K3bCore::initPluginManager()
{
  if( !d->pluginManager )
    d->pluginManager = new K3bPluginManager( this );
}


void K3bCore::readSettings( KConfig* cnf )
{
  KConfig* c = cnf;
  if( !c )
    c = config();

  QString oldGrp = c->group();

  globalSettings()->readSettings( c );
  deviceManager()->readConfig( c );
  externalBinManager()->readConfig( c );

  c->setGroup( oldGrp );
}


void K3bCore::saveSettings( KConfig* cnf )
{
  KConfig* c = cnf;
  if( !c )
    c = config();

  QString oldGrp = c->group();

  c->setGroup( "General Options" );
  c->writeEntry( "config version", version() );

  deviceManager()->saveConfig( c );
  externalBinManager()->saveConfig( c );
  d->globalSettings->saveSettings( c );

  c->setGroup( oldGrp );
}


void K3bCore::registerJob( K3bJob* job )
{
  d->runningJobs.append( job );
  emit jobStarted( job );
  if( K3bBurnJob* bj = dynamic_cast<K3bBurnJob*>( job ) )
    emit burnJobStarted( bj );
}


void K3bCore::unregisterJob( K3bJob* job )
{
  d->runningJobs.remove( job );
  emit jobFinished( job );
  if( K3bBurnJob* bj = dynamic_cast<K3bBurnJob*>( job ) )
    emit burnJobFinished( bj );
}


bool K3bCore::jobsRunning() const
{
  return !d->runningJobs.isEmpty();
}


const QValueList<K3bJob*>& K3bCore::runningJobs() const
{
  return d->runningJobs;
}


bool K3bCore::blockDevice( K3bDevice::Device* dev )
{
  if( !d->blockedDevices.contains( dev ) ) {
    d->blockedDevices.append( dev );
    return true;
  }
  else
    return false;
}


void K3bCore::unblockDevice( K3bDevice::Device* dev )
{
  d->blockedDevices.remove( dev );
}

#include "k3bcore.moc"