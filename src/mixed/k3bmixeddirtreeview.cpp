/***************************************************************************
 *   Copyright (C) 2002 by Sebastian Trueg                                 *
 *   trueg@k3b.org                                                         *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 ***************************************************************************/

#include "k3bmixeddirtreeview.h"

#include "k3bmixeddoc.h"
#include <tools/k3blistview.h>
#include <audio/k3baudiodoc.h>
#include <data/k3bdataviewitem.h>

#include <qevent.h>

#include <kdebug.h>
#include <kiconloader.h>
#include <kurldrag.h>
#include <klocale.h>


class K3bMixedDirTreeView::PrivateAudioRootViewItem : public K3bListViewItem
{
public:
  PrivateAudioRootViewItem( K3bMixedDoc* doc, QListView* parent, QListViewItem* after )
    : K3bListViewItem( parent, after ),
      m_doc(doc)
  {
    setPixmap( 0, SmallIcon("sound") );
  }

  QString text( int col ) const {
    if( col == 0 )
      return i18n("Audio Tracks") + QString(" (%1)").arg(m_doc->audioDoc()->numOfTracks());
    else
      return QString::null;
  }

  private:
    K3bMixedDoc* m_doc;
};


K3bMixedDirTreeView::K3bMixedDirTreeView( K3bView* view, K3bMixedDoc* doc, QWidget* parent, const char* )
  : K3bDataDirTreeView( view, doc->dataDoc(), parent ), m_doc(doc)
{
  m_spacerViewItem = new QListViewItem( this, root() );
  m_spacerViewItem->setSelectable(false);

  m_audioRootItem = new PrivateAudioRootViewItem( doc, this, m_spacerViewItem );

  connect( this, SIGNAL(selectionChanged(QListViewItem*)),
	   this, SLOT(slotSelectionChanged(QListViewItem*)) );
  connect( m_doc->audioDoc(), SIGNAL(newTracks()), this, SLOT(slotNewAudioTracks()) );
}


K3bMixedDirTreeView::~K3bMixedDirTreeView()
{
}


void K3bMixedDirTreeView::slotDropped( QDropEvent* e, QListViewItem* parent, QListViewItem* after )
{
  if( !e->isAccepted() )
    return;

  QListViewItem* droppedItem = itemAt(e->pos());
  if( droppedItem == m_audioRootItem ) {
    KURL::List urls;
    if( KURLDrag::decode( e, urls ) )
      m_doc->audioDoc()->addUrls( urls );
  }
  else
    K3bDataDirTreeView::slotDropped( e, parent, after );
}


void K3bMixedDirTreeView::slotSelectionChanged( QListViewItem* i )
{
  if( i == m_audioRootItem )
    emit audioTreeSelected();
  else if( i != m_spacerViewItem )
    emit dataTreeSelected();
}


void K3bMixedDirTreeView::slotNewAudioTracks()
{
  // update the tracknumber
  m_audioRootItem->repaint();
}

#include "k3bmixeddirtreeview.moc"
