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
#include <QThread>
#include <KMountPoint>
/*
#include <QStyleFactory>
*/
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
    m_dirView->setFrameStyle(QFrame::NoFrame); //去掉边框

    m_dirView->setRootIsDecorated( false ); //去虚线边框
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
    
    QFrame *line = new QFrame(this);
    line->setGeometry(QRect(40, 180, 400, 3));
    line->setFrameShape(QFrame::HLine);
    line->setFrameShadow(QFrame::Sunken);
    line->raise();

    burn_setting = new QPushButton(this);
    burn_setting->setText(i18n("setting"));
    //burn_setting->setText("open");
    burn_setting->setVisible(false);
    burn_setting->setMinimumSize(80, 30);
    burn_setting->setStyleSheet("QPushButton{background-color:rgb(233, 233, 233);font: 14px;border-radius: 4px;}"
                                "QPushButton:hover{background-color:rgb(107, 142, 235);font: 14px;border-radius: 4px;}"
                                "QPushButton:pressed{border:none;background-color:rgb(65, 95, 196);font: 14px;border-radius: 4px;}");

    burn_button = new QPushButton(this);
    burn_button->setText(i18n("start burner"));
    //burn_button->setText("create iso");
    burn_button->setVisible(false);
    burn_button->setMinimumSize(140, 45);
    burn_button->setStyleSheet("QPushButton{background-color:rgb(61, 107, 229);font: 14px;border-radius: 4px;color: rgb(255,255,255);}"
                               "QPushButton:hover{background-color:rgb(107, 142, 235);font: 14px;border-radius: 4px;color: rgb(255,255,255);}"
                               "QPushButton:pressed{border:none;background-color:rgb(65, 95, 196);font: 14px;border-radius: 4px;color: rgb(255,255,255);}");

    QLabel *label = new QLabel(this);
    QGridLayout *layout = new QGridLayout(label);

    QLabel *label_burner = new QLabel(label);
    label_burner->setText(i18n("current burner"));
    label_burner->setMinimumSize(75, 30);

    combo_burner = new QComboBox(label);
    combo_burner->setEnabled( false );
    combo_burner->setMinimumSize(310, 30);
    
    QLabel *label_space = new QLabel(label);

    QLabel *label_CD = new QLabel(label);
    label_CD->setText(i18n("current CD"));
    label_CD->setMinimumSize(75, 30);

    combo_CD = new QComboBox(label);
    combo_CD->setEnabled( false );
    combo_CD->setEditable( true );
    combo_CD->setMinimumSize(310, 30);
    
    m_dataViewImpl->view()->setFrameStyle(QFrame::NoFrame);
    //m_dataViewImpl->view()->setStyle(QStyleFactory::create("windows"));
/*
    m_dataViewImpl->view()->setStyleSheet("QTreeView {outline:none;show-decoration-selected: 1;}"
	                                      "QTreeView {outline:none;border:0px;}"
	                                      "QTreeView::branch{background-color: transparent;	border-color: #b3b3b3;}"
	                                      "QTreeView::item, QTreeView::branch:hover { background-color: transparent;border-color: #b3b3b3;}"
 	                                      "QTreeView::item:selected, QTreeView::branch:selected { background-color: #b3b3b3;}");
*/

    layout->addWidget( m_dataViewImpl->view(), 0, 0, 1, 5 );
    layout->addWidget( line, 1, 0, 1, 5);
    layout->addWidget( label_burner, 2, 0, 1, 1 );
    layout->addWidget( combo_burner, 2, 1, 1, 1 );
    layout->addWidget( label_CD, 3, 0, 1, 1 );
    layout->addWidget( combo_CD, 3, 1, 1, 1 );
    layout->addWidget( burn_setting, 3, 2, 1, 1 );
    layout->addWidget( label_space, 3, 3, 1, 1 );
    layout->addWidget( burn_button, 3, 4, 1, 1 );
    
    layout->setColumnStretch(0, 1);
    layout->setColumnStretch(1, 4);
    layout->setColumnStretch(2, 1);
    layout->setColumnStretch(3, 4);
    layout->setColumnStretch(4, 1);
    layout->setRowStretch(0, 4);
    layout->setRowStretch(1, 1);
    layout->setRowStretch(2, 1);
    layout->setRowStretch(3, 1);
    layout->setHorizontalSpacing(15);
    layout->setVerticalSpacing(10);

    QSplitter* splitter = new QSplitter( this );
    //splitter->addWidget( m_dirView );
    //splitter->addWidget( ButtonView );
    //splitter->addWidget( m_dataViewImpl->view() );
    splitter->addWidget( label );
    //splitter->setStretchFactor( 0, 1 );
    //splitter->setStretchFactor( 1, 3 );
    setMainWidget( splitter );

    // FIXME: always sort folders first in fileview
    // FIXME: allow sorting by clicking fileview headers
/*
    connect( actionCollection()->action( "parent_dir" ), SIGNAL(triggered()),
             this, SLOT(slotParentDir()) );
*/     
    m_doc->setVolumeID( "data_burn" );
    

    connect( burn_setting, SIGNAL(clicked()), this, SLOT(slotBurn()) );
    connect( burn_button, SIGNAL(clicked()), this, SLOT(slotStartBurn()) );
    
    connect( combo_burner, SIGNAL( currentIndexChanged(int) ), this, SLOT( slotComboBurner(int) ) );
    connect( combo_CD, SIGNAL( currentIndexChanged(int) ), this, SLOT( slotComboCD(int) ) );

    connect( m_dataViewImpl, SIGNAL(setCurrentRoot(QModelIndex)),
             this, SLOT(slotSetCurrentRoot(QModelIndex)) );

    connect( m_dirView->selectionModel(), SIGNAL(selectionChanged(QItemSelection,QItemSelection)),
             this, SLOT(slotCurrentDirChanged()) );

    if( m_dirProxy->rowCount() > 0 )
        m_dirView->setCurrentIndex( m_dirProxy->index( 0, 0 ) );
    /********************************************/
/*    connect( k3bappcore->appDeviceManager(), SIGNAL( currentDeviceChanged( K3b::Device::Device* ) ),
              this, SLOT( slotMountPoint( K3b::Device::Device* ) ) );*/
#if 1
    connect( k3bappcore->mediaCache(), SIGNAL(mediumChanged(K3b::Device::Device*)),
              this, SLOT(slotMediaChange(K3b::Device::Device*)) );
    connect( k3bcore->deviceManager(), SIGNAL(changed(K3b::Device::DeviceManager*)),
              this, SLOT(slotDeviceChange(K3b::Device::DeviceManager*)) );
#endif
/*
add menu button
*/
    QLabel* label_action = new QLabel( this );
    label_action->setMinimumSize(370, 30);
    
    QPushButton* button_add = new QPushButton( label_action );
    button_add->setText(i18n("Add"));
    button_add->setFixedSize(80, 30);
    button_add->setStyleSheet("QPushButton{background-image: url(:/icon/icon/icon-添加-默认.png);background-color:rgb(233, 233, 233);background-repeat: no-repeat;background-position:left;color:#444444;font: 14px;border-radius: 4px;border-left:12px solid rgb(233, 233, 233);}"
                              "QPushButton:hover{background-image: url(:/icon/icon/icon-添加-悬停点击.png);background-color:rgb(107, 142, 235);background-repeat: no-repeat;background-position:left;color:#ffffff;font: 14px;border-radius: 4px;}"
                              "QPushButton:pressed{background-image: url(:/icon/icon/icon-添加-悬停点击.png);background-color:rgb(65, 95, 196);background-repeat: no-repeat;background-position:left;border:none;color:#ffffff;font: 14px;border-radius: 4px;}");
    
    QPushButton* button_remove = new QPushButton( label_action );
    button_remove->setText(i18n("Remove"));
    button_remove->setFixedSize(80, 30);
    button_remove->setStyleSheet("QPushButton{background-image: url(:/icon/icon/icon-删除-默认.png);background-color:rgb(233, 233, 233);background-repeat: no-repeat;background-position:left;color:#444444;font: 14px;border-radius: 4px;}"
                                 "QPushButton:hover{background-image: url(:/icon/icon/icon-删除-悬停点击.png);background-color:rgb(107, 142, 235);background-repeat: no-repeat;background-position:left;color:#ffffff;font: 14px;border-radius: 4px;}"
                                 "QPushButton:pressed{background-image: url(:/icon/icon/icon-删除-悬停点击.png);background-color:rgb(65, 95, 196);background-repeat: no-repeat;background-position:left;border:none;color:#ffffff;font: 14px;border-radius: 4px;}");
    
    QPushButton* button_clear = new QPushButton( label_action );
    button_clear->setText(i18n("Clear"));
    button_clear->setFixedSize(80, 30);
    button_clear->setStyleSheet("QPushButton{background-image: url(:/icon/icon/icon-清空-默认.png);background-color:rgb(233, 233, 233);background-repeat: no-repeat;background-position:left;color:#444444;font: 14px;border-radius: 4px;}"
                                "QPushButton:hover{background-image: url(:/icon/icon/icon-清空-悬停点击.png);background-color:rgb(107, 142, 235);background-repeat: no-repeat;background-position:left;color:#ffffff;font: 14px;border-radius: 4px;}"
                                 "QPushButton:pressed{background-image: url(:/icon/icon/icon-清空-悬停点击.png);background-color:rgb(65, 95, 196);background-repeat: no-repeat;background-position:left;border:none;color:#ffffff;font: 14px;border-radius: 4px;}");
    
    QPushButton* button_newdir = new QPushButton( label_action );
    button_newdir->setText(i18n("New Dir"));
    button_newdir->setFixedSize(80, 30);
    button_newdir->setStyleSheet("QPushButton{background-image: url(:/icon/icon/icon-新建文件-默认.png);background-color:rgb(233, 233, 233);background-repeat: no-repeat;background-position:left;color:#444444;font: 14px;border-radius: 4px;}"
                                 "QPushButton:hover{background-image: url(:/icon/icon/icon-新建文件-悬停点击.png);background-color:rgb(107, 142, 235);background-repeat: no-repeat;background-position:left;color:#ffffff;font: 14px;border-radius: 4px;}"
                                 "QPushButton:pressed{background-image: url(:/icon/icon/icon-新建文件-悬停点击.png);background-color:rgb(65, 95, 196);background-repeat: no-repeat;background-position:left;border:none;color:#ffffff;font: 14px;border-radius: 4px;}");
    //QLabel* label_action = new QLabel( this );
    QHBoxLayout* layout_action = new QHBoxLayout( label_action );
    layout_action->setContentsMargins(0,0,0,0);
    layout_action->addWidget( button_add );
    layout_action->addStretch(8);
    layout_action->addWidget( button_remove );
    layout_action->addStretch(8);
    layout_action->addWidget( button_clear );
    layout_action->addStretch(8);
    layout_action->addWidget( button_newdir );
    
    connect( button_add, SIGNAL( clicked() ), this, SLOT( slotOpenClicked() ) );
    connect( button_remove, SIGNAL( clicked() ), this, SLOT( slotRemoveClicked() ) );
    connect( button_clear, SIGNAL( clicked() ), this, SLOT( slotClear()clicked  ) );
    connect( button_newdir, SIGNAL( clicked() ), this, SLOT( slotNewdirClicked() ) );

 // Setup toolbar
    /*
    toolBox()->addAction( actionCollection()->action( "project_data_import_session" ) );
    toolBox()->addAction( actionCollection()->action( "project_data_clear_imported_session" ) );
    toolBox()->addAction( actionCollection()->action( "project_data_edit_boot_images" ) );
    
    toolBox()->addAction( actionCollection()->action( "open_dir" ) );
    toolBox()->addAction( actionCollection()->action( "remove" ) );
    toolBox()->addAction( actionCollection()->action( "clear" ) );
    toolBox()->addAction( actionCollection()->action( "parent_dir" ) );
    toolBox()->addSeparator();
    toolBox()->addAction( actionCollection()->action( "new_dir" ) );
    toolBox()->addActions( createPluginsActions( m_doc->type() ) );
    toolBox()->addSeparator();*/
    toolBox()->addWidget( label_action );
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

void K3b::DataView::slotOpenClicked()
{
    m_dataViewImpl->slotOpenDir();
}

void K3b::DataView::slotRemoveClicked()
{
    m_dataViewImpl->slotRemove();
}

void K3b::DataView::slotClearClicked()
{
    m_dataViewImpl->slotClear();
}

void K3b::DataView::slotNewdirClicked()
{
    m_dataViewImpl->slotNewDir();
}

#if 1
void K3b::DataView::slotDeviceChange( K3b::Device::DeviceManager* manager )
{
    //qDebug()<< "mount at:" << k3bappcore->appDeviceManager()->currentDevice() <<endl;
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
    //QThread::sleep(5);
    QList<K3b::Device::Device*> device_list = k3bappcore->appDeviceManager()->allDevices();
    combo_burner->clear();
    burn_button->setVisible(true);
    combo_CD->clear();
    combo_CD->setEditable( false );
    combo_burner->blockSignals( true );
    //combo_CD->blockSignals( true );
    mount_index.clear();
    device_index.clear();
    
    qDebug()<< "device count" << device_list.count() <<endl;
    foreach(K3b::Device::Device* device, device_list){
        burn_setting->setVisible(true);
        combo_burner->setEnabled( true );
        combo_CD->setEnabled( true );
        burn_setting->setText(i18n("setting"));
        burn_button->setText(i18n("start burner"));
         
        device_index.append( device );
        //combo_burner->addItem( device->vendor() + " " + device->description() );

        K3b::Medium medium = k3bappcore->mediaCache()->medium( device );
        KMountPoint::Ptr mountPoint = KMountPoint::currentMountPoints().findByDevice( device->blockDeviceName() );
        
        qDebug()<< "device disk state" << device->diskInfo().diskState() <<endl;
        
        if ( device->diskInfo().diskState() == K3b::Device::STATE_EMPTY ){
            qDebug()<< "empty medium" << device <<endl;
            
            mount_index.append( "empty medium" );    
            combo_CD->addItem(QIcon(":/icon/icon/icon-光盘.png"), "empty medium  " + KIO::convertSize( device->diskInfo().remainingSize().mode1Bytes() ));
            combo_burner->addItem( QIcon(":/icon/icon/icon-刻录机.png"), device->vendor() + " " + device->description() );
            continue;
        }
        if( !mountPoint ){
            qDebug()<< "no mount point" << device <<endl;
            
            mount_index.append( "no medium" );    
            combo_CD->addItem( "please insert a medium or empty CD" );
            combo_burner->addItem( QIcon(":/icon/icon/icon-刻录机.png"), device->vendor() + " " + device->description() );
            continue;
        }
        qDebug()<< "mount point" << device <<endl;
        //qDebug()<< "mount point realdevicename" << mountPoint->mountedFrom() <<endl;

        mount_index.append( mountPoint->mountPoint() );
        combo_CD->addItem( QIcon(":/icon/icon/icon-光盘.png"), medium.shortString() + "remaining available space  " + KIO::convertSize( device->diskInfo().remainingSize().mode1Bytes() ));

        combo_burner->addItem( QIcon(":/icon/icon/icon-刻录机.png"), device->vendor() + " " + device->description() );
    }
    combo_burner->blockSignals( false );
    //combo_CD->blockSignals( false );
}
#endif

void K3b::DataView::slotComboBurner(int index)
{
    qDebug()<< " combo burner index " << index << mount_index << endl;
    if ( index < 0 )
        index = 0;
    combo_CD->setCurrentIndex( index );
}

void K3b::DataView::slotComboCD(int index)
{
    qDebug()<< " combo Cd index " << index << mount_index << endl;
    if ( index < 0 )
        index = 0;
    add_device_urls( mount_index.at( index ) );
}

K3b::ProjectBurnDialog* K3b::DataView::newBurnDialog( QWidget* parent )
{
    return new DataBurnDialog( m_doc, parent );
}

void K3b::DataView::add_device_urls(QString filepath)
{
    QString s;
        qDebug()<< "index " << filepath <<endl;
    m_doc->clear();
    if ( filepath == "empty medium" || filepath == "no medium" )
        return;
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
    if ( burn_button->text() == i18n("start burn" )){
        int index = combo_burner->currentIndex();
        dlg->setComboMedium( device_index.at( index ) );
        qDebug()<< "index :" <<  index << " device block name: " << device_index.at( index )->blockDeviceName() <<endl;
    }else if( burn_button->text() == i18n("create iso" )){
        dlg->setOnlyCreateImage( true );
        dlg->setTmpPath( combo_CD->currentText() );
    }
    dlg->slotStartClicked();
    
    delete dlg;
}

void K3b::DataView::slotBurn()
{
    if ( burn_setting->text() == i18n("setting") ){
        if( m_doc->burningSize() == 0 ) {
            KMessageBox::information( this, i18n("Please add files to your project first."),
                                      i18n("No Data to Burn") );
        }
        else {
            ProjectBurnDialog* dlg = newBurnDialog( this );
            dlg->execBurnDialog(true);
            delete dlg;
        }
    }else if ( burn_setting->text() == i18n("open" )){
        QString filepath = QFileDialog::getExistingDirectory(this, "open file dialog", "/home", QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks/* | QFileDialog::DontUseNativeDialog*/);
        combo_CD->setCurrentText( filepath + "/data_burn.iso" );
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


