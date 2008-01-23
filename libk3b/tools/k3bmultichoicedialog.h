/* 
 *
 * Copyright (C) 2003-2008 Sebastian Trueg <trueg@k3b.org>
 *
 * This file is part of the K3b project.
 * Copyright (C) 1998-2008 Sebastian Trueg <trueg@k3b.org>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * See the file "COPYING" for the exact licensing terms.
 */

#ifndef _K3B_MULTI_CHOICE_DIALOG_H_
#define _K3B_MULTI_CHOICE_DIALOG_H_

#include <QtGui/QDialog>
#include <kstdguiitem.h>
#include "k3b_export.h"

#include <qmessagebox.h>
//Added by qt3to4:
#include <QCloseEvent>


class QCloseEvent;

class LIBK3B_EXPORT K3bMultiChoiceDialog : public QDialog
{
    Q_OBJECT

public:
    K3bMultiChoiceDialog( const QString& caption,
                          const QString& text,
                          QMessageBox::Icon = QMessageBox::Information,
                          QWidget* parent = 0 );
    ~K3bMultiChoiceDialog();

    /**
     * Adds a new button. returns it's number starting at 1.
     */
    int addButton( const KGuiItem& );

    static int choose( const QString& caption,
                       const QString& text,
                       QMessageBox::Icon = QMessageBox::Information,
                       QWidget* parent = 0, 
                       int buttonCount = 2,
                       const KGuiItem& b1 = KStandardGuiItem::yes(),
                       const KGuiItem& b2 = KStandardGuiItem::no(),
                       const KGuiItem& b3 = KStandardGuiItem::no(),
                       const KGuiItem& b4 = KStandardGuiItem::no(),
                       const KGuiItem& b5 = KStandardGuiItem::no(),
                       const KGuiItem& b6 = KStandardGuiItem::no() );
		     
public Q_SLOTS:
    /**
     * returnes the number of the clicked button starting at 1.
     */
    int exec();

private Q_SLOTS:
    void slotButtonClicked( int );

private:
    void closeEvent( QCloseEvent* );

    class Private;
    Private* d;
};

#endif
