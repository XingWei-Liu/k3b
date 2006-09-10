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

#include "k3bmultichoicedialog.h"

#include <kpushbutton.h>

#include <qlayout.h>
#include <qsignalmapper.h>
#include <qptrlist.h>
#include <qlabel.h>
#include <qhbox.h>
#include <qmessagebox.h>


class K3bMultiChoiceDialog::Private
{
public:
  Private()
    : mapper(0),
      buttonLayout(0) {
  }

  QSignalMapper* mapper;
  QPtrList<KPushButton> buttons;
  QHBoxLayout* buttonLayout;

  bool buttonClicked;
};


K3bMultiChoiceDialog::K3bMultiChoiceDialog( const QString& caption,
					    const QString& text,
					    QWidget* parent, const char* name )
  : KDialog( parent, name )
{
  d = new Private();
  d->mapper = new QSignalMapper( this );
  connect( d->mapper, SIGNAL(mapped(int)), this, SLOT(done(int)) );

  setCaption( caption );

  QGridLayout* mainGrid = new QGridLayout( this );
  mainGrid->setSpacing( spacingHint() );
  mainGrid->setMargin( marginHint() );

  QHBox* contents = new QHBox( this );
  contents->setSpacing(KDialog::spacingHint()*2);
  contents->setMargin(KDialog::marginHint());

  QLabel* pixLabel = new QLabel( contents );
  pixLabel->setPixmap( QMessageBox::standardIcon( QMessageBox::Question ) );
  QLabel* label = new QLabel( text, contents );
  contents->setStretchFactor( label, 1 );

  QFrame* line = new QFrame( this );
  line->setFrameShape( QFrame::HLine );
  line->setFrameShadow( QFrame::Sunken );

  d->buttonLayout = new QHBoxLayout;
  d->buttonLayout->setSpacing( spacingHint() );
  d->buttonLayout->setMargin( 0 );

  mainGrid->addMultiCellWidget( contents, 0, 0, 0, 2 );
  mainGrid->addMultiCellWidget( line, 1, 1, 0, 2 );
  mainGrid->addLayout( d->buttonLayout, 2, 1 );

  mainGrid->setColStretch( 0, 1 );
  mainGrid->setColStretch( 2, 1 );
  mainGrid->setRowStretch( 0, 1 );
}


K3bMultiChoiceDialog::~K3bMultiChoiceDialog()
{
  delete d;
}


int K3bMultiChoiceDialog::addButton( const KGuiItem& b )
{
  KPushButton* button = new KPushButton( b, this );
  d->buttonLayout->add( button );
  d->buttons.append(button);
  d->mapper->setMapping( button, d->buttons.count() );
  connect( button, SIGNAL(clicked()), d->mapper, SLOT(map()) );
  return d->buttons.count();
}


void K3bMultiChoiceDialog::slotButtonClicked( int code )
{
  d->buttonClicked = true;
  done( code );
}


int K3bMultiChoiceDialog::exec()
{
  d->buttonClicked = false;
  return KDialog::exec();
}


void K3bMultiChoiceDialog::closeEvent( QCloseEvent* e )
{
  // make sure the dialog can only be closed by the buttons
  // otherwise we may get an undefined return value in exec

  if( d->buttonClicked )
    KDialog::closeEvent( e );
  else
    e->ignore();
}


int K3bMultiChoiceDialog::choose( const QString& caption,
				  const QString& text,
				  QWidget* parent, 
				  const char* name,
				  int buttonCount,
				  const KGuiItem& b1,
				  const KGuiItem& b2,
				  const KGuiItem& b3,
				  const KGuiItem& b4,
				  const KGuiItem& b5,
				  const KGuiItem& b6 )
{
  K3bMultiChoiceDialog dlg( caption, text, parent, name );
  dlg.addButton( b1 );
  if( buttonCount > 1 )
    dlg.addButton( b2 );
  if( buttonCount > 2 )
    dlg.addButton( b3 );
  if( buttonCount > 3 )
    dlg.addButton( b4 );
  if( buttonCount > 4 )
    dlg.addButton( b5 );
  if( buttonCount > 5 )
    dlg.addButton( b6 );

  return dlg.exec();
}

		     
#include "k3bmultichoicedialog.moc"