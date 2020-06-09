/*
 *
 * Copyright (C) 2003-2008 Sebastian Trueg <trueg@k3b.org>
 *           (C) 2009      Arthur Mello <arthur@mandriva.com>
 *           (C) 2009      Gustavo Pichorim Boiko <gustavo.boiko@kdemail.net>
 *           (C) 2009-2010 Michal Malek <michalm@jabster.pl>
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

#include "k3baudioview.h"
#include "k3baudioviewimpl.h"

#include "k3bapplication.h"
#include "k3baudioburndialog.h"
#include "k3bdataburndialog.h"

#include "k3baudiodoc.h"
#include "k3baudioprojectmodel.h"
#include "k3bfillstatusdisplay.h"
#include "k3bpluginmanager.h"

#include "config-k3b.h"
#ifdef ENABLE_AUDIO_PLAYER
#include "k3baudiotrackplayer.h"
#endif // ENABLE_AUDIO_PLAYER

#include <KLocalizedString>
#include <KMessageBox>
#include <KToolBar>
#include <KActionCollection>

#include <QString>
#include <QDebug>
#include <QAction>
#include <QLayout>
#include <QScrollBar>
#include <QTreeView>
#include <fcntl.h>

#include "misc/k3bimagewritingdialog.h"
#include <QMdiArea>
#include <QVBoxLayout>
#include <QComboBox>
#include <QLabel>
#include <QGridLayout>
#include <QPushButton>
#include <QLineEdit>
#include <QFileDialog>
#include "misc/k3bimagewritingdialog.h"

K3b::AudioView::AudioView( K3b::AudioDoc* doc, QWidget* parent )
    : K3b::View( doc, parent )
{
    m_doc = doc;

    QLabel *widget_label = new QLabel(this);
    QGridLayout *layout = new QGridLayout(widget_label);
    
    QLabel *label_title = new QLabel(this);
    label_title->setText("write image");
    QFont title_font;
    title_font.setPointSize(12);
    label_title->setFont( title_font );

    QLabel *label_iso = new QLabel(this);
    label_iso->setText("select iso");
    //label->setMinimumSize();

    lineedit_iso = new QLineEdit(this);
    lineedit_iso->setMinimumSize(360, 30);

    QPushButton *button_openfile = new QPushButton(this);
    button_openfile->setText("open");
    button_openfile->setMinimumSize(80, 30);

    QLabel *label_space = new QLabel(this);
    
    QLabel *label_CD = new QLabel(this);
    label_CD->setText("select disk");
    //label_CD->setMinimumSize();
    
    combo_CD = new QComboBox(this);
    combo_CD->setMinimumSize(360, 30);

    QPushButton *button_setting = new QPushButton(this);
    button_setting->setText("setting");
    button_setting->setMinimumSize(80, 30);

    QPushButton *button_start = new QPushButton(this);
    button_start->setText("start");
    button_start->setMinimumSize(140, 45);

    layout->addWidget( label_title, 0, 0, 2, 1 );
    layout->addWidget( label_iso, 1, 0, 1, 1 );
    layout->addWidget( lineedit_iso, 2, 0, 1, 1 );
    layout->addWidget( button_openfile, 2, 1, 1, 1 );
    layout->addWidget( label_space, 3, 0, 1, 1 );
    layout->addWidget( label_CD, 4, 0, 1, 1 );
    layout->addWidget( combo_CD, 5, 0, 1, 1 );
    layout->addWidget( button_setting, 5, 1, 1, 1 );
    layout->addWidget( label_space, 6, 0, 1, 1 );
    layout->addWidget( button_start, 7, 2, 1, 1 );

    layout->setRowStretch(0, 3);
    layout->setRowStretch(1, 1);
    layout->setRowStretch(2, 1);
    layout->setRowStretch(3, 3);
    layout->setRowStretch(4, 1);
    layout->setRowStretch(5, 1);
    layout->setRowStretch(6, 3);
    layout->setRowStretch(7, 1);
    layout->setVerticalSpacing(10);

    setMainWidget( widget_label );
    
    connect( button_openfile, SIGNAL(clicked()), this, SLOT(slotOpenfile()) );
    connect( button_setting, SIGNAL(clicked()), this, SLOT(slotSetting()) );
    connect( button_start, SIGNAL(clicked()), this, SLOT(slotStartBurn()) );
//m_audioViewImpl = new AudioViewImpl( this, m_doc, actionCollection() );

    //setMainWidget( m_audioViewImpl->view() );
/*
    fillStatusDisplay()->showTime();

    toolBox()->addAction( actionCollection()->action( "project_audio_convert" ) );
    toolBox()->addAction( actionCollection()->action( "project_audio_musicbrainz" ) );
    toolBox()->addSeparator();

    toolBox()->addActions( createPluginsActions( m_doc->type() ) );
    toolBox()->addSeparator();

#ifdef ENABLE_AUDIO_PLAYER
    toolBox()->addAction( actionCollection()->action( "player_previous" ) );
    toolBox()->addAction( actionCollection()->action( "player_play" ) );
    toolBox()->addAction( actionCollection()->action( "player_pause" ) );
    toolBox()->addAction( actionCollection()->action( "player_stop" ) );
    toolBox()->addAction( actionCollection()->action( "player_next" ) );
    toolBox()->addAction( actionCollection()->action( "player_seek" ) );
    toolBox()->addSeparator();

    connect( m_audioViewImpl->player(), SIGNAL(stateChanged()),
             this, SLOT(slotPlayerStateChanged()) );
#endif // ENABLE_AUDIO_PLAYER
*/
    // this is just for testing (or not?)
    // most likely every project type will have it's rc file in the future
    // we only add the additional actions since View already added the default actions
    setXML( "<!DOCTYPE gui SYSTEM \"kpartgui.dtd\">"
            "<gui name=\"k3bproject\" version=\"1\">"
            "<MenuBar>"
            " <Menu name=\"project\"><text>&amp;Project</text>"
            "  <Action name=\"project_audio_convert\"/>"
#ifdef ENABLE_MUSICBRAINZ
            "  <Action name=\"project_audio_musicbrainz\"/>"
#endif
            " </Menu>"
            "</MenuBar>"
            "</gui>", true );
}

K3b::AudioView::~AudioView()
{
}

void K3b::AudioView::slotOpenfile()
{
    int i = 0;
    QString str;
    filepath = QFileDialog::getOpenFileName(this, "open file dialog", "/home","iso file(*.iso *.udf)", 0, QFileDialog::DontUseNativeDialog);

    if(filepath == NULL)
        return;

    QFileInfo fileinfo( filepath );
    /*image_icon->setStyleSheet("QLabel{background-image: url(:/new/prefix1/pic/icon-镜像.png);"
                              "background-color:transparent;"
                              "background-repeat: no-repeat;}");
    ui->lineEdit->setTextMargins(image_icon->width()+10, 1, 1 , 1);*/
    long int file_size = fileinfo.size();
    double size;
    do{
        size = (float)file_size / (float)1024;
        file_size = file_size / 1024;
        i++;
    }while(file_size > 1024);
    switch(i){
    case 0:
        str = fileinfo.fileName() + " " + QString::number(size, 'f', 2) + "b";
        break;
    case 1:
        str = fileinfo.fileName() + " " + QString::number(size, 'f', 2) + "k";
        break;
    case 2:
        str = fileinfo.fileName() + " " + QString::number(size, 'f', 2) + "M";
        break;
    case 3:
        str = fileinfo.fileName() + " " + QString::number(size, 'f', 2) + "G";
        break;
    default:
        str = fileinfo.fileName() + " " + QString::number(file_size);
        break;
    }
    lineedit_iso->setText(str);

}

void K3b::AudioView::slotSetting()
{
    dlg = new K3b::ImageWritingDialog( this );
    dlg->exec();
}

void K3b::AudioView::slotStartBurn()
{
    dlg = new K3b::ImageWritingDialog( this );
    dlg->setImage( QUrl::fromLocalFile( filepath ) );
    dlg->saveConfig();
    dlg->slotStartClicked();
}

void K3b::AudioView::slotBurn()
{
    if( lineedit_iso->text() == NULL ) { 
        KMessageBox::information( this, i18n("Please add files to your project first."),
                                  i18n("No Data to Burn") );
    }   
    else {
        ProjectBurnDialog* dlg = newBurnDialog( this );
        dlg->execBurnDialog(true);
        delete dlg;
    }   
}

void K3b::AudioView::addUrls( const QList<QUrl>& urls )
{
    m_audioViewImpl->addUrls( urls );
}


K3b::ProjectBurnDialog* K3b::AudioView::newBurnDialog( QWidget* parent )
{
    return new AudioBurnDialog( m_doc, parent );
}


void K3b::AudioView::slotPlayerStateChanged()
{
#ifdef ENABLE_AUDIO_PLAYER
    if( m_audioViewImpl->player()->state() == AudioTrackPlayer::Playing ) {
        actionCollection()->action( "player_play" )->setVisible( false );
        actionCollection()->action( "player_pause" )->setVisible( true );
    }
    else {
        actionCollection()->action( "player_play" )->setVisible( true );
        actionCollection()->action( "player_pause" )->setVisible( false );
    }
#endif // ENABLE_AUDIO_PLAYER
}


