/* 
 *
 * $Id$
 *
 * This file is part of the K3b project.
 * Copyright (C) 1998-2003 Sebastian Trueg <trueg@k3b.org>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * See the file "COPYING" for the exact licensing terms.
 */



#ifndef K3BSETUPWIZARDTABS_H
#define K3BSETUPWIZARDTABS_H

#include "k3bsetuptab.h"

#include <klistview.h>
#include <qmap.h>

namespace K3bCdDevice {
  class CdDevice;
}
class QPushButton;
class QLabel;
class QCheckBox;
class QListBox;
class QGroupBox;
class QLineEdit;
class QListViewItem;
class K3bDeviceWidget;
class K3bExternalBinWidget;
class K3bListView;


class K3bDeviceViewItem : public KListViewItem
{
 public:
  K3bDeviceViewItem( K3bCdDevice::CdDevice*, KListView*, const QString& = QString::null );
  K3bDeviceViewItem( K3bCdDevice::CdDevice*, KListViewItem*, const QString& = QString::null );
  K3bDeviceViewItem( K3bCdDevice::CdDevice*, KListViewItem*, KListViewItem* prev, const QString& = QString::null );

  K3bCdDevice::CdDevice* device;
};




class WelcomeTab : public K3bSetupTab
{
  Q_OBJECT

 public:
  WelcomeTab( int, int, K3bSetupWizard* );
};


class DeviceTab : public K3bSetupTab
{
  Q_OBJECT

 public:
  DeviceTab( int, int, K3bSetupWizard* );

  void readSettings();
  bool saveSettings();

 private slots:
  void slotRefreshButtonClicked();

 private:
  K3bDeviceWidget* m_deviceWidget;
};


class NoWriterTab : public K3bSetupTab
{
  Q_OBJECT

 public:
  NoWriterTab( int, int, K3bSetupWizard* );

  bool appropriate();
};


class FstabEntriesTab : public K3bSetupTab
{
  Q_OBJECT

 public:
  FstabEntriesTab( int, int, K3bSetupWizard* );

  void readSettings();
  bool saveSettings();

  void writeFstabEntries();

 private slots:
  void slotItemRenamed( QListViewItem*, const QString&, int );

 private:
  K3bListView* m_viewWithEntry;
  K3bListView* m_viewNoEntry;
  QCheckBox* m_checkCreateNewEntries;
 
  class FstabViewItem;
};


class ExternalBinTab : public K3bSetupTab
{
  Q_OBJECT

 public:
  ExternalBinTab( int, int, K3bSetupWizard* );

  void readSettings();
  bool saveSettings();

  void aboutToShow();

 private:
  QLabel*      m_labelExternalPrograms;
  K3bExternalBinWidget* m_externalBinWidget;
};


class PermissionTab : public K3bSetupTab
{
  Q_OBJECT

 public:
  PermissionTab( int, int, K3bSetupWizard* );

  void readSettings();
  bool saveSettings();

 private slots:
  void slotAddUser();
  void slotRemoveUser();
  void slotPermissionsDetails();

 private:
  QLabel*      m_labelPermissions1;
  QGroupBox*   m_groupUsers;
  QListBox*    m_boxUsers;
  QPushButton* m_buttonRemoveUser;
  QPushButton* m_buttonAddUser;
  QCheckBox*   m_checkPermissionsDevices;
  QCheckBox*   m_checkPermissionsExternalPrograms;
  QPushButton* m_buttonPermissionsDetails;
  QGroupBox*   m_groupWriterGroup;
  QLineEdit*   m_editPermissionsGroup;
};


class FinishTab : public K3bSetupTab
{
  Q_OBJECT

 public:
  FinishTab( int, int, K3bSetupWizard* );

 private slots:
  void slotWritingSetting( const QString& s );
  void slotSettingWritten( bool success, const QString& comment );
  void slotError( const QString& error );

 private:
  KListView* m_viewChanges;
  KListViewItem* m_currentInfoViewItem;
};

#endif
