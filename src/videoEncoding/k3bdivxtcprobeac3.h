/***************************************************************************
                          k3bdivxtcprobeac3.h  -  description
                             -------------------
    begin                : Sun Jul 28 2002
    copyright            : (C) 2002 by Sebastian Trueg
    email                : trueg@informatik.uni-freiburg.de
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef K3BDIVXTCPROBEAC3_H
#define K3BDIVXTCPROBEAC3_H

#include <qobject.h>
#include <qstringlist.h>

class KShellProcess;
class KProcess;
class K3bDivxCodecData;

/**
  *@author Sebastian Trueg
  */

class K3bDivXTcprobeAc3 : public QObject  {
   Q_OBJECT

public: 
    K3bDivXTcprobeAc3();
    ~K3bDivXTcprobeAc3();
    void parseAc3Bitrate( K3bDivxCodecData*);
private:
    KShellProcess *m_process;
    K3bDivxCodecData *m_data;
    QString m_buffer;
private slots:
    void slotParseOutput( KProcess*, char *buffer, int length );
    void slotParseError( KProcess*, char *buffer, int length );
    void slotParsingExited( KProcess* );
};

#endif
