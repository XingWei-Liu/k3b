/* 
 *
 * $Id$
 * Copyright (C) 2003 Sebastian Trueg <trueg@k3b.org>
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

#include "k3bdiskerasinginfodialog.h"

#include <k3bbusywidget.h>

#include <qlabel.h>
#include <qpushbutton.h>
#include <qlayout.h>
#include <qframe.h>
#include <qwidgetstack.h>

#include <klocale.h>
#include <kprogress.h>


K3bErasingInfoDialog::K3bErasingInfoDialog( const QString& text, QWidget* parent, const char* name ) 
  : KDialogBase( parent, name, true, i18n("Erasing"), Cancel|Ok, Ok, true )
{
  QFrame* main = makeMainWidget();
  QGridLayout* mainLayout = new QGridLayout( main );
  mainLayout->setMargin( marginHint() );
  mainLayout->setSpacing( spacingHint() );

  m_label = new QLabel( text, main );
  m_stack = new QWidgetStack( main );
  m_progressBar = new KProgress( m_stack );
  m_busyWidget = new K3bBusyWidget( m_stack );
  m_stack->addWidget( m_progressBar );
  m_stack->addWidget( m_busyWidget );

  mainLayout->addWidget( m_label, 0, 0 );
  mainLayout->addWidget( m_stack, 1, 0 );

  showButtonOK( false );
}


K3bErasingInfoDialog::~K3bErasingInfoDialog()
{}


int K3bErasingInfoDialog::exec( bool progress )
{
  if( progress )
    m_stack->raiseWidget( m_progressBar );
  else
    m_stack->raiseWidget( m_busyWidget );

  m_busyWidget->showBusy( !progress );

  actionButton( Cancel )->setEnabled(true);

  return KDialogBase::exec();
}


void K3bErasingInfoDialog::setText( const QString& text )
{
  m_label->setText( text );
}


void K3bErasingInfoDialog::slotFinished( bool success )
{
  m_busyWidget->showBusy( false );

  showButtonOK( true );
  showButtonCancel( false );

  if( success )
    m_label->setText( i18n("Disk successfully erased. Please reload the disk.") );
  else
    m_label->setText( i18n("K3b was unable to erase the disk.") );
}


void K3bErasingInfoDialog::slotCancel()
{
  emit cancelClicked();
  // we simply forbid to click cancel twice
  actionButton( Cancel )->setEnabled(false);
}


void K3bErasingInfoDialog::setProgress( int p )
{
  m_progressBar->setProgress( p );
}

#include "k3bdiskerasinginfodialog.moc"
