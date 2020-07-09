/*
 *
 * Copyright (C) 2003-2004 Christian Kvasny <chris@k3b.org>
 * Copyright (C) 2009      Arthur Renato Mello <arthur@mandriva.com>
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

#include "k3bvcdview.h"
#include "k3bvcdprojectmodel.h"
#include "k3bvcddoc.h"
#include "k3bvcdburndialog.h"
#include "k3bvcdtrackdialog.h"
#include "k3bfillstatusdisplay.h"
#include "k3bexternalbinmanager.h"
#include "k3bcore.h"
#include "k3baction.h"

#include <KLocalizedString>
#include <KMessageBox>

#include <QDebug>
#include <QItemSelectionModel>
#include <QString>
#include <QAction>
#include <QHeaderView>
#include <QLayout>
#include <QTreeView>

#include <QLabel>
#include <QFileDialog>
#include "misc/k3bmediacopydialog.h"
#include "k3bapplication.h"
#include "k3bappdevicemanager.h"
#include "k3bmediacache.h"
#include <KMountPoint>

K3b::VcdView::VcdView( K3b::VcdDoc* doc, QWidget* parent )
:
    View( doc, parent ),
    m_doc( doc ),
    m_model( new K3b::VcdProjectModel( m_doc, this ) ),
    //m_view( new QTreeView( this ) )
    m_view( new QTreeView( ) )
{
    QLabel *widget_label = new QLabel(this);
    QGridLayout *layout = new QGridLayout(widget_label);
 
    QLabel* label_title = new QLabel(this);
    label_title->setText(i18n("copy image"));
    QFont title_font;
    title_font.setPointSize(24);
    label_title->setFont( title_font );
    label_title->setStyleSheet("color: #444444");

    QLabel *label_iso = new QLabel(this);
    label_iso->setText(i18n("CD to copy"));
    QFont label_font;
    label_font.setPointSize(14);
    label_iso->setFont( label_font );
    label_iso->setStyleSheet("color: #444444");

    combo_iso = new QComboBox(this);
    combo_iso->setMinimumSize(360, 30);
    
    label_CD = new QRadioButton(this);
    label_CD->setText(i18n("Copy CD"));
    label_CD->setFont( label_font );
    label_CD->setStyleSheet("color: #444444");

    combo_CD = new QComboBox(this);
    combo_CD->setMinimumSize(360, 30);

    button_setting = new QPushButton(this);
    button_setting->setText(i18n("setting"));
    button_setting->setMinimumSize(80, 30);
    button_setting->setStyleSheet("QPushButton{background-color:rgb(233, 233, 233);font: 14px;border-radius: 4px;}"
                                  "QPushButton:hover{background-color:rgb(107, 142, 235);font: 14px;border-radius: 4px;}"
                                  "QPushButton:pressed{border:none;background-color:rgb(65, 95, 196);font: 14px;border-radius: 4px;}");

    QLabel *label_space = new QLabel(this);

    label_path = new QRadioButton(this);
    label_path->setText(i18n("extract image"));

    lineedit_CD = new QLineEdit(this);
    lineedit_CD->setMinimumSize(360, 30);
    label_CD->setFont( label_font );
    label_CD->setStyleSheet("color: #444444");
    
    button_openfile = new QPushButton(this);
    button_openfile->setText(i18n("choice"));
    button_openfile->setMinimumSize(80, 30);
    button_openfile->setStyleSheet("QPushButton{background-color:rgb(233, 233, 233);font: 14px;border-radius: 4px;}"
                                   "QPushButton:hover{background-color:rgb(107, 142, 235);font: 14px;border-radius: 4px;}"
                                   "QPushButton:pressed{border:none;background-color:rgb(65, 95, 196);font: 14px;border-radius: 4px;}");

    QPushButton *button_start = new QPushButton(this);
    button_start->setText(i18n("Start copying/extracting"));
    button_start->setMinimumSize(140, 45);
    button_start->setStyleSheet("QPushButton{background-color:rgb(61, 107, 229);font: 14px;border-radius: 4px;color: rgb(255,255,255);}"
                                "QPushButton:hover{background-color:rgb(107, 142, 235);font: 14px;border-radius: 4px;color: rgb(255,255,255);}"
                                "QPushButton:pressed{border:none;background-color:rgb(65, 95, 196);font: 14px;border-radius: 4px;color: rgb(255,255,255);}");
        
    combo_CD->setEnabled(false);
    button_setting->setEnabled(false);
    button_openfile->setEnabled(false);
    lineedit_CD->setEnabled(false);

    layout->addWidget( label_title, 0, 0, 2, 1 );
    layout->addWidget( label_iso, 1, 0, 1, 1 );
    layout->addWidget( combo_iso, 2, 0, 1, 1 );
    layout->addWidget( label_space, 3, 0, 1, 1 );
    layout->addWidget( label_CD, 4, 0, 1, 1 );
    layout->addWidget( combo_CD, 5, 0, 1, 1 );
    layout->addWidget( button_setting, 5, 1, 1, 1 );
    layout->addWidget( label_space, 6, 0, 1, 1 );
    layout->addWidget( label_path, 7, 0, 1, 1 );
    layout->addWidget( lineedit_CD, 8, 0, 1, 1 );
    layout->addWidget( button_openfile, 8, 1, 1, 1 );
    layout->addWidget( label_space, 9, 0, 1, 1 );
    layout->addWidget( button_start, 10, 2, 1, 1 );

    layout->setRowStretch(0, 3);
    layout->setRowStretch(1, 1);
    layout->setRowStretch(2, 1);
    layout->setRowStretch(3, 3);
    layout->setRowStretch(4, 1);
    layout->setRowStretch(5, 1);
    layout->setRowStretch(6, 3);
    layout->setRowStretch(7, 1);
    layout->setRowStretch(8, 1);
    layout->setRowStretch(9, 3);
    layout->setRowStretch(10, 1);
    layout->setVerticalSpacing(10);

    setMainWidget( widget_label );
    
    connect( label_CD, SIGNAL(clicked()), this, SLOT(slotLabel_CDClicked()) );
    connect( label_path, SIGNAL(clicked()), this, SLOT(slotLabel_pathClicked()) );
    connect( button_openfile, SIGNAL(clicked()), this, SLOT(slotOpenfile()) );
    connect( button_setting, SIGNAL(clicked()), this, SLOT(slotSetting()) );
    connect( button_start, SIGNAL(clicked()), this, SLOT(slotStartBurn()) );

#if 1
    connect( k3bappcore->mediaCache(), SIGNAL(mediumChanged(K3b::Device::Device*)),
              this, SLOT(slotMediaChange(K3b::Device::Device*)) );
    connect( k3bcore->deviceManager(), SIGNAL(changed(K3b::Device::DeviceManager*)),
              this, SLOT(slotDeviceChange(K3b::Device::DeviceManager*)) );
#endif

/*
    m_view->setModel( m_model );
    m_view->setAcceptDrops( true );
    m_view->setDragEnabled( true );
    m_view->setDragDropMode( QTreeView::DragDrop );
    m_view->setItemsExpandable( false );
    m_view->setRootIsDecorated( false );
    m_view->setSelectionMode( QTreeView::ExtendedSelection );
    m_view->setVerticalScrollMode( QAbstractItemView::ScrollPerPixel );
    m_view->setContextMenuPolicy( Qt::ActionsContextMenu );
    // FIXME: make QHeaderView::Interactive the default but connect to model changes and call header()->resizeSections( QHeaderView::ResizeToContents );
    m_view->header()->setSectionResizeMode( QHeaderView::ResizeToContents );
    m_view->setEditTriggers( QAbstractItemView::NoEditTriggers );
    setMainWidget( m_view );

    // setup actions
    m_actionProperties = K3b::createAction( this, i18n("Properties"), "document-properties",
                                            0, this, SLOT(slotProperties()),
                                            actionCollection(), "vcd_show_props" );

    m_actionRemove = K3b::createAction( this, i18n( "Remove" ), "edit-delete",
                                        Qt::Key_Delete, this, SLOT(slotRemove()),
                                        actionCollection(), "vcd_remove_track" );

    connect( m_view, SIGNAL(doubleClicked(QModelIndex)),
             this, SLOT(slotItemActivated(QModelIndex)) );
    connect( m_view->selectionModel(), SIGNAL(selectionChanged(QItemSelection,QItemSelection)),
             this, SLOT(slotSelectionChanged()) );

    QAction* separator = new QAction( this );
    separator->setSeparator( true );
    m_view->addAction( m_actionRemove );
    m_view->addAction( separator );
    m_view->addAction( m_actionProperties );
    m_view->addAction( separator );
    m_view->addAction( actionCollection()->action("project_burn") );*/
}


K3b::VcdView::~VcdView()
{
}

void K3b::VcdView::slotDeviceChange( K3b::Device::DeviceManager* manager)
{
    QList<K3b::Device::Device*> device_list = k3bcore->deviceManager()->allDevices();
    if ( device_list.count() == 0 ){
        combo_iso->setEnabled( false );
        combo_iso->setCurrentText( "please insert a device" );
        combo_CD->setEnabled( false );
        lineedit_CD->setEnabled( false );
    }else
        slotMediaChange( 0 );

}

void K3b::VcdView::slotMediaChange( K3b::Device::Device* dev)
{
    QList<K3b::Device::Device*> device_list = k3bcore->deviceManager()->allDevices();
    combo_iso->clear();
    combo_CD->clear();
    device_index.clear();
    //qDebug()<< "device count" << device_list.count() <<endl;
    
    foreach(K3b::Device::Device* device, device_list){
        combo_iso->setEnabled( true );
        combo_CD->setEnabled( true );
        lineedit_CD->setEnabled( true );

        device_index.append( device );

        K3b::Medium medium = k3bappcore->mediaCache()->medium( device );
        KMountPoint::Ptr mountPoint = KMountPoint::currentMountPoints().findByDevice( device->blockDeviceName() );

        if ( device->diskInfo().diskState() == K3b::Device::STATE_EMPTY ){
            combo_CD->addItem( QIcon(":/icon/icon/icon-光盘.png"), "empty medium " );
            continue;
        }
        //qDebug()<< "device disk state" << device->diskInfo().diskState() <<endl;
        if ( !( device->diskInfo().diskState() & (K3b::Device::STATE_COMPLETE | K3b::Device::STATE_INCOMPLETE ) ) ){
            qDebug()<< "empty medium" << device <<endl;

            combo_iso->addItem( "please insert a medium or empty CD" );
            combo_CD->addItem( "please insert a medium or empty CD" );
            continue;
        }
        if( !(device->diskInfo().mediaType() & K3b::Device::MEDIA_ALL) ){
            qDebug()<< "media type cannot use" << device->diskInfo().mediaType() <<endl;

            combo_iso->addItem( "please insert a medium or empty CD" );
            combo_CD->addItem( "please insert a medium or empty CD" );
            continue;
        }
        //qDebug()<< "mount point" << device <<endl;
        combo_iso->addItem( QIcon(":/icon/icon/icon-光盘.png"), medium.shortString() + KIO::convertSize( device->diskInfo().remainingSize().mode1Bytes() ) );
        combo_CD->addItem( QIcon(":/icon/icon/icon-光盘.png"), medium.shortString() + KIO::convertSize( device->diskInfo().remainingSize().mode1Bytes() ) );

    }

}

void K3b::VcdView::slotOpenfile()
{
    filepath = QFileDialog::getExistingDirectory(this, "open file dialog", "/home", QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks/* | QFileDialog::DontUseNativeDialog*/);

    if(filepath == NULL)
        return;

   lineedit_CD->setText( filepath );

}
void K3b::VcdView::slotLabel_CDClicked()
{
    if ( label_CD->isChecked() ){
        combo_CD->setEnabled(true);
        button_setting->setEnabled(true);
        button_openfile->setEnabled(false);
        lineedit_CD->setEnabled(false);
    }
}
void K3b::VcdView::slotLabel_pathClicked()
{
    if ( label_path->isChecked() ){
        combo_CD->setEnabled(false);
        button_setting->setEnabled(false);
        button_openfile->setEnabled(true);
        lineedit_CD->setEnabled(true);
    }
}

void K3b::VcdView::MediaCopy( K3b::Device::Device* dev )
{
    K3b::MediaCopyDialog *d = new K3b::MediaCopyDialog( this );
    d->setReadingDevice( device_index.at( combo_iso->currentIndex() ) );
    d->setComboMedium( device_index.at( combo_CD->currentIndex() ) );
    qDebug()<< "from" << device_index.at( combo_iso->currentIndex() )->blockDeviceName() << "to" << device_index.at( combo_CD->currentIndex() )->blockDeviceName() <<endl;
    d->saveConfig();
    d->exec();
}

void K3b::VcdView::slotSetting()
{
    MediaCopy(0);
}

void K3b::VcdView::slotStartBurn()
{
    int iso_index = combo_iso->currentIndex();
    int CD_index = combo_CD->currentIndex();
    K3b::MediaCopyDialog *dlg = new K3b::MediaCopyDialog( this );
    dlg->setReadingDevice( device_index.at( iso_index ) );
    if ( label_path->isChecked() ){
        dlg->setOnlyCreateImage(true);
        dlg->setTempDirPath( lineedit_CD->text() );
        dlg->saveConfig();
        dlg->slotStartClicked();
    }else if ( label_CD->isChecked() ){
        dlg->setOnlyCreateImage(true);
        dlg->setComboMedium( device_index.at( CD_index ) );
        dlg->saveConfig();
        qDebug()<< "from" << device_index.at( iso_index )->blockDeviceName() << "to" << device_index.at( CD_index )->blockDeviceName() <<endl;
        dlg->slotStartClicked();
#if 0       
        K3b::ImageWritingDialog *d = new K3b::ImageWritingDialog( this );
        d->setComboMedium( device_index.at( CD_index ) );

        d->setImage( QUrl::fromLocalFile( KConfigGroup( KSharedConfig::openConfig(), "Disk Copy" ).readEntry( "image path[$e]" ) ) );
        d->saveConfig();
        d->slotStartClicked();
#endif
    }else{
        KMessageBox::information( this, i18n("Please add files to your project first."),
                                  i18n("No Data to Burn") );
    }
}

K3b::ProjectBurnDialog* K3b::VcdView::newBurnDialog( QWidget * parent)
{
    return new K3b::VcdBurnDialog( m_doc, parent );
}


void K3b::VcdView::init()
{
    if( !k3bcore->externalBinManager()->foundBin( "vcdxbuild" ) ) {
        qDebug() << "(K3b::VcdView) could not find vcdxbuild executable";
        KMessageBox::information( this,
                        i18n( "Could not find VcdImager executable. "
                        "To create Video CDs you have to install VcdImager >= 0.7.12. "
                        "You can find this on your distribution’s software repository or download "
                        "it from http://www.vcdimager.org" ) );
    }
}


void K3b::VcdView::slotSelectionChanged()
{
    const QModelIndexList selected = m_view->selectionModel()->selectedRows();
    if( !selected.isEmpty() ) {
        m_actionRemove->setEnabled( true );
    }
    else {
        m_actionRemove->setEnabled( false );
    }
}


void K3b::VcdView::slotProperties()
{
    const QModelIndexList selection = m_view->selectionModel()->selectedRows();

    if( selection.isEmpty() ) {
        // show project properties
	    View::slotProperties();
    }
    else {
        QList<K3b::VcdTrack*> selected;

        Q_FOREACH( const QModelIndex& index, selection ) {
            selected.append( m_model->trackForIndex(index) );
        }

        QList<K3b::VcdTrack*> tracks = *m_doc->tracks();

        K3b::VcdTrackDialog dlg( m_doc, tracks, selected, this );
        dlg.exec();
    }
}


void K3b::VcdView::slotRemove()
{
    const QModelIndexList selected = m_view->selectionModel()->selectedRows();

    // create a list of persistent model indexes to be able to remove all of them
    QList<QPersistentModelIndex> indexes;
    Q_FOREACH( const QModelIndex& index, selected ) {
        indexes.append( QPersistentModelIndex( index ) );
    }

    // and now ask the indexes to be removed
    Q_FOREACH( const QPersistentModelIndex& index, indexes ) {
        m_model->removeRow( index.row(), index.parent() );
    }
}


void K3b::VcdView::slotItemActivated( const QModelIndex& index )
{
    if( VcdTrack* track = m_model->trackForIndex( index ) ) {
        QList<VcdTrack*> tracks = *m_doc->tracks();
        QList<VcdTrack*> selected;
        selected.append( track );
        K3b::VcdTrackDialog dlg( m_doc, tracks, selected, this );
        dlg.exec();
    }
}


