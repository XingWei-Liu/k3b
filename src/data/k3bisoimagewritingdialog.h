/* 
 *
 * $Id: $
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


#ifndef K3BISOIMAGEWRITINGDIALOG_H
#define K3BISOIMAGEWRITINGDIALOG_H

#include <kdialogbase.h>


class QCheckBox;
class K3bWriterSelectionWidget;
class KLineEdit;
class QToolButton;
class QLabel;
class K3bIso9660ImageWritingJob;
class KURL;

/**
  *@author Sebastian Trueg
  */
class K3bIsoImageWritingDialog : public KDialogBase
{
Q_OBJECT

 public: 
  K3bIsoImageWritingDialog( QWidget* = 0, const char* = 0, bool = true );
  ~K3bIsoImageWritingDialog();

  void setImage( const KURL& url );

 protected slots:
  void slotUser1();
  void slotUser2();
  void updateImageSize( const QString& );
  void slotFindImageFile();
  void slotWriterChanged();
  void slotCheckMd5Sum();

 private:
  void setupGui();

  K3bIso9660ImageWritingJob* m_job;

  K3bWriterSelectionWidget* m_writerSelectionWidget;
  QCheckBox* m_checkDummy;
  QCheckBox* m_checkDao;
  QCheckBox* m_checkBurnProof;
  QCheckBox* m_checkNoFix;

  QLabel*    m_labelImageSize;
  KLineEdit* m_editImagePath;
  QToolButton* m_buttonFindImageFile;


  QWidget* m_isoInfoWidget;
  QLabel* m_labelIsoId;
  QLabel* m_labelIsoSystemId;
  QLabel* m_labelIsoVolumeId;
  QLabel* m_labelIsoVolumeSetId;
  QLabel* m_labelIsoPublisherId;
  QLabel* m_labelIsoPreparerId;
  QLabel* m_labelIsoApplicationId;

  QLabel* m_generalInfoLabel;

  bool m_bIsoImage;
};

#endif
