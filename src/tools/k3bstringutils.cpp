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

#include "k3bstringutils.h"

#include <qfontmetrics.h>

#include <kdebug.h>


QString K3b::cutToWidth( const QFontMetrics& fm, const QString& fullText, int cutWidth )
{
  QString squeezedText = "...";
  int squeezedWidth = fm.width(squeezedText);
  int textWidth = fm.width(fullText);

  if( textWidth <= cutWidth ) {
    return fullText;
  }

  if( fm.width(fullText.right(1) + "..." ) > cutWidth ) {
    kdDebug() << "(K3b::cutToWidth) not able to cut text to " << cutWidth << "!" << endl;
    return fullText.right(1) + "...";
  }

  // estimate how many letters we can add to the dots
  int letters = fullText.length() * (cutWidth - squeezedWidth) / textWidth;
  squeezedText = fullText.left(letters) + "...";
  squeezedWidth = fm.width(squeezedText);

  if (squeezedWidth < cutWidth) {
    // we estimated too short
    // add letters while text < label
    do {
      letters++;
      squeezedText = fullText.left(letters) + "...";
      squeezedWidth = fm.width(squeezedText);
    } while (squeezedWidth < cutWidth);
    letters--;
    squeezedText = fullText.left(letters) + "...";
  } else if (squeezedWidth > cutWidth) {
    // we estimated too long
    // remove letters while text > label
    do {
      letters--;
      squeezedText = fullText.left(letters) + "...";
      squeezedWidth = fm.width(squeezedText);
    } while (squeezedWidth > cutWidth);
  }

  return squeezedText;
}
