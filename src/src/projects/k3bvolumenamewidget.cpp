/*
 *
 * Copyright (C) 2009 Michal Malek <michalm@jabster.pl>
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

#include "k3bvolumenamewidget.h"
#include "k3bdatadoc.h"
#include "k3bisooptions.h"
#include "k3bvalidators.h"

#include <KLineEdit>
#include <KLocalizedString>

#include <QEvent>
#include <QHBoxLayout>
#include <QLabel>

namespace K3b {

class VolumeNameWidget::Private
{
public:
    DataDoc* doc;
    KLineEdit* volumeNameEdit;

    void fontChanged( const QFontMetrics& fontMetrics );
};


void VolumeNameWidget::Private::fontChanged( const QFontMetrics& fontMetrics )
{
    volumeNameEdit->setMaximumWidth( fontMetrics.width('A')*50 );
}


VolumeNameWidget::VolumeNameWidget( DataDoc* doc, QWidget* parent )
    : QWidget( parent ),
      d( new Private )
{
    d->doc = doc;
    //this->setFixedWidth(200);
    d->volumeNameEdit = new KLineEdit( KIO::convertSize( doc->size() ), this );
    d->volumeNameEdit->setReadOnly(true);
    d->volumeNameEdit->setFixedWidth(100);
    //d->volumeNameEdit->setText((char *)doc->size());
    
    QHBoxLayout* layout = new QHBoxLayout( this );
    layout->addStretch();
    layout->addWidget( new QLabel( i18n("Project Size:"), this ), 1, Qt::AlignRight );
    layout->addWidget( d->volumeNameEdit, 2 );
    layout->setContentsMargins( 0, 0, 0, 0 );
    connect( d->doc, SIGNAL(changed()),
             this, SLOT(slotDocChanged()) );

/*
    d->volumeNameEdit = new KLineEdit( doc->isoOptions().volumeID(), this );
    d->volumeNameEdit->setValidator( new Latin1Validator( d->volumeNameEdit ) );
    d->volumeNameEdit->setClearButtonEnabled( true );
    d->fontChanged( fontMetrics() );

    QHBoxLayout* layout = new QHBoxLayout( this );
    layout->addWidget( new QLabel( i18n("Volume Name:"), this ), 1, Qt::AlignRight );
    layout->addWidget( d->volumeNameEdit, 2 );
    layout->setContentsMargins( 0, 0, 0, 0 );

    connect( d->volumeNameEdit, SIGNAL(textChanged(QString)),
             d->doc, SLOT(setVolumeID(QString)) );
    connect( d->doc, SIGNAL(changed()),
             this, SLOT(slotDocChanged()) );
*/
}


VolumeNameWidget::~VolumeNameWidget()
{
    delete d;
}


void VolumeNameWidget::changeEvent( QEvent* event )
{
    if( event->type() == QEvent::FontChange ) {
        d->fontChanged( fontMetrics() );
    }
    QWidget::changeEvent( event );
}


void VolumeNameWidget::slotDocChanged()
{
    // do not update the editor in case it changed the volume id itself
    d->volumeNameEdit->setText( KIO::convertSize( d->doc->size() ) );
     
/*  
    if( d->doc->isoOptions().volumeID() != d->volumeNameEdit->text() )
        d->volumeNameEdit->setText( d->doc->isoOptions().volumeID() );
*/
}

} // namespace K3b
