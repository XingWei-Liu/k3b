/*
 *
 * Copyright (C) 2003 Sebastian Trueg <trueg@k3b.org>
 *
 * This file is part of the K3b project.
 * Copyright (C) 1998-2007 Sebastian Trueg <trueg@k3b.org>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * See the file "COPYING" for the exact licensing terms.
 */


#include "k3bfiletreeview.h"
#include "k3bappdevicemanager.h"
#include "k3bapplication.h"
#include "k3bmediacache.h"
#include "k3btooltip.h"
#include "k3bthememanager.h"

#include <k3bdevice.h>
#include <k3bdiskinfo.h>
#include <k3bglobals.h>

#include <kiconloader.h>
#include <klocale.h>
#include <kurl.h>
#include <kstandarddirs.h>
#include <kaction.h>
#include <kio/global.h>
#include <kfileitem.h>
#include <kapplication.h>
#include <kglobalsettings.h>

#include <qdir.h>
#include <qevent.h>
#include <q3dragobject.h>
#include <qcursor.h>
#include <qnamespace.h>
#include <qmap.h>
#include <q3ptrdict.h>
#include <qpainter.h>
#include <qfont.h>
#include <qstyle.h>
#include <qlabel.h>
#include <qlayout.h>
//Added by qt3to4:
#include <Q3GridLayout>
#include <QPixmap>
#include <Q3Frame>
#include <QStyleOption>

K3bDeviceBranch::K3bDeviceBranch( K3FileTreeView* view, K3bDevice::Device* dev, K3FileTreeViewItem* item )
  : KFileTreeBranch( view,
		     KUrl( "media:/" + dev->blockDeviceName() ),
		     QString("%1 - %2").arg(dev->vendor()).arg(dev->description()),
		     ( dev->burner()
		       ? SmallIcon("media-optical-recordable")
		       : SmallIcon("media-optical") ),
		     false,
		     item == 0
		     ? new K3bDeviceBranchViewItem( view, dev, this )
		     : item ),
    m_device( dev ),
    m_showBlockDeviceName( false )
{
  setAutoUpdate(true);
  root()->setExpandable(false);
  updateLabel();

  connect( k3bappcore->mediaCache(), SIGNAL(mediumChanged(K3bDevice::Device*)),
	   this, SLOT(slotMediumChanged(K3bDevice::Device*)) );
}


bool K3bDeviceBranch::populate( const KUrl& url,  K3FileTreeViewItem *currItem )
{
  // FIXME: we somehow need to "unpopulate" once the medium is unmounted

  // make sure we do not try to populate in case we are not mounted
  if( K3b::isMounted( m_device ) ) {
    bool b = KFileTreeBranch::populate( url, currItem );
    populateFinished( currItem );
    return b;
  }
  else
    populateFinished( currItem );

  return true;
}


void K3bDeviceBranch::setCurrent( bool c )
{
  static_cast<K3bDeviceBranchViewItem*>( root() )->setCurrent( c );
}


void K3bDeviceBranch::updateLabel()
{
  if( m_showBlockDeviceName )
    setName( QString("%1 %2 (%3)")
	     .arg(m_device->vendor())
	     .arg(m_device->description())
	     .arg(m_device->blockDeviceName()) );
  else
    setName( QString("%1 %2")
	     .arg(m_device->vendor())
	     .arg(m_device->description()) );

  if( k3bappcore->mediaCache() ) {
    root()->setMultiLinesEnabled( true );
    root()->setText( 0,QString::number(0) +name() + "\n" + k3bappcore->mediaCache()->mediumString( m_device ) );
    static_cast<K3bFileTreeView*>( root()->listView() )->updateMinimumWidth();
  }
  else {
    root()->setMultiLinesEnabled( false );
    root()->setText( 0,QString::number(0)+name() );
  }
}


void K3bDeviceBranch::slotMediumChanged( K3bDevice::Device* dev )
{
  if( dev == m_device )
    updateLabel();
}


void K3bDeviceBranch::showBlockDeviceName( bool b )
{
  m_showBlockDeviceName = b;
  updateLabel();
}

#if 0
K3bFileTreeBranch::K3bFileTreeBranch( K3FileTreeView* view,
				      const KUrl& url,
				      const QString& name,
				      const QPixmap& pix,
				      bool showHidden,
				      K3FileTreeViewItem& item )
  : KFileTreeBranch( view, url, pix, showHidden,
		     item.isNull()
		     ? *(new K3bFileTreeViewItem( view,
						new KFileItem( url, "inode/directory",
							       S_IFDIR  )),
						this )
		     : item )
{
}
#endif


K3bDeviceBranchViewItem::K3bDeviceBranchViewItem( K3FileTreeViewItem* parent,
						  K3bDevice::Device* dev,
						  K3bDeviceBranch* branch )
  : K3FileTreeViewItem( parent,
		       *new KFileItem( KUrl( "media:/" + dev->blockDeviceName() ),
				      "inode/directory",
				      S_IFDIR  ),
		       branch ),
    m_bCurrent( false ),
    m_device( dev )
{
}


K3bDeviceBranchViewItem::K3bDeviceBranchViewItem( K3FileTreeView* parent,
						  K3bDevice::Device* dev,
						  K3bDeviceBranch* branch )
  : K3FileTreeViewItem( parent,
		       *(new KFileItem( KUrl( "media:/" + dev->blockDeviceName() ),
				      "inode/directory",
				      S_IFDIR  )),
		       branch ),
    m_bCurrent( false ),
    m_device( dev )
{
}


void K3bDeviceBranchViewItem::setCurrent( bool c )
{
  m_bCurrent = c;
  repaint();
}


void K3bDeviceBranchViewItem::paintCell( QPainter* p, const QColorGroup& cg, int /* col */, int width, int align )
{
  p->save();

  int xpos = 1;
  int ypos = 1;
  QFontMetrics fm( p->fontMetrics() );

  if( isSelected() ) {
    p->fillRect( 0, 0, width, height(),
		 cg.brush( QColorGroup::Highlight ) );
    p->setPen( cg.highlightedText() );
  }
  else {
    p->fillRect( 0, 0, width, height(), cg.base() );
    p->setPen( cg.text() );
  }

  if( pixmap(0) ) {
    p->drawPixmap( xpos, ypos, *pixmap(0) );
    xpos += pixmap(0)->width() + 5;
  }

  if( m_bCurrent ) {
    QFont f( listView()->font() );
    f.setBold( true );
    p->setFont( f );
  }

  ypos += fm.ascent();
  QString line1 = text(0).left( text(0).find('\n') );
  p->drawText( xpos, ypos, line1 );

  QFont f( listView()->font() );
  f.setItalic( true );
  f.setBold( false );
  f.setPointSize( f.pointSize() - 2 );
  p->setFont( f );

  ypos += p->fontMetrics().height() + 1;
  QString line2 = text(0).mid( text(0).find('\n')+1 );
  p->drawText( xpos - p->fontMetrics().leftBearing( line2[0] ), ypos, line2 );


  // from QListViewItem
  if( isOpen() && childCount() ) {
    int textheight = fm.size( align, text(0) ).height() + 2 * listView()->itemMargin();
    textheight = qMax( textheight, QApplication::globalStrut().height() );
    if ( textheight % 2 > 0 )
      textheight++;
    if ( textheight < height() ) {
    //FIXME kde4
#if 0
      int w = listView()->treeStepSize() / 2;
      listView()->style().drawComplexControl( QStyle::CC_ListView, p, listView(),
					      QRect( 0, textheight, w + 1, height() - textheight + 1 ), cg,
					      QStyle::Style_Enabled,
					      QStyle::SC_ListViewExpand,
					      (uint)QStyle::SC_All, QStyleOption( this ) );
#endif
    }
  }

  p->restore();
}


int K3bDeviceBranchViewItem::widthHint() const
{
  QFont f( listView()->font() );
  if ( m_bCurrent ) {
      f.setBold( true );
  }
  int w = QFontMetrics(f).width( text(0).left( text(0).find('\n') ) );

  f.setItalic( true );
  f.setBold( false );
  f.setPointSize( f.pointSize() - 2 );
  w = qMax( w, QFontMetrics(f).width( text(0).mid( text(0).find('\n')+1 ) ) );

  w++; // see paintCell

  if( pixmap(0) )
    w += pixmap(0)->width() + 5;

  return w;
}


QString K3bDeviceBranchViewItem::key( int column, bool ascending ) const
{
  return "0" + K3FileTreeViewItem::key( column, ascending );
}



K3bFileTreeViewItem::K3bFileTreeViewItem( K3FileTreeViewItem* parent, KFileItem& item, KFileTreeBranch* branch )
  : K3FileTreeViewItem( parent, item, branch )
{
}


K3bFileTreeViewItem::K3bFileTreeViewItem( K3FileTreeView* parent, KFileItem& item, KFileTreeBranch* branch )
  : K3FileTreeViewItem( parent, item, branch )
{
}


QString K3bFileTreeViewItem::key( int column, bool ascending ) const
{
  return "1" + K3FileTreeViewItem::key( column, ascending );
}


class K3bDeviceTreeToolTip : public K3bToolTip
{
public:
  K3bDeviceTreeToolTip( QWidget* parent, K3bFileTreeView* lv );

  void maybeTip( const QPoint &pos );

private:
  K3bFileTreeView* m_view;
};


K3bDeviceTreeToolTip::K3bDeviceTreeToolTip( QWidget* parent, K3bFileTreeView* lv )
  : K3bToolTip( parent ),
    m_view( lv )
{
  setTipTimeout( 500 );
}


void K3bDeviceTreeToolTip::maybeTip( const QPoint& pos )
{
  if( !parentWidget() || !m_view )
    return;

  K3bDeviceBranchViewItem* item = dynamic_cast<K3bDeviceBranchViewItem*>( m_view->itemAt( pos ) );
  if( !item )
    return;

  K3bDevice::Device* dev = static_cast<K3bDeviceBranch*>( item->branch() )->device();

  Q3Frame* tooltip = new Q3Frame( parentWidget() );
  tooltip->setFrameStyle( Q3Frame::Panel | Q3Frame::Raised );
  tooltip->setFrameShape( Q3Frame::StyledPanel );
  Q3GridLayout* lay = new Q3GridLayout( tooltip, 2, 2, tooltip->frameWidth()*2 /*margin*/, 6 /*spacing*/ );

  QString text = k3bappcore->mediaCache()->medium( dev ).longString();
  int detailsStart = text.find( "<p>", 3 );
  QString details = text.mid( detailsStart );
  text.truncate( detailsStart );

  QLabel* label = new QLabel( text, tooltip );
  label->setMargin( 9 );
  lay->addMultiCellWidget( label, 0, 0, 0, 1 );
  label = new QLabel( details, tooltip );
  label->setMargin( 9 );
  label->setAlignment( Qt::Vertical );
  lay->addMultiCellWidget( label, 1, 2, 0, 0 );
  label = new QLabel( tooltip );
  lay->addWidget( label, 2, 1 );
  lay->setColStretch( 0, 1 );

  if( K3bTheme* theme = k3bappcore->themeManager()->currentTheme() ) {
    tooltip->setPaletteBackgroundColor( theme->backgroundColor() );
    tooltip->setPaletteForegroundColor( theme->foregroundColor() );
    K3bTheme::PixmapType pm;
    int c = k3bappcore->mediaCache()->medium( dev ).content();
    if( c & (K3bMedium::CONTENT_VIDEO_CD|K3bMedium::CONTENT_VIDEO_DVD) )
      pm = K3bTheme::MEDIA_VIDEO;
    else if( c & K3bMedium::CONTENT_AUDIO &&
	      c & K3bMedium::CONTENT_DATA )
      pm = K3bTheme::MEDIA_MIXED;
    else if( c & K3bMedium::CONTENT_AUDIO )
      pm = K3bTheme::MEDIA_AUDIO;
    else if( c & K3bMedium::CONTENT_DATA )
      pm = K3bTheme::MEDIA_DATA;
    else {
      K3bDevice::DiskInfo di = k3bappcore->mediaCache()->diskInfo( dev );
      if( di.diskState() == K3bDevice::STATE_EMPTY )
	pm = K3bTheme::MEDIA_EMPTY;
      else
	pm = K3bTheme::MEDIA_NONE;
    }
    label->setPixmap( theme->pixmap( pm ) );
  }

  // the tooltip will take care of deleting the widget
  tip( m_view->itemRect( item ), tooltip );
}



class K3bFileTreeView::Private
{
public:
  Private()
    : deviceManager(0),
      currentDeviceBranch(0) {
  }

  Q3PtrDict<K3bDeviceBranch> deviceBranchDict;
  QMap<KFileTreeBranch*, K3bDevice::Device*> branchDeviceMap;

  K3bDevice::DeviceManager* deviceManager;
  K3bDeviceBranch* currentDeviceBranch;

  K3bDeviceTreeToolTip* toolTip;
};

K3bFileTreeView::K3bFileTreeView( QWidget *parent )
  : K3FileTreeView( parent )
{
  d = new Private();

  d->toolTip = new K3bDeviceTreeToolTip( viewport(), this );

  addColumn( i18n("Directories") );
  setDragEnabled( true );
  setAlternateBackground( QColor() );
  setFullWidth(true);
  //  setRootIsDecorated(true);
  setSorting(0);

  m_dirOnlyMode = true;
  m_menuEnabled = false;

  connect( this, SIGNAL(executed(Q3ListViewItem*)), this, SLOT(slotItemExecuted(Q3ListViewItem*)) );
  connect( this, SIGNAL(returnPressed(Q3ListViewItem*)), this, SLOT(slotItemExecuted(Q3ListViewItem*)) );
  connect( this, SIGNAL(contextMenu(K3ListView*, Q3ListViewItem* , const QPoint& )),
	   this, SLOT(slotContextMenu(K3ListView*, Q3ListViewItem* , const QPoint& )) );

  // we always simulate the single click
  slotSettingsChangedK3b(KGlobalSettings::SETTINGS_MOUSE);
  if( kapp )
    connect( kapp, SIGNAL(settingsChanged(int)), SLOT(slotSettingsChangedK3b(int)) );

  initActions();
}


K3bFileTreeView::~K3bFileTreeView()
{
  delete d;
}


void K3bFileTreeView::clear()
{
  K3FileTreeView::clear();
  if( d->deviceManager )
    d->deviceManager->disconnect( this );
  d->deviceManager = 0;
}


void K3bFileTreeView::initActions()
{
//   m_actionCollection = new KActionCollection( this );

//   m_devicePopupMenu = new KActionMenu( m_actionCollection, "device_popup_menu" );
//   m_urlPopupMenu = new KActionMenu( m_actionCollection, "url_popup_menu" );

//   KAction* actionDiskInfo = new KAction( i18n("&Disk Info"), "info", 0, this, SLOT(slotShowDiskInfo()),
// 					 m_actionCollection, "disk_info");
//   KAction* actionUnmount = new KAction( i18n("&Unmount"), "cdrom_unmount", 0, this, SLOT(slotUnmountDisk()),
// 					m_actionCollection, "disk_unmount");
//   KAction* actionEject = new KAction( i18n("&Eject"), "", 0, this, SLOT(slotEjectDisk()),
// 					m_actionCollection, "disk_eject");

//   m_devicePopupMenu->insert( actionDiskInfo );
//   m_devicePopupMenu->insert( new KActionSeparator( this ) );
//   m_devicePopupMenu->insert( actionUnmount );
//   m_devicePopupMenu->insert( actionEject );

}


void K3bFileTreeView::addDefaultBranches()
{
  KUrl home = KUrl( QDir::homePath() );
  KUrl root = KUrl( "file:/" );
  //FIXME kde4
#if 0
  KFileTreeBranch* treeBranch = addBranch( new K3bFileTreeBranch( this, root, i18n("Root"), SmallIcon("folder-root") ) );
  treeBranch = addBranch( new K3bFileTreeBranch( this, home, i18n("Home"), SmallIcon("user-home") ) );
  treeBranch->setOpen( true );
#endif
}


void K3bFileTreeView::addCdDeviceBranches( K3bDevice::DeviceManager* dm )
{
  kDebug() << "(K3bFileTreeView::addCdDeviceBranches)";

  // remove all previous added device branches
  for( QMap<KFileTreeBranch*, K3bDevice::Device*>::Iterator it = d->branchDeviceMap.begin();
       it != d->branchDeviceMap.end(); ++it ) {
    removeBranch( it.key() );
  }

  // clear the maps
  d->branchDeviceMap.clear();
  d->deviceBranchDict.clear();
  QList<K3bDevice::Device *> items(dm->allDevices());
  for( QList<K3bDevice::Device *>::const_iterator it = items.begin();
       it != items.end(); ++it )
    addDeviceBranch( *it );

  if( dm != d->deviceManager ) {
    if( d->deviceManager )
      d->deviceManager->disconnect( this );
    d->deviceManager = dm;

    // make sure we get changes to the config
    connect( dm, SIGNAL(changed(K3bDevice::DeviceManager*)),
	     this, SLOT(addCdDeviceBranches(K3bDevice::DeviceManager*)) );

    if( K3bAppDeviceManager* appDevM = dynamic_cast<K3bAppDeviceManager*>( dm ) )
      connect( appDevM, SIGNAL(currentDeviceChanged(K3bDevice::Device*)),
	       this, SLOT(setCurrentDevice(K3bDevice::Device*)) );
  }

  K3bDevice::Device* currentDevice = k3bappcore->appDeviceManager()->currentDevice();
  if ( !currentDevice && !k3bappcore->appDeviceManager()->allDevices().isEmpty() ) {
      k3bappcore->appDeviceManager()->setCurrentDevice( k3bappcore->appDeviceManager()->allDevices().first() );
  }

  d->currentDeviceBranch = d->deviceBranchDict[currentDevice];
  if( d->currentDeviceBranch ) {
    d->currentDeviceBranch->setCurrent( true );
  }

  kDebug() << "(K3bFileTreeView::addCdDeviceBranches) done";
}


void K3bFileTreeView::addDeviceBranch( K3bDevice::Device* dev )
{
  K3bDeviceBranch* newBranch = new K3bDeviceBranch( this, dev );
  addBranch( newBranch );

  // search for an equal device
  int equalCnt = 0;
  K3bDeviceBranch* equalBranch = 0;
  for( QMap<KFileTreeBranch*, K3bDevice::Device*>::Iterator it = d->branchDeviceMap.begin();
       it != d->branchDeviceMap.end(); ++it ) {
    K3bDevice::Device* itDev = it.data();
    K3bDeviceBranch* itBranch = (K3bDeviceBranch*)it.key();
    if( itDev->vendor() == dev->vendor() &&
	itDev->description() == dev->description() ) {
      ++equalCnt;
      equalBranch = itBranch;
    }
  }

  // if there is at least one equal device add the block device name
  // if there is more than one equal device they have been updated after
  // adding the last one so there is no need to update more than two
  if( equalCnt > 0 ) {
    kDebug() << "(K3bFileTreeView) equal branch";
    newBranch->showBlockDeviceName(true);
    equalBranch->showBlockDeviceName(true);
  }

  // add to maps
  d->branchDeviceMap.insert( newBranch, dev );
  d->deviceBranchDict.insert( (void*)dev, newBranch );

  updateMinimumWidth();
}


KFileTreeBranch* K3bFileTreeView::addBranch( KFileTreeBranch* branch )
{
  KFileTreeBranch* newBranch = K3FileTreeView::addBranch( branch );
  newBranch->setChildRecurse( false );
  setDirOnlyMode( newBranch, m_dirOnlyMode );

  return newBranch;
}


KFileTreeBranch* K3bFileTreeView::addBranch( const KUrl& url, const QString& name, const QPixmap& pix, bool showHidden )
{
  //FIXME kde4
#if 0
  KFileTreeBranch* newBranch = K3FileTreeView::addBranch( url, pix, showHidden );
  newBranch->setChildRecurse( false );
  setDirOnlyMode( newBranch, m_dirOnlyMode );

  return newBranch;
#endif
  return 0;
}


void K3bFileTreeView::slotItemExecuted( Q3ListViewItem* item )
{
  K3FileTreeViewItem* treeItem = static_cast<K3FileTreeViewItem*>(item);
  if( d->branchDeviceMap.contains( treeItem->branch() ) &&
      treeItem == treeItem->branch()->root() ) {
    K3bDevice::Device* dev = d->branchDeviceMap[treeItem->branch()];
      k3bappcore->appDeviceManager()->setCurrentDevice( dev );
    emit deviceExecuted( dev );
  }
  else
    emit urlExecuted( treeItem->url() );
}


void K3bFileTreeView::setTreeDirOnlyMode( bool b )
{
  m_dirOnlyMode = b;
}


void K3bFileTreeView::followUrl( const KUrl& url )
{
  //FIXME kde4
#if 0
  // TODO: first try the current branch
  KFileTreeBranchIterator it( branches() );
  for( ; *it; ++it ) {
    if( !d->branchDeviceMap.contains( *it ) )
      if( K3FileTreeViewItem* item = (*it)->findTVIByURL( url ) ) {
	setCurrentItem( item );
	setSelected(item, true);
	ensureItemVisible( item );
	return;
      }
  }
#endif
}


void K3bFileTreeView::slotContextMenu( K3ListView*, Q3ListViewItem* item, const QPoint& p )
{
  K3FileTreeViewItem* treeItem = dynamic_cast<K3FileTreeViewItem*>(item);
  if( treeItem ) {
    K3bDevice::Device* device = 0;
    QMap<KFileTreeBranch*, K3bDevice::Device*>::iterator devIt =
      d->branchDeviceMap.find( treeItem->branch() );
    if( devIt != d->branchDeviceMap.end() )
      device = devIt.data();

    setCurrentItem( treeItem );
    setSelected( treeItem, true);

    if( device ) {
      k3bappcore->appDeviceManager()->setCurrentDevice( device );
      emit contextMenu( device, p );
    }
    else
      emit contextMenu( treeItem->url(), p );
  }
  else
    kWarning() << "(K3bFileTreeView) found viewItem that is no K3FileTreeViewItem!";
}


K3bDevice::Device* K3bFileTreeView::selectedDevice() const
{
  K3FileTreeViewItem* treeItem = dynamic_cast<K3FileTreeViewItem*>(selectedItem());
  if( treeItem ) {
    if( d->branchDeviceMap.contains( treeItem->branch() ) )
      return d->branchDeviceMap[treeItem->branch()];
  }
  return 0;
}


KUrl K3bFileTreeView::selectedUrl() const
{
  K3FileTreeViewItem* treeItem = dynamic_cast<K3FileTreeViewItem*>(selectedItem());
  if( treeItem ) {
    if( !d->branchDeviceMap.contains( treeItem->branch() ) )
      return treeItem->url();
  }
  return KUrl();
}


void K3bFileTreeView::setCurrentDevice( K3bDevice::Device* dev )
{
  if( d->currentDeviceBranch )
    d->currentDeviceBranch->setCurrent( false );

  if( dev ) {
    if ( ( d->currentDeviceBranch = branch( dev ) ) )
        d->currentDeviceBranch->setCurrent( true );
  }

  updateMinimumWidth();
}


void K3bFileTreeView::setSelectedDevice( K3bDevice::Device* dev )
{
  setCurrentDevice( dev );
  K3bDeviceBranch* b = branch( dev );
  setCurrentItem( b->root() );
  setSelected( b->root(), true );
}


K3bDeviceBranch* K3bFileTreeView::branch( K3bDevice::Device* dev )
{
  return d->deviceBranchDict.find( (void*)dev );
}


void K3bFileTreeView::slotSettingsChangedK3b(int category)
{
  // we force single click like konqueror does. This really should be done in K3FileTreeView

  if( category == KGlobalSettings::SETTINGS_MOUSE ) {
    disconnect(this, SIGNAL(mouseButtonClicked(int, Q3ListViewItem*, const QPoint &, int)),
	       this, SLOT(slotMouseButtonClickedK3b(int, Q3ListViewItem*, const QPoint &, int)));

    if( !KGlobalSettings::singleClick() )
      connect(this, SIGNAL(mouseButtonClicked(int, Q3ListViewItem*, const QPoint &, int)),
	      this, SLOT(slotMouseButtonClickedK3b(int, Q3ListViewItem*, const QPoint &, int)));
  }
}


void K3bFileTreeView::slotMouseButtonClickedK3b( int btn, Q3ListViewItem *item, const QPoint &pos, int c )
{
  if( (btn == Qt::LeftButton) && item )
    emitExecute(item, pos, c);
}


void K3bFileTreeView::updateMinimumWidth()
{
  //
  // only handle the device branches, we don't care about the folders.
  //
  int w = 0;
  for( QMap<KFileTreeBranch*, K3bDevice::Device*>::Iterator it = d->branchDeviceMap.begin();
       it != d->branchDeviceMap.end(); ++it ) {
    w = qMax( w, static_cast<K3bDeviceBranchViewItem*>( it.key()->root() )->widthHint() );
  }

  // width of the items + scrollbar width + the frame + a little eyecandy spacing
  setMinimumWidth( w + verticalScrollBar()->sizeHint().width() + 2*frameWidth() + 2 );
}

#include "k3bfiletreeview.moc"
