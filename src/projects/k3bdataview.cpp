/*
 *
 * Copyright (C) 2003-2008 Sebastian Trueg <trueg@k3b.org>
 * Copyright (C) 2009      Gustavo Pichorim Boiko <gustavo.boiko@kdemail.net>
 * Copyright (C) 2009-2010 Michal Malek <michalm@jabster.pl>
 *
 * This file is part of the K3b project.
 * Copyright (C) 1998-2009 Sebastian Trueg <trueg@k3b.org>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * See the file "COPYING" for the exact licensing terms.
 */


#include "k3bdataview.h"
#include "k3bdataburndialog.h"
#include "k3bdatadoc.h"
#include "k3bdataprojectmodel.h"
#include "k3bdataviewimpl.h"
#include "k3bdirproxymodel.h"
#include "k3bmediaselectioncombobox.h"

#include <KLocalizedString>
#include <KMessageBox>
#include <KActionCollection>
#include <KToolBar>
#include <KConfig>
#include <KSharedConfig>

#include <QDebug>
#include <QUrl>
#include <QAction>
#include <QHeaderView>
#include <QTreeView>
#include <QSplitter>
#include <QHBoxLayout>
#include <QPushButton>
#include <QLabel>
#include <QComboBox>
#include <QFileDialog>

#include "misc/k3bimagewritingdialog.h"
#include "k3bapplication.h"
#include "k3bappdevicemanager.h"
#include "k3bmediacache.h"
#include <Solid/Block>
#include <Solid/Device>
#include <Solid/StorageAccess>
#include <KMountPoint>

K3b::DataView::DataView( K3b::DataDoc* doc, QWidget* parent )
:
    View( doc, parent ),
    m_doc( doc ),
    m_dataViewImpl( new DataViewImpl( this, m_doc, actionCollection() ) ),
    m_dirView( new QTreeView( this ) ),
    m_dirProxy( new DirProxyModel( this ) )
{
    m_dirProxy->setSourceModel( m_dataViewImpl->model() );

    // Dir panel
    
    m_dirView->setRootIsDecorated( false );
    m_dirView->setHeaderHidden( true );
    m_dirView->setAcceptDrops( true );
    m_dirView->setDragEnabled( true );
    m_dirView->setDragDropMode( QTreeView::DragDrop );
    m_dirView->setSelectionMode( QTreeView::SingleSelection );
    m_dirView->setVerticalScrollMode( QAbstractItemView::ScrollPerPixel );
    m_dirView->setModel( m_dirProxy );
    m_dirView->expandToDepth( 1 ); // Show first-level directories directories by default
    m_dirView->setColumnHidden( DataProjectModel::TypeColumn, true );
    m_dirView->setColumnHidden( DataProjectModel::SizeColumn, true );
    //*********************************************************************
    m_dirView->setColumnHidden( DataProjectModel::PathColumn, true );
    m_dirView->hide();
    
    
    QPushButton *burn_setting = new QPushButton(this);
    burn_setting->setText("setting");
    burn_setting->setMinimumSize(80, 30);

    QPushButton *burn_button = new QPushButton(this);
    burn_button->setText("start burner");
    burn_button->setMinimumSize(140, 45);

    QLabel *label = new QLabel(this);
    QGridLayout *layout = new QGridLayout(label);

    QList<K3b::Device::Device*> device_list = k3bappcore->deviceManager()->allDevices();
    foreach( K3b::Device::Device* device, device_list){
        qDebug()<< "descripition::" << device->description() <<endl;
    }

    QLabel *label_burner = new QLabel(label);
    label_burner->setText("current burner");
    label_burner->setMinimumSize(75, 30);

    combo_burner = new QComboBox(label);
    combo_burner->setMinimumSize(310, 30);
    
    QLabel *label_space = new QLabel(label);

    QLabel *label_CD = new QLabel(label);
    label_CD->setText("current CD");
    label_CD->setMinimumSize(75, 30);

    combo_CD = new QComboBox(label);
    combo_CD->setMinimumSize(310, 30);

    layout->addWidget( m_dataViewImpl->view(), 0, 0, 1, 5 );
    layout->addWidget( label_burner, 1, 0, 1, 1 );
    layout->addWidget( combo_burner, 1, 1, 1, 1 );
    layout->addWidget( label_CD, 2, 0, 1, 1 );
    layout->addWidget( combo_CD, 2, 1, 1, 1 );
    layout->addWidget( burn_setting, 2, 2, 1, 1 );
    layout->addWidget( label_space, 2, 3, 1, 1 );
    layout->addWidget( burn_button, 2, 4, 1, 1 );
    
    layout->setColumnStretch(0, 1);
    layout->setColumnStretch(1, 4);
    layout->setColumnStretch(2, 1);
    layout->setColumnStretch(3, 4);
    layout->setColumnStretch(4, 1);
    layout->setRowStretch(0, 4);
    layout->setRowStretch(1, 1);
    layout->setRowStretch(2, 1);
    layout->setHorizontalSpacing(15);
    layout->setVerticalSpacing(25);

    QSplitter* splitter = new QSplitter( this );
    //splitter->addWidget( m_dirView );
    //splitter->addWidget( ButtonView );
    //splitter->addWidget( m_dataViewImpl->view() );
    splitter->addWidget( label );
    splitter->setStretchFactor( 0, 1 );
    splitter->setStretchFactor( 1, 3 );
    setMainWidget( splitter );

    // FIXME: always sort folders first in fileview
    // FIXME: allow sorting by clicking fileview headers
/*
    connect( actionCollection()->action( "parent_dir" ), SIGNAL(triggered()),
             this, SLOT(slotParentDir()) );
*/     
    add_device_urls("/home/ukylin/screenshot");
    m_doc->setVolumeID( "data_burn" );
    

    connect( burn_setting, SIGNAL(clicked()), this, SLOT(slotBurn()) );
    connect( burn_button, SIGNAL(clicked()), this, SLOT(slotStartBurn()) );

    connect( m_dataViewImpl, SIGNAL(setCurrentRoot(QModelIndex)),
             this, SLOT(slotSetCurrentRoot(QModelIndex)) );

    connect( m_dirView->selectionModel(), SIGNAL(selectionChanged(QItemSelection,QItemSelection)),
             this, SLOT(slotCurrentDirChanged()) );

    if( m_dirProxy->rowCount() > 0 )
        m_dirView->setCurrentIndex( m_dirProxy->index( 0, 0 ) );
    /********************************************/
/*    connect( k3bappcore->appDeviceManager(), SIGNAL( currentDeviceChanged( K3b::Device::Device* ) ),
              this, SLOT( slotMountPoint( K3b::Device::Device* ) ) );*/
    connect( k3bappcore->mediaCache(), SIGNAL(mediumChanged(K3b::Device::Device*)),
              this, SLOT(slotMediaChange(K3b::Device::Device*)) );
    connect( k3bcore->deviceManager(), SIGNAL(changed(K3b::Device::DeviceManager*)),
              this, SLOT(slotDeviceChange(K3b::Device::DeviceManager*)) );

    // Setup toolbar
    /*
    toolBox()->addAction( actionCollection()->action( "project_data_import_session" ) );
    toolBox()->addAction( actionCollection()->action( "project_data_clear_imported_session" ) );
    toolBox()->addAction( actionCollection()->action( "project_data_edit_boot_images" ) );
    */
    toolBox()->addAction( actionCollection()->action( "open_dir" ) );
    toolBox()->addAction( actionCollection()->action( "remove" ) );
    toolBox()->addAction( actionCollection()->action( "clear" ) );
    //toolBox()->addAction( actionCollection()->action( "parent_dir" ) );
    toolBox()->addSeparator();
    toolBox()->addAction( actionCollection()->action( "new_dir" ) );
    //toolBox()->addActions( createPluginsActions( m_doc->type() ) );
    toolBox()->addSeparator();
    toolBox()->addAction( actionCollection()->action( "project_volume_name" ) );

    // this is just for testing (or not?)
    // most likely every project type will have it's rc file in the future
    // we only add the additional actions since View already added the default actions

    setXML( "<!DOCTYPE gui SYSTEM \"kpartgui.dtd\">"
            "<gui name=\"k3bproject\" version=\"1\">"
            "<MenuBar>"
            " <Menu name=\"project\"><text>&amp;Project</text>"
            "  <Action name=\"project_data_import_session\"/>"
            "  <Action name=\"project_data_clear_imported_session\"/>"
            "  <Action name=\"project_data_edit_boot_images\"/>"
            " </Menu>"
            "</MenuBar>"
            "</gui>", true );

}


K3b::DataView::~DataView()
{
}
#if 1
void K3b::DataView::slotDeviceChange( K3b::Device::DeviceManager* manager )
{
    //qDebug()<< "mount at:" << k3bappcore->appDeviceManager()->currentDevice() <<endl;
    qDebug()<< "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa" <<endl;
    QList<K3b::Device::Device*> device_list = k3bcore->deviceManager()->allDevices();
    if ( device_list.count() == 0 ){
        combo_burner->setEnabled(false);
        combo_CD->setEditable(true);
    }else
        slotMediaChange( 0 );
}
#endif
#if 1
void K3b::DataView::slotMediaChange( K3b::Device::Device* dev )
{
    //if(dev){
    QList<K3b::Device::Device*> device_list = k3bappcore->appDeviceManager()->allDevices();
    combo_burner->clear();
    combo_CD->clear();
    qDebug()<< "device count" << device_list.count() <<endl;
    foreach(K3b::Device::Device* device, device_list){
        combo_burner->addItem( device->vendor() + " " + device->description() );
        device_index.append( device->vendor() + " " + device->description() );
        KMountPoint::Ptr mountPoint = KMountPoint::currentMountPoints().findByDevice( device->blockDeviceName() );
        if( !mountPoint ){
            combo_CD->addItem( "please insert a medium or empty CD" );
            CD_index.append( "please insert a medium or empty CD" );
            return;
        }
        combo_CD->addItem( k3bappcore->mediaCache()->medium( device ).shortString() + " " + KIO::convertSize( device->diskInfo().remainingSize().mode1Bytes() ));
        CD_index.append( k3bappcore->mediaCache()->medium( device ).shortString() + " " + KIO::convertSize( device->diskInfo().remainingSize().mode1Bytes() ));
        mount_index.append( mountPoint->mountPoint() );
    }
    add_device_urls( mount_index.at(0) );
    //}
 
}
#endif

K3b::ProjectBurnDialog* K3b::DataView::newBurnDialog( QWidget* parent )
{
    return new DataBurnDialog( m_doc, parent );
}

void K3b::DataView::add_device_urls(QString filepath)
{
    QString s;
    m_doc->clear();
    if (filepath != NULL){
        QDir *dir = new QDir(filepath);
        QStringList nameFilters;
        QList<QFileInfo> fileinfo(dir->entryInfoList( nameFilters ) );
        for ( int i = 0; i < fileinfo.count(); i++ ){
             if( strstr(fileinfo.at(i).filePath().toLatin1().data(), "/.") != NULL )
                 continue;
             s = "file://" + fileinfo.at(i).filePath();
             m_doc->addUrls( QList<QUrl>() << QUrl( s ) );
        }
    }
}

void K3b::DataView::slotStartBurn()
{
    
    DataBurnDialog *dlg = new DataBurnDialog( m_doc, this);
    dlg->slotStartClicked();
    
    delete dlg;
}

void K3b::DataView::slotBurn()
{
    if( m_doc->burningSize() == 0 ) {
        KMessageBox::information( this, i18n("Please add files to your project first."),
                                  i18n("No Data to Burn") );
    }
    else {
        ProjectBurnDialog* dlg = newBurnDialog( this );
        dlg->execBurnDialog(true);
        delete dlg;
    }
}


void K3b::DataView::addUrls( const QList<QUrl>& urls )
{
    m_dataViewImpl->addUrls( m_dirProxy->mapToSource( m_dirView->currentIndex() ), urls );
}


void K3b::DataView::slotParentDir()
{
    m_dirView->setCurrentIndex( m_dirView->currentIndex().parent() );
}


void K3b::DataView::slotCurrentDirChanged()
{
    QModelIndexList indexes = m_dirView->selectionModel()->selectedRows();
    if( indexes.count() ) {
        m_dataViewImpl->slotCurrentRootChanged( m_dirProxy->mapToSource( indexes.first() ) );
    }
}


void K3b::DataView::slotSetCurrentRoot( const QModelIndex& index )
{
    m_dirView->setCurrentIndex( m_dirProxy->mapFromSource( index ) );
}


