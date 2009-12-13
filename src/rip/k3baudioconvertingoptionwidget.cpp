/*
 *
 * Copyright (C) 2004-2009 Sebastian Trueg <trueg@k3b.org>
 * Copyright (C)      2009 Michal Malek <michalm@jabster.pl>
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

#include "k3baudioconvertingoptionwidget.h"

#include "k3bpluginmanager.h"
#include "k3baudioencoder.h"
#include "k3bcore.h"
#include "k3bglobals.h"

#include <KColorScheme>
#include <KComboBox>
#include <KUrlRequester>
#include <KConfig>
#include <KLocale>
#include <KIconLoader>

#include <QList>
#include <QLabel>
#include <QTimer>
#include <QToolButton>
#include <QCheckBox>



class K3b::AudioConvertingOptionWidget::Private
{
public:
    QList<AudioEncoder*> encoders;
    QList<QString> extensions;

    QTimer freeSpaceUpdateTimer;

    KIO::filesize_t neededSize;
    
    AudioEncoder* encoderForIndex( int index ) const;
    QString pluginNameForIndex( int index ) const;
    QString extForIndex( int index ) const;
    int indexForFileType( const QString& pluginName, const QString& ext ) const;
    
    QString defaultPluginName() const;
    QString defaultExtension() const;
};


K3b::AudioEncoder* K3b::AudioConvertingOptionWidget::Private::encoderForIndex( int index ) const
{
    if( index >= 0 && index < encoders.size() )
        return encoders.at( index );
    else
        return 0;
}


QString K3b::AudioConvertingOptionWidget::Private::pluginNameForIndex( int index ) const
{
    if( AudioEncoder* encoder = encoderForIndex( index ) )
        return encoder->pluginInfo().pluginName();
    else
        return QString();
}


QString K3b::AudioConvertingOptionWidget::Private::extForIndex( int index ) const
{
    if( index >= 0 && index < extensions.size() )
        return extensions.at( index );
    else
        return "wav";
}


int K3b::AudioConvertingOptionWidget::Private::indexForFileType( const QString& pluginName, const QString& ext ) const
{
    if( pluginName.isEmpty() ) {
        int i = extensions.indexOf( ext );
        if( i >= 0 )
            return i;
    }
    
    for( int i = 0; i < encoders.size(); ++i ) {
        AudioEncoder* encoder = encoders.at( i );
        if( encoder != 0 &&
            encoder->pluginInfo().pluginName() == pluginName &&
            extensions.at( i ) == ext ) {
            return i;
        }
    }
    return 0;
}


QString K3b::AudioConvertingOptionWidget::Private::defaultPluginName() const
{
    QString defaultExt = defaultExtension();
    for( int i = 0; i < extensions.size(); ++i ) {
        AudioEncoder* encoder = encoders.at( i );
        if( extensions.at( i ) == defaultExt && encoder != 0 ) {
            return encoder->pluginInfo().pluginName();
        }
    }
    return QString();
}


QString K3b::AudioConvertingOptionWidget::Private::defaultExtension() const
{
    // we prefere formats in this order:
    // 1. ogg
    // 2. mp3
    // 3. flac
    // 4. wave
    bool ogg = false;
    bool mp3 = false;
    bool flac = false;
    Q_FOREACH( const QString& ext, extensions ) {
        if( ext == "ogg" )
            ogg = true;
        else if( ext == "mp3" )
            mp3 = true;
        else if( ext == "flac" )
            flac = true;
    }
    
    if( ogg )
        return "ogg";
    else if( mp3 )
        return "mp3";
    else if( flac )
        return "flac";
    else
        return "wav";
}


K3b::AudioConvertingOptionWidget::AudioConvertingOptionWidget( QWidget* parent )
    : QWidget( parent )
{
    setupUi( this );

    d = new Private();

    connect( m_editBaseDir, SIGNAL(textChanged(const QString&)),
             this, SLOT(slotUpdateFreeTempSpace()) );
    connect( m_comboFileType, SIGNAL(activated(int)),
             this, SLOT(slotEncoderChanged()) );
    connect( &d->freeSpaceUpdateTimer, SIGNAL(timeout()),
             this, SLOT(slotUpdateFreeTempSpace()) );
    connect( m_checkCreatePlaylist, SIGNAL(toggled(bool)), this, SIGNAL(changed()) );
    connect( m_checkSingleFile, SIGNAL(toggled(bool)), this, SIGNAL(changed()) );
    connect( m_checkWriteCueFile, SIGNAL(toggled(bool)), this, SIGNAL(changed()) );
    connect( m_comboFileType, SIGNAL(activated(int)), this, SIGNAL(changed()) );
    connect( m_editBaseDir, SIGNAL(textChanged(const QString&)), this, SIGNAL(changed()) );
    connect( m_buttonConfigurePlugin, SIGNAL(clicked()), this, SLOT(slotConfigurePlugin()) );

    m_editBaseDir->setMode( KFile::Directory | KFile::ExistingOnly | KFile::LocalOnly );
    m_buttonConfigurePlugin->setIcon( KIcon( "system-run" ) );
    
    // FIXME: see if sox and the sox encoder are installed and if so do not put the internal wave
    //        writer in the list of encoders.
    m_comboFileType->addItem( i18n("Wave") );
    d->encoders.append( 0 );
    d->extensions.append( "wav" );

    // check the available encoding plugins
    QList<K3b::Plugin*> fl = k3bcore->pluginManager()->plugins( "AudioEncoder" );
    for( QList<K3b::Plugin *>::const_iterator it = fl.constBegin();
        it != fl.constEnd(); ++it ) {
        AudioEncoder* f = (AudioEncoder*)(*it);
        QStringList exL = f->extensions();

        for( QStringList::const_iterator exIt = exL.constBegin();
            exIt != exL.constEnd(); ++exIt ) {
            m_comboFileType->addItem( f->fileTypeComment(*exIt) );
            d->encoders.append( f );
            d->extensions.append( *exIt );
        }
    }

    // refresh every 2 seconds
    d->freeSpaceUpdateTimer.start(2000);
    slotUpdateFreeTempSpace();
}


K3b::AudioConvertingOptionWidget::~AudioConvertingOptionWidget()
{
    delete d;
}


QString K3b::AudioConvertingOptionWidget::baseDir() const
{
    return m_editBaseDir->url().toLocalFile();
}


void K3b::AudioConvertingOptionWidget::setBaseDir( const QString& path )
{
    m_editBaseDir->setUrl( path );
}


void K3b::AudioConvertingOptionWidget::setNeededSize( KIO::filesize_t size )
{
    d->neededSize = size;
    if( size > 0 )
        m_labelNeededSpace->setText( KIO::convertSize( size ) );
    else
        m_labelNeededSpace->setText( i18n("unknown") );

    slotUpdateFreeTempSpace();
}


void K3b::AudioConvertingOptionWidget::slotConfigurePlugin()
{
    // 0 for wave
    if( AudioEncoder* enc = encoder() )
    {
        int ret = k3bcore->pluginManager()->execPluginDialog( enc, this );
        if( ret == QDialog::Accepted )
        {
            emit changed();
        }
    }
}


void K3b::AudioConvertingOptionWidget::slotUpdateFreeTempSpace()
{
    QString path = m_editBaseDir->url().url();

    if( !QFile::exists( path ) )
        path.truncate( path.lastIndexOf('/') );

    const KColorScheme colorScheme( isEnabled() ? QPalette::Normal : QPalette::Disabled, KColorScheme::Window );
    QColor textColor;

    unsigned long size, avail;
    if( K3b::kbFreeOnFs( path, size, avail ) ) {
        m_labelFreeSpace->setText( KIO::convertSizeFromKiB(avail) );

        if( avail < d->neededSize/1024 )
            textColor = colorScheme.foreground( KColorScheme::NegativeText ).color();
        else
            textColor = colorScheme.foreground( KColorScheme::NormalText ).color();
    }
    else {
        textColor = colorScheme.foreground( KColorScheme::NormalText ).color();
        m_labelFreeSpace->setText("-");
    }

    QPalette pal( m_labelNeededSpace->palette() );
    pal.setColor( m_labelNeededSpace->foregroundRole(), textColor );
    m_labelNeededSpace->setPalette( pal );
}


void K3b::AudioConvertingOptionWidget::slotEncoderChanged()
{
    // 0 for wave
    m_buttonConfigurePlugin->setEnabled( encoder() != 0 );
}


K3b::AudioEncoder* K3b::AudioConvertingOptionWidget::encoder() const
{
    return d->encoderForIndex( m_comboFileType->currentIndex() );  // 0 for wave
}


QString K3b::AudioConvertingOptionWidget::extension() const
{
    return d->extForIndex( m_comboFileType->currentIndex() );
}


void K3b::AudioConvertingOptionWidget::loadConfig( const KConfigGroup& c )
{
    m_editBaseDir->setUrl( c.readEntry( "last ripping directory", QDir::homePath() ) );

    m_checkSingleFile->setChecked( c.readEntry( "single_file", false ) );
    m_checkWriteCueFile->setChecked( c.readEntry( "write_cue_file", false ) );

    m_checkCreatePlaylist->setChecked( c.readEntry( "create_playlist", false ) );
    m_checkPlaylistRelative->setChecked( c.readEntry( "relative_path_in_playlist", false ) );

    QString encoder;
    QString filetype;
    if( c.hasKey( "encoder" ) && c.hasKey( "filetype" ) ) {
        encoder = c.readEntry( "encoder" );
        filetype = c.readEntry( "filetype" );
    }
    else {
        encoder = d->defaultPluginName();
        filetype = d->defaultExtension();
    }
    m_comboFileType->setCurrentIndex( d->indexForFileType( encoder, filetype ) );

    slotEncoderChanged();
}


void K3b::AudioConvertingOptionWidget::saveConfig( KConfigGroup c )
{
    c.writePathEntry( "last ripping directory", m_editBaseDir->url().url() );

    c.writeEntry( "single_file", m_checkSingleFile->isChecked() );
    c.writeEntry( "write_cue_file", m_checkWriteCueFile->isChecked() );

    c.writeEntry( "create_playlist", m_checkCreatePlaylist->isChecked() );
    c.writeEntry( "relative_path_in_playlist", m_checkPlaylistRelative->isChecked() );
    
    c.writeEntry( "encoder", d->pluginNameForIndex( m_comboFileType->currentIndex() ) );
    c.writeEntry( "filetype", d->extForIndex( m_comboFileType->currentIndex() ) );
}

#include "k3baudioconvertingoptionwidget.moc"
