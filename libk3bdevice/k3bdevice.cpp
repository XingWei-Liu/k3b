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

#include <config.h>


#include "k3bdevice.h"
#include "k3bdeviceglobals.h"
#include "k3btrack.h"
#include "k3btoc.h"
#include "k3bdiskinfo.h"
#include "k3bmmc.h"
#include "k3bscsicommand.h"
#include "k3bcrc.h"

#include <qstringlist.h>
#include <qfile.h>
#include <qglobal.h>
#include <qvaluevector.h>

#include <kdebug.h>

#include <sys/types.h>
#include <sys/ioctl.h>

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <sys/stat.h>
#include <math.h>


#ifdef Q_OS_LINUX

#include <linux/version.h>
#if LINUX_VERSION_CODE >= KERNEL_VERSION(2,5,70)
typedef unsigned char u8;
#endif

#undef __STRICT_ANSI__
#include <linux/cdrom.h>
#define __STRICT_ANSI__

#endif // Q_OS_LINUX

#ifdef Q_OS_FREEBSD
#include <stdio.h>
#include <camlib.h>
#define __BYTE_ORDER BYTE_ORDER
#define __BIG_ENDIAN BIG_ENDIAN
#define CD_FRAMESIZE_RAW 2352
#endif

#ifdef HAVE_RESMGR
extern "C" {
#include <resmgr.h>
}
#endif


//
// Very evil hacking: force the speed values to be acurate
// as long as "they" do not introduce other "broken" DVD
// speeds like 2.4 this works fine
//
static int fixupDvdWritingSpeed( int speed )
{
  //
  // Some writers report their speeds in 1000 bytes per second instead of 1024.
  //
  if( speed % 1385 == 0 )
    return speed;

  else if( speed % 1352 == 0 )
    return speed*1385/1352;

  // has to be 2.4x speed
  else
    return 3324;
}


const char* K3bDevice::Device::cdrdao_drivers[] =
  { "auto", "plextor", "plextor-scan", "cdd2600", "generic-mmc",
    "generic-mmc-raw", "ricoh-mp6200", "sony-cdu920",
    "sony-cdu948", "taiyo-yuden", "teac-cdr55", "toshiba",
    "yamaha-cdr10x", 0
  };


#ifdef Q_OS_LINUX
int K3bDevice::openDevice( const char* name )
{
  int fd = -1;
#ifdef HAVE_RESMGR
  // first try resmgr
  fd = ::rsm_open_device( name, O_RDONLY | O_NONBLOCK );
  kdDebug() << "(K3bDevice::Device) resmgr open: " << fd << endl;
#endif

  if( fd < 0 )
    fd = ::open( name, O_RDONLY | O_NONBLOCK );

  if( fd < 0 ) {
    kdDebug() << "(K3bDevice::Device) Error: could not open device " << name << endl;
    fd = -1;
  }

  return fd;
}
#endif


class K3bDevice::Device::Private
{
public:
  Private()
    : deviceType(0),
      supportedProfiles(0),
#ifdef Q_OS_LINUX
      deviceFd(-1),
#endif
#ifdef Q_OS_FREEBSD
      cam(0),
#endif
      burnfree(false) {
  }

  int deviceType;
  int supportedProfiles;
  QString mountPoint;
  QString mountDeviceName;
  QStringList allNodes;
#ifdef Q_OS_LINUX
  int deviceFd;
#endif
#ifdef Q_OS_FREEBSD
  struct cam_device *cam;
#endif
  bool burnfree;
};


K3bDevice::Device::Device( const QString& devname )
  : m_writeModes(0),
    m_automount(false)
{
  d = new Private;

  m_blockDevice = devname;
  d->allNodes.append(devname);

  m_cdrdaoDriver = "auto";
  m_cdTextCapable = 0;
  m_maxWriteSpeed = 0;
  m_maxReadSpeed = 0;
  d->burnfree = false;
  m_bus = m_target = m_lun = -1;
  m_dvdMinusTestwrite = true;
  m_bufferSize = 0;
}


K3bDevice::Device::~Device()
{
  close();
  delete d;
}


bool K3bDevice::Device::init()
{
  kdDebug() << "(K3bDevice::Device) " << blockDeviceName() << ": init()" << endl;

  //
  // they all should read CD-ROM.
  //
  d->deviceType = CDROM;

  d->supportedProfiles = 0;

#ifndef Q_OS_FREEBSD
  if( open() < 0 )
    return false;
#endif

  //
  // inquiry
  // use a 36 bytes buffer since not all devices return the full inquiry struct
  //
  ScsiCommand cmd( this );
  unsigned char buf[36];
  cmd.clear();
  ::memset( buf, 0, sizeof(buf) );
  struct inquiry* inq = (struct inquiry*)buf;
  cmd[0] = MMC_INQUIRY;
  cmd[4] = sizeof(buf);
  cmd[5] = 0;
  if( cmd.transport( TR_DIR_READ, buf, sizeof(buf) ) ) {
    kdError() << "(K3bDevice::Device) Unable to do inquiry." << endl;
    close();
    return false;
  }
  else {
    m_vendor = QString::fromLocal8Bit( (char*)(inq->vendor), 8 ).stripWhiteSpace();
    m_description = QString::fromLocal8Bit( (char*)(inq->product), 16 ).stripWhiteSpace();
    m_version = QString::fromLocal8Bit( (char*)(inq->revision), 4 ).stripWhiteSpace();
  }



  //
  // We probe all features of the device. Since not all devices support the GET CONFIGURATION command
  // we also query the mode page 2A and use the cdrom.h stuff to get as much information as possible
  //

  // TODO: do multiple calls with length 65530 and different starting features (only for future versions of MMC.
  //       MMC4 says it's never more than 1KB)

  unsigned char header[2048];
  ::memset( header, 0, 2048 );

  cmd.clear();
  cmd[0] = MMC_GET_CONFIGURATION;
  cmd[8] = 8;
  if( cmd.transport( TR_DIR_READ, header, 8 ) ) {
    kdDebug() << "(K3bDevice::Device) " << blockDeviceName() << ": GET_CONFIGURATION failed." << endl;
  }
  else {
    int len = from4Byte( header );

    //
    // Some buggy firmwares do not return the size of the available data
    // but the returned data. So we use a high power of 2 to be on the safe side
    // with these buggy drives.
    // We cannot use this as default since many firmwares fail with a too high data length.
    //
    if( len == 8 ) {
      cmd[7] = 2048>>8;
      cmd[8] = 2048;
      if( cmd.transport( TR_DIR_READ, header, 2048 ) == 0 )
	len = from2Byte( header );
    }

    // again with full length
    unsigned char* profiles = new unsigned char[len];
    ::memset( profiles, 0, len );
    cmd[6] = len>>16;
    cmd[7] = len>>8;
    cmd[8] = len;

    kdDebug() << "(K3bDevice::Device) " << blockDeviceName() << ": GET_CONFIGURATION length: " << len << "." << endl;

    if( cmd.transport( TR_DIR_READ, profiles, len ) ) {
      kdDebug() << "(K3bDevice::Device) " << blockDeviceName() << ": GET_CONFIGURATION failed." << endl;
    }
    else {
      for( int i = 8; i < len; ) {
	short feature = from2Byte( &profiles[i] );
	int featureLen = profiles[i+3];
	i+=4; // skip feature header

	//
	// now i indexes the first byte of the feature dependant data
	//

	switch( feature ) {
	case FEATURE_PROFILE_LIST:
	  for( int j = 0; j < featureLen; j+=4 ) {
	    short profile = from2Byte( &profiles[i+j] );

	    switch (profile) {
	    case 0x10: d->supportedProfiles |= MEDIA_DVD_ROM; break;
	    case 0x11: d->supportedProfiles |= MEDIA_DVD_R_SEQ; break;
	    case 0x12: d->supportedProfiles |= MEDIA_DVD_RAM; break;
	    case 0x13: d->supportedProfiles |= MEDIA_DVD_RW_OVWR; break;
	    case 0x14: d->supportedProfiles |= MEDIA_DVD_RW_SEQ; break;
	    case 0x1A: d->supportedProfiles |= MEDIA_DVD_PLUS_RW; break;
	    case 0x1B: d->supportedProfiles |= MEDIA_DVD_PLUS_R; break;
	    case 0x2B: d->supportedProfiles |= MEDIA_DVD_PLUS_R_DL; break;
	    case 0x08: d->supportedProfiles |= MEDIA_CD_ROM; break;
	    case 0x09: d->supportedProfiles |= MEDIA_CD_R; break;
	    case 0x0A: d->supportedProfiles |= MEDIA_CD_RW; break;
	    default:
	      kdDebug() << "(K3bDevice::Device) " << blockDeviceName() << " unknown profile: "
			<< profile << endl;
	    }
	  }
	  break;

	case FEATURE_CORE:
	  kdDebug() << "(K3bDevice::Device) " << blockDeviceName() << " feature: " << "Core" << endl;
	  break;

	case FEATURE_MORPHING:
	  kdDebug() << "(K3bDevice::Device) " << blockDeviceName() << " feature: " << "Morphing" << endl;
	  break;

	case FEATURE_REMOVABLE_MEDIA:
	  kdDebug() << "(K3bDevice::Device) " << blockDeviceName() << " feature: " << "Removable Medium" << endl;
	  break;

	case FEATURE_WRITE_PROTECT:
	  kdDebug() << "(K3bDevice::Device) " << blockDeviceName() << " feature: " << "Write Protect" << endl;
	  break;

	  // 0x05 - 0x0F reserved

	case FEATURE_RANDOM_READABLE:
	  kdDebug() << "(K3bDevice::Device) " << blockDeviceName() << " feature: " << "Random Readable" << endl;
	  break;

	  // 0x11 - 0x1C reserved

	case FEATURE_MULTI_READ:
	  kdDebug() << "(K3bDevice::Device) " << blockDeviceName() << " feature: " << "Multi-Read" << endl;
	  d->deviceType |= CDROM;
	  break;

	case FEATURE_CD_READ:
	  kdDebug() << "(K3bDevice::Device) " << blockDeviceName() << " feature: " << "CD Read" << endl;
	  d->deviceType |= CDROM;
	  break;

	case FEATURE_DVD_READ:
	  kdDebug() << "(K3bDevice::Device) " << blockDeviceName() << " feature: " << "DVD Read" << endl;
	  d->deviceType |= DVD;
	  break;

	case FEATURE_RANDOM_WRITABLE:
	  kdDebug() << "(K3bDevice::Device) " << blockDeviceName() << " feature: " << "Random Writable" << endl;
	  break;

	case FEATURE_INCREMENTAL_STREAMING_WRITABLE:
	  kdDebug() << "(K3bDevice::Device) " << blockDeviceName() << " feature: " << "Incremental Streaming Writable" << endl;
	  break;

	case FEATURE_SECTOR_ERASABLE:
	  kdDebug() << "(K3bDevice::Device) " << blockDeviceName() << " feature: " << "Sector Erasable" << endl;
	  break;

	case FEATURE_FORMATTABLE:
	  kdDebug() << "(K3bDevice::Device) " << blockDeviceName() << " feature: " << "Formattable" << endl;
	  break;

	case FEATURE_DEFECT_MANAGEMENT:
	  kdDebug() << "(K3bDevice::Device) " << blockDeviceName() << " feature: " << "Defect Management" << endl;
	  break;

	case FEATURE_WRITE_ONCE:
	  kdDebug() << "(K3bDevice::Device) " << blockDeviceName() << " feature: " << "Write Once" << endl;
	  break;

	case FEATURE_RESTRICTED_OVERWRITE:
	  kdDebug() << "(K3bDevice::Device) " << blockDeviceName() << " feature: " << "Restricted Overwrite" << endl;
	  break;

	case FEATURE_CD_RW_CAV_WRITE:
	  kdDebug() << "(K3bDevice::Device) " << blockDeviceName() << " feature: " << "CD-RW CAV Write" << endl;
	  d->deviceType |= CDRW;
	  break;

	case FEATURE_MRW:
	  kdDebug() << "(K3bDevice::Device) " << blockDeviceName() << " feature: " << "MRW" << endl;
	  break;

	case FEATURE_ENHANCED_DEFECT_REPORTING:
	  kdDebug() << "(K3bDevice::Device) " << blockDeviceName() << " feature: " << "Enhanced Defect Reporting" << endl;
	  break;

	case FEATURE_DVD_PLUS_RW:
	  {
	    kdDebug() << "(K3bDevice::Device) " << blockDeviceName() << " feature: " << "DVD+RW" << endl;
#if __BYTE_ORDER == __BIG_ENDIAN
	    struct dvd_plus_rw_feature {
	      unsigned char reserved1   : 7;
	      unsigned char write       : 1;
	      unsigned char reserved2   : 6;
	      unsigned char quick_start : 1;
	      unsigned char close_only  : 1;
	      // and some stuff we do not use here...
	    };
#else
	    struct dvd_plus_rw_feature {
	      unsigned char write       : 1;
	      unsigned char reserved1   : 7;
	      unsigned char close_only  : 1;
	      unsigned char quick_start : 1;
	      unsigned char reserved2   : 6;
	      // and some stuff we do not use here...
	    };
#endif

	    struct dvd_plus_rw_feature* p = (struct dvd_plus_rw_feature*)&profiles[i];
	    if( p->write ) d->deviceType |= DVDPRW;
	    break;
	  }

	case FEATURE_DVD_PLUS_R:
	  {
	    kdDebug() << "(K3bDevice::Device) " << blockDeviceName() << " feature: " << "DVD+R" << endl;
#if __BYTE_ORDER == __BIG_ENDIAN
	    struct dvd_plus_r_feature {
	      unsigned char reserved1      : 7;
	      unsigned char write          : 1;
	      unsigned char reserved2[3];
	      unsigned char reserved3      : 6;
	      unsigned char write_4x_max   : 1;
	      unsigned char write_2_4x_max : 1;
	      // and some stuff we do not use here...
	    };
#else
	    struct dvd_plus_r_feature {
	      unsigned char write     : 1;
	      unsigned char reserved1 : 7;
	      unsigned char reserved2[3];
	      unsigned char write_2_4x_max : 1;
	      unsigned char write_4x_max   : 1;
	      unsigned char reserved3      : 6;
	      // and some stuff we do not use here...
	    };
#endif
	    struct dvd_plus_r_feature* p = (struct dvd_plus_r_feature*)&profiles[i];
	    if( p->write ) d->deviceType |= DVDPR;
	    break;
	  }

	case FEATURE_RIGID_RESTRICTED_OVERWRITE:
	  kdDebug() << "(K3bDevice::Device) " << blockDeviceName() << " feature: " << "Rigid Restricted Overwrite" << endl;
	  break;

	case FEATURE_CD_TRACK_AT_ONCE:
	  {
	    kdDebug() << "(K3bDevice::Device) " << blockDeviceName() << " feature: " << "CD Track At Once" << endl;
#if __BYTE_ORDER == __BIG_ENDIAN
	    struct cd_track_at_once_feature {
	      unsigned char reserved1 : 1;
	      unsigned char BUF       : 1;  // Burnfree
	      unsigned char reserved2 : 1;
	      unsigned char rw_raw    : 1;  // Writing R-W subcode in Raw mode
	      unsigned char rw_pack   : 1;  // Writing R-W subcode in Packet mode
	      unsigned char testwrite : 1;  // Simulation write support
	      unsigned char cd_rw     : 1;  // CD-RW support
	      unsigned char rw_sub    : 1;  // Write R-W sub channels with user data
	      unsigned char reserved3;
	      unsigned char data_type[2];
	    };
#else
	    struct cd_track_at_once_feature {
	      unsigned char rw_sub    : 1;  // Write R-W sub channels with user data
	      unsigned char cd_rw     : 1;  // CD-RW support
	      unsigned char testwrite : 1;  // Simulation write support
	      unsigned char rw_pack   : 1;  // Writing R-W subcode in Packet mode
	      unsigned char rw_raw    : 1;  // Writing R-W subcode in Raw mode
	      unsigned char reserved2 : 1;
	      unsigned char BUF       : 1;  // Burnfree
	      unsigned char reserved1 : 1;
	      unsigned char reserved3;
	      unsigned char data_type[2];
	    };
#endif

	    struct cd_track_at_once_feature* p = (struct cd_track_at_once_feature*)&profiles[i];
	    m_writeModes |= TAO;
	    if( p->BUF ) d->burnfree = true;
	    d->deviceType |= CDR;
	    if( p->cd_rw ) d->deviceType |= CDRW;
	    break;
	  }

	case FEATURE_CD_MASTERING:
	  {
	    kdDebug() << "(K3bDevice::Device) " << blockDeviceName() << " feature: " << "CD Mastering" << endl;
#if __BYTE_ORDER == __BIG_ENDIAN
	    struct cd_mastering_feature {
	      unsigned char reserved1 : 1;
	      unsigned char BUF       : 1;  // Burnfree
	      unsigned char SAO       : 1;  // Session At Once writing
	      unsigned char raw_ms    : 1;  // Writing Multisession in Raw Writing Mode
	      unsigned char raw       : 1;  // Writing in RAW mode
	      unsigned char testwrite : 1;  // Simulation write support
	      unsigned char cd_rw     : 1;  // CD-RW support
	      unsigned char rw_sub    : 1;  // Write R-W sub channels with user data
	      unsigned char max_cue_length[3];
	    };
#else
	    struct cd_mastering_feature {
	      unsigned char rw_sub    : 1;  // Write R-W sub channels with user data
	      unsigned char cd_rw     : 1;  // CD-RW support
	      unsigned char testwrite : 1;  // Simulation write support
	      unsigned char raw       : 1;  // Writing in RAW mode
	      unsigned char raw_ms    : 1;  // Writing Multisession in Raw Writing Mode
	      unsigned char SAO       : 1;  // Session At Once writing
	      unsigned char BUF       : 1;  // Burnfree
	      unsigned char reserved1 : 1;
	      unsigned char max_cue_length[3];
	    };
#endif

	    struct cd_mastering_feature* p = (struct cd_mastering_feature*)&profiles[i];
	    if( p->BUF ) d->burnfree = true;
	    d->deviceType |= CDR;
	    if( p->cd_rw ) d->deviceType |= CDRW;
	    if( p->SAO ) m_writeModes |= SAO;
	    if( p->raw || p->raw_ms ) m_writeModes |= RAW;  // perhaps we should extend this to RAW/R96P|R
	    break;
	  }

	case FEATURE_DVD_R_RW_WRITE:
	  {
	    kdDebug() << "(K3bDevice::Device) " << blockDeviceName() << " feature: " << "DVD-R/-RW Write" << endl;
#if __BYTE_ORDER == __BIG_ENDIAN
	    struct dvd_r_rw_write_feature {
	      unsigned char reserved1 : 1;
	      unsigned char BUF       : 1;  // Burnfree
	      unsigned char reserved2 : 3;
	      unsigned char testwrite : 1;  // Simulation write support
	      unsigned char dvd_rw    : 1;  // DVD-RW Writing
	      unsigned char reserved3 : 1;
	      unsigned char reserved4[3];
	    };
#else
	    struct dvd_r_rw_write_feature {
	      unsigned char reserved3 : 1;
	      unsigned char dvd_rw    : 1;  // DVD-RW Writing
	      unsigned char testwrite : 1;  // Simulation write support
	      unsigned char reserved2 : 3;
	      unsigned char BUF       : 1;  // Burnfree
	      unsigned char reserved1 : 1;
	      unsigned char reserved4[3];
	    };
#endif

	    struct dvd_r_rw_write_feature* p = (struct dvd_r_rw_write_feature*)&profiles[i];
	    if( p->BUF ) d->burnfree = true;
	    d->deviceType |= DVDR;
	    if( p->dvd_rw ) d->deviceType |= DVDRW;

	    m_dvdMinusTestwrite = p->testwrite;
	    break;
	  }

	case FEATURE_DDCD_READ:
	  kdDebug() << "(K3bDevice::Device) " << blockDeviceName() << " feature: " << "DDCD Read" << endl;
	  break;

	case FEATURE_DDCD_R_WRITE:
	  kdDebug() << "(K3bDevice::Device) " << blockDeviceName() << " feature: " << "DDCD-R Write" << endl;
	  break;

	case FEATURE_DDCD_RW_WRITE:
	  kdDebug() << "(K3bDevice::Device) " << blockDeviceName() << " feature: " << "DDCD-RW Write" << endl;
	  break;

	  // 0x33 0x38

	case FEATURE_CD_RW_MEDIA_WRITE_SUPPORT:
	  kdDebug() << "(K3bDevice::Device) " << blockDeviceName() << " feature: " << "CD-RW Media Write Support" << endl;
	  d->deviceType |= CDRW;
	  break;

	  // 0x38- 0xFF reserved

	case FEATURE_POWER_MANAGEMENT:
	  kdDebug() << "(K3bDevice::Device) " << blockDeviceName() << " feature: " << "Power Management" << endl;
	  break;

	  // 0x101 reserved

	case FEATURE_EMBEDDED_CHANGER:
	  kdDebug() << "(K3bDevice::Device) " << blockDeviceName() << " feature: " << "Embedded Changer" << endl;
	  break;

	case FEATURE_CD_AUDIO_ANALOG_PLAY:
	  kdDebug() << "(K3bDevice::Device) " << blockDeviceName() << " feature: " << "CD Audio analog play" << endl;
	  break;

	case FEATURE_MICROCODE_UPGRADE:
	  kdDebug() << "(K3bDevice::Device) " << blockDeviceName() << " feature: " << "Microcode Upgrade" << endl;
	  break;

	case FEATURE_TIMEOUT:
	  kdDebug() << "(K3bDevice::Device) " << blockDeviceName() << " feature: " << "Timeout" << endl;
	  break;

	case FEATURE_DVD_CSS:
	  kdDebug() << "(K3bDevice::Device) " << blockDeviceName() << " feature: " << "DVD-CSS" << endl;
	  break;

	case FEATURE_REAL_TIME_STREAMING:
	  kdDebug() << "(K3bDevice::Device) " << blockDeviceName() << " feature: " << "Read Time Streaming" << endl;
	  break;

	case FEATURE_LOGICAL_UNIT_SERIAL_NUMBER:
	  kdDebug() << "(K3bDevice::Device) " << blockDeviceName() << " feature: " << "Logical Unit Serial Number" << endl;
	  break;

	  // 0x109 reserved

	case FEATURE_DISC_CONTROL_BLOCKS:
	  kdDebug() << "(K3bDevice::Device) " << blockDeviceName() << " feature: " << "Disc Control Blocks" << endl;
	  break;

	case FEATURE_DVD_CPRM:
	  kdDebug() << "(K3bDevice::Device) " << blockDeviceName() << " feature: " << "DVD CPRM" << endl;
	  break;

	  //  0x10C - 0x1FE reserved

	case FEATURE_FIRMWARE_DATE:
	  kdDebug() << "(K3bDevice::Device) " << blockDeviceName() << " feature: " << "Firmware Date" << endl;
	  break;

	  // 0x200 - 0xFEFF reserved

	  // 0xFF00 - 0xFFFF vendor specific

	default:
	  kdDebug() << "(K3bDevice::Device) " << blockDeviceName() << ": unknown feature: "
		    << feature << endl;
	  break;
	}

	// skip feature dependent data
	i += featureLen;
      }
    }

    delete [] profiles;
  }


  //
  // Check the supported write modes (TAO, SAO, RAW) by trying to set them
  // We do this before checking mode page 2A in case some readers allow changin
  // the write parameter page
  //
  checkWriteModes();

  //
  // Most current drives support the 2A mode page
  // Here we can get some more information (cdrecord -prcap does exactly this)
  //
  unsigned char* mm_cap_buffer = 0;
  int mm_cap_len = 0;
  if( modeSense( &mm_cap_buffer, mm_cap_len, 0x2A ) ) {
    mm_cap_page_2A* mm_p = (mm_cap_page_2A*)(mm_cap_buffer+8);
    if( mm_p->BUF )
      d->burnfree = true;

    if( mm_p->cd_r_write )
      d->deviceType |= CDR;
    else
      d->deviceType &= ~CDR;

    if( mm_p->cd_rw_write )
      d->deviceType |= CDRW;
    else
      d->deviceType &= ~CDRW;

    if( mm_p->dvd_r_write )
      d->deviceType |= DVDR;
    else
      d->deviceType &= ~DVDR;

    if( mm_p->dvd_rom_read || mm_p->dvd_r_read )
      d->deviceType |= DVD;

    m_maxReadSpeed = from2Byte(mm_p->max_read_speed);
    m_bufferSize = from2Byte( mm_p->buffer_size );

    delete [] mm_cap_buffer;
  }
  else {
    kdDebug() << "(K3bDevice::Device) " << blockDeviceName() << ": read mode page 2A failed!" << endl;
  }

  m_maxWriteSpeed = determineMaximalWriteSpeed();


  //
  // Check Just-Link via Ricoh mode page 0x30
  //
  if( !d->burnfree ) {
    unsigned char* ricoh = 0;
    int ricohLen = 0;
    if( modeSense( &ricoh, ricohLen, 0x30 ) ) {

      //
      // 8 byte mode header + 6 byte page data
      //

      if( ricohLen >= 14 ) {
	ricoh_mode_page_30* rp = (ricoh_mode_page_30*)(ricoh+8);
	d->burnfree = rp->BUEFS;
      }

      delete [] ricoh;
    }
  }


  //
  // Support for some very old drives
  //
  checkForAncientWriters();

  close();

  return furtherInit();
}


bool K3bDevice::Device::furtherInit()
{
#ifdef Q_OS_LINUX

  //
  // Since all CDR drives at least support TAO, all CDRW drives should support
  // mode page 2a and all DVD writer should support mode page 2a or the GET CONFIGURATION
  // command this is redundant and may be removed for BSD ports or even completely
  //
  // We just keep it here because of the "should" in the sentence above. If someone can tell me
  // that the linux driver does nothing more we can remove it completely.
  //
  int drivetype = ::ioctl( open(), CDROM_GET_CAPABILITY, CDSL_CURRENT );
  if( drivetype < 0 ) {
    kdDebug() << "Error while retrieving capabilities." << endl;
    close();
    return false;
  }

  d->deviceType |= CDROM;

  if (drivetype & CDC_CD_R)
    d->deviceType |= CDR;
  if (drivetype & CDC_CD_RW)
    d->deviceType |= CDRW;
  if (drivetype & CDC_DVD_R)
    d->deviceType |= DVDR;
  if (drivetype & CDC_DVD_RAM)
    d->deviceType |= DVDRAM;
  if (drivetype & CDC_DVD)
    d->deviceType |= DVD;

  close();

#endif // Q_OS_LINUX
  return true;
}


void K3bDevice::Device::checkForAncientWriters()
{
  // TODO: add a boolean which determines if this device is non-MMC so we may warn the user at K3b startup about it

  //
  // There are a lot writers out there which behave like the TEAC R5XS
  //
  if( ( vendor().startsWith("TEAC") && ( description().startsWith("CD-R50S") ||
					 description().startsWith("CD-R55S") ) )
      ||
      ( vendor().startsWith("SAF") && ( description().startsWith("CD-R2006PLUS") ||
					description().startsWith("CD-RW226") ||
					description().startsWith("CD-R4012") ) )
      ||
      ( vendor().startsWith("JVC") && ( description().startsWith("XR-W2001") ||
					description().startsWith("XR-W2010") ||
					description().startsWith("R2626") ) )
      ||
      ( vendor().startsWith("PINNACLE") && ( description().startsWith("RCD-1000") ||
					description().startsWith("RCD5020") ||
					description().startsWith("RCD5040") ||
					description().startsWith("RCD 4X4") ) )
      ||
      ( vendor().startsWith("Traxdata") && description().startsWith("CDR4120") ) ) {
    m_writeModes = TAO;
    d->deviceType = CDROM|CDR;
    m_maxWriteSpeed = 4;
    m_maxReadSpeed = 12;
    m_bufferSize = 1024;
    d->burnfree = false;
  }
  else if( vendor().startsWith("MATSHITA") ) {
    if( description().startsWith("CD-R   CW-7501") ) {
      m_writeModes = TAO|SAO;
      d->deviceType = CDROM|CDR;
      m_maxWriteSpeed = 2;
      m_maxReadSpeed = 4;
      m_bufferSize = 1024;
      d->burnfree = false;
    }
    if( description().startsWith("CD-R   CW-7502") ) {
      m_writeModes = TAO|SAO;
      d->deviceType = CDROM|CDR;
      m_maxWriteSpeed = 4;
      m_maxReadSpeed = 8;
      m_bufferSize = 1024;
      d->burnfree = false;
    }
    else if( description().startsWith("CD-R56S") ) {
      m_writeModes |= TAO;
      d->deviceType |= CDROM|CDR;
      m_maxWriteSpeed = 6;
      m_maxReadSpeed = 24;
      m_bufferSize = 1302;
      d->burnfree = false;
    }
  }
  else if( vendor().startsWith("HP") ) {
    if( description().startsWith("CD-Writer 6020") ) {
      m_writeModes = TAO;
      d->deviceType = CDROM|CDR;
      m_maxWriteSpeed = 2;
      m_maxReadSpeed = 6;
      m_bufferSize = 1024;
      d->burnfree = false;
    }
  }
}


K3bDevice::Device::interface K3bDevice::Device::interfaceType()
{
  if( m_bus != -1 && m_target != -1 && m_lun != -1 )
    return SCSI;
  else
    return IDE;
}


bool K3bDevice::Device::dao() const
{
  return m_writeModes & SAO;
}


bool K3bDevice::Device::supportsRawWriting() const
{
  return( writingModes() & (RAW|RAW_R16|RAW_R96P|RAW_R96R) );
}


bool K3bDevice::Device::writesCd() const
{
  return ( d->deviceType & CDR ) && ( m_writeModes & TAO );
}


bool K3bDevice::Device::burner() const
{
  return ( writesCd() || writesDvd() );
}


bool K3bDevice::Device::writesCdrw() const
{
  return d->deviceType & CDRW;
}


bool K3bDevice::Device::writesDvd() const
{
  return ( writesDvdPlus() || writesDvdMinus() );
}


bool K3bDevice::Device::writesDvdPlus() const
{
  return d->deviceType & (DVDPR|DVDPRW);
}


bool K3bDevice::Device::writesDvdMinus() const
{
  return d->deviceType & (DVDR|DVDRW);
}


bool K3bDevice::Device::readsDvd() const
{
  return d->deviceType & (DVD|DVDR|DVDRAM);
}


int K3bDevice::Device::type() const
{
  return d->deviceType;
}


const QString& K3bDevice::Device::devicename() const
{
  return blockDeviceName();
}


QString K3bDevice::Device::busTargetLun() const
{
  return QString("%1,%2,%3").arg(m_bus).arg(m_target).arg(m_lun);
}


int K3bDevice::Device::cdTextCapable() const
{
  if( cdrdaoDriver() == "auto" )
    return 0;
  else
    return m_cdTextCapable;
}


void K3bDevice::Device::setCdTextCapability( bool b )
{
  m_cdTextCapable = ( b ? 1 : 2 );
}


void K3bDevice::Device::setMountPoint( const QString& mp )
{
  d->mountPoint = mp;
}

void K3bDevice::Device::setMountDevice( const QString& md )
{
  d->mountDeviceName = md;
}


const QString& K3bDevice::Device::mountDevice() const
{
  return d->mountDeviceName;
}


const QString& K3bDevice::Device::mountPoint() const
{
  return d->mountPoint;
}



bool K3bDevice::Device::burnproof() const
{
  return burnfree();
}


bool K3bDevice::Device::burnfree() const
{
  return d->burnfree;
}


bool K3bDevice::Device::isDVD() const
{
  if( d->deviceType & ( DVDR | DVDRAM | DVD ) ) {
    return( dvdMediaType() != MEDIA_UNKNOWN );
  }
  else
    return false;
}


bool K3bDevice::Device::isReady() const
{
  ScsiCommand cmd( this );
  cmd[0] = MMC_TEST_UNIT_READY;
  return( cmd.transport() == 0 );
}


int K3bDevice::Device::isEmpty() const
{
  // if the device is already opened we do not close it
  // to allow fast multible method calls in a row
  bool needToClose = !isOpen();

  int ret = NO_INFO;
  if (open() < 0)
    return NO_INFO;

  if( !isReady() )
    return NO_DISK;

  unsigned char* data = 0;
  int dataLen = 0;

  if( readDiscInfo( &data, dataLen ) ) {
    disc_info_t* inf = (disc_info_t*)data;
    switch( inf->status ) {
    case 0:
      ret = EMPTY;
      break;
    case 1:
      ret = APPENDABLE;
      break;
    case 2:
      ret = COMPLETE;
      break;
    default:
      ret = NO_INFO;
      break;
    }

    delete [] data;
  }

  if( needToClose )
    close();

  return ret;
}


K3b::Msf K3bDevice::Device::discSize() const
{
  // if the device is already opened we do not close it
  // to allow fast multible method calls in a row
  bool needToClose = !isOpen();

  K3b::Msf ret(0);
  if (open() < 0)
    return ret;

  unsigned char* data = 0;
  int dataLen = 0;

  if( readDiscInfo( &data, dataLen ) ) {
    disc_info_t* inf = (disc_info_t*)data;
    if ( inf->lead_out_m != 0xFF && inf->lead_out_s != 0xFF && inf->lead_out_f != 0xFF ) {
      ret = K3b::Msf( inf->lead_out_m, inf->lead_out_s, inf->lead_out_f );
      ret -= 150;
    }

    delete [] data;
  }

  if( ret == 0 ) {
    kdDebug() << "(K3bDevice::Device) " << blockDeviceName()
	      << "READ DISC INFORMATION failed. getting disk size via toc." << endl;
    Toc toc = readToc();
    ret = toc.lastSector();
  }

  if( needToClose )
    close();

  return ret;
}


K3b::Msf K3bDevice::Device::remainingSize() const
{
  K3b::Msf ret, size;
  bool empty = false;
  bool appendable = false;

  unsigned char* data = 0;
  int dataLen = 0;

  if( readDiscInfo( &data, dataLen ) ) {
    disc_info_t* inf = (disc_info_t*)data;
    if ( inf->lead_in_m != 0xFF && inf->lead_in_s != 0xFF && inf->lead_in_f != 0xFF ) {
      ret = K3b::Msf( inf->lead_in_m, inf->lead_in_s, inf->lead_in_f );
    }
    if ( inf->lead_out_m != 0xFF && inf->lead_out_s != 0xFF && inf->lead_out_f != 0xFF ) {
      size = K3b::Msf( inf->lead_out_m, inf->lead_out_s, inf->lead_out_f );
    }

    empty = !inf->status;
    appendable = ( inf->status == 1 );

    delete [] data;
  }
  else
    return 0;

  if( empty )
    return size - 150;
  else if( appendable )
    return size - ret - 4650;
  else
    return 0;
}

int K3bDevice::Device::numSessions() const
{
  //
  // Althought disk_info should get the real value without ide-scsi
  // I keep getting wrong values (the value is too high. I think the leadout
  // gets counted as session sometimes :()
  //

  //
  // Session Info
  // ============
  // Byte 0-1: Data Length
  // Byte   2: First Complete Session Number (Hex) - always 1
  // Byte   3: Last Complete Session Number (Hex)
  //

  int ret = -1;

  unsigned char* dat = 0;
  int len = 0;
  if( readTocPmaAtip( &dat, len, 1, 0, 0 ) ) {
    ret = dat[3];

    delete [] dat;
  }
  else {
    kdDebug() << "(K3bDevice::Device) " << blockDeviceName() << ": could not get session info !" << endl;
  }

  return ret;
}


int K3bDevice::Device::getDataMode( const K3b::Msf& sector ) const
{
  bool needToClose = !isOpen();

  int ret = Track::UNKNOWN;

  if (open() < 0)
    return ret;

  // we use readCdMsf here since it's defined mandatory in MMC1 and
  // we only use this method for CDs anyway
  unsigned char data[2352];
  bool readSuccess = readCdMsf( data, 2352,
				0,      // all sector types
				false,  // no dap
				sector,
				sector+1,
				true, // SYNC
				true, // HEADER
				true, // SUBHEADER
				true, // USER DATA
				true, // EDC/ECC
				0,    // no c2 info
				0 );

  if( readSuccess ) {
    if ( data[15] == 0x1 )
      ret = Track::MODE1;
    else if ( data[15] == 0x2 )
      ret = Track::MODE2;
    if ( ret == Track::MODE2 ) {
      if ( data[16] == data[20] &&
           data[17] == data[21] &&
           data[18] == data[22] &&
           data[19] == data[23] ) {
	if ( data[18] & 0x20 )
	  ret = Track::XA_FORM2;
	else
	  ret = Track::XA_FORM1;
      }
    }
  }

  if( needToClose )
    close();

  return ret;
}



int K3bDevice::Device::getTrackDataMode( const K3bDevice::Track& track ) const
{
  return getDataMode( track.firstSector() );
}


K3bDevice::Toc K3bDevice::Device::readToc() const
{
  // if the device is already opened we do not close it
  // to allow fast multible method calls in a row
  bool needToClose = !isOpen();

  Toc toc;

  if( open() == -1 )
    return toc;

  if( isDVD() ) {
    int mediaType = dvdMediaType();
    //
    // Use the profile if available because DVD-ROM units need to treat DVD+-R(W) media as DVD-ROM
    // if supported at all
    //
    if( currentProfile() == MEDIA_DVD_ROM )
      mediaType = MEDIA_DVD_ROM;

   switch( mediaType ) {

    case MEDIA_DVD_ROM:
    case MEDIA_DVD_RW_OVWR:
    case MEDIA_DVD_PLUS_RW:
      {
	unsigned char* data = 0;
	int dataLen = 0;
	if( readTrackInformation( &data, dataLen, 0x1, 0x1 ) ) {
	  track_info_t* trackInfo = (track_info_t*)data;

	  Track track;
	  track.m_firstSector = 0;
	  track.m_lastSector = from4Byte( trackInfo->track_size ) - 1;
	  track.m_session = 1;
	  track.m_type = Track::DATA;
	  track.m_mode = Track::DVD;
	  track.m_copyPermitted = ( mediaType != MEDIA_DVD_ROM );
	  track.m_preEmphasis = ( mediaType != MEDIA_DVD_ROM );

	  toc.append( track );

	  delete [] data;

	  break;
	}
	else
	  kdDebug() << "(K3bDevice::Device) " << blockDeviceName()
		    << "READ TRACK INFORMATION for toc failed." << endl;

	K3b::Msf size;
	if( readCapacity( size ) ) {
	  Track track;
	  track.m_firstSector = 0;
	  track.m_lastSector = size.lba();
	  track.m_session = 1;
	  track.m_type = Track::DATA;
	  track.m_mode = Track::DVD;
	  track.m_copyPermitted = ( mediaType != MEDIA_DVD_ROM );
	  track.m_preEmphasis = ( mediaType != MEDIA_DVD_ROM );

	  toc.append( track );

	  break;
	}
	else
	  kdDebug() << "(K3bDevice::Device) " << blockDeviceName()
		    << "READ CAPACITY for toc failed." << endl;
      }

      // fallthrough...

    case MEDIA_DVD_R:
    case MEDIA_DVD_R_SEQ:
      // multisession possible
      readFormattedToc( toc, true );
      break;

    case MEDIA_DVD_RW:
    case MEDIA_DVD_RW_SEQ:
      // is multisession possible??
      readFormattedToc( toc, true );
      break;

    case MEDIA_DVD_PLUS_R:
    case MEDIA_DVD_PLUS_R_DL:
      //
      // a DVD+R disk may have multible sessions
      // every session may contain up to 16 fragments
      // if the disk is open there is one open session
      // every closed session is viewed as a track whereas
      // every fragment of the open session is viewed as a track
      //
      // We may use
      // READ DISK INFORMATION
      // READ TRACK INFORMATION: track number FFh refers to the incomplete fragment (track)
      // READ TOC/PMA/ATIP: form 0 refers to all closed sessions
      //                    form 1 refers to the last closed session
      //
      readFormattedToc( toc, true );
      break;

    case MEDIA_DVD_RAM:
      kdDebug() << "(K3bDevice::readDvdToc) no dvdram support" << endl;
      break;
    default:
      kdDebug() << "(K3bDevice::readDvdToc) no dvd." << endl;
    }
  }
  else {
    bool success = readRawToc( toc );
    if( !success ) {
      success = readFormattedToc( toc );

#ifdef Q_OS_LINUX
      if( !success ) {
	kdDebug() << "(K3bDevice::Device) MMC READ TOC failed. falling back to cdrom.h." << endl;
	readTocLinux(toc);
      }
#endif

      if( success )
	fixupToc( toc );
    }
  }

  if( needToClose )
    close();

  return toc;
}


void K3bDevice::Device::readIsrcMcn( K3bDevice::Toc& toc ) const
{
  // read MCN and ISRC of all tracks
  QCString mcn;
  if( readMcn( mcn ) ) {
    toc.setMcn( mcn );
    kdDebug() << "(K3bDevice::Device) found MCN: " << mcn << endl;
  }
  else
    kdDebug() << "(K3bDevice::Device) no MCN found." << endl;

  for( unsigned int i = 1; i <= toc.count(); ++i ) {
    QCString isrc;
    if( toc[i-1].type() == Track::AUDIO ) {
      if( readIsrc( i, isrc ) ) {
	kdDebug() << "(K3bDevice::Device) found ISRC for track " << i << ": " << isrc << endl;
	toc[i-1].setIsrc( isrc );
      }
      else
	kdDebug() << "(K3bDevice::Device) no ISRC found for track " << i << endl;
    }
  }
}


bool K3bDevice::Device::readFormattedToc( K3bDevice::Toc& toc, bool dvd ) const
{
  // if the device is already opened we do not close it
  // to allow fast multible method calls in a row
  bool needToClose = !isOpen();

  bool success = false;

  toc.clear();

  unsigned char* data = 0;
  int dataLen = 0;
  if( readTocPmaAtip( &data, dataLen, 0, 0, 1 ) ) {

    if( dataLen < 4 ) {
      kdDebug() << "(K3bDevice::Device) " << blockDeviceName() << ": formatted toc data too small." << endl;
    }
    else if( dataLen != ( (int)sizeof(toc_track_descriptor) * ((int)data[3]+1) ) + 4 ) {
      kdDebug() << "(K3bDevice::Device) " << blockDeviceName() << ": invalid formatted toc data length: "
		<< (dataLen-2) << endl;
    }
    else {
      int lastTrack = data[3];
      toc_track_descriptor* td = (toc_track_descriptor*)&data[4];
      for( int i = 0; i < lastTrack; ++i ) {

	Track track;
	unsigned int control = 0;

	unsigned char* trackData = 0;
	int trackDataLen = 0;
	if( readTrackInformation( &trackData, trackDataLen, 1, i+1 ) ) {
	  track_info_t* trackInfo = (track_info_t*)trackData;

	  track.m_firstSector = from4Byte( trackInfo->track_start );
	  track.m_lastSector = track.m_firstSector + from4Byte( trackInfo->track_size ) - 1;
	  track.m_session = (int)(trackInfo->session_number_m<<8 & 0xf0 |
				  trackInfo->session_number_l & 0x0f);  //FIXME: is this BCD??

	  control = trackInfo->track_mode;

	  delete [] trackData;
	}
	else {
	  //
	  // READ TRACK INFORMATION failed
	  // no session number info
	  // no track length and thus possibly incorrect last sector for
	  // multisession disks
	  //
	  track.m_firstSector = from4Byte( td[i].start_adr );
	  track.m_lastSector = from4Byte( td[i+1].start_adr ) - 1;
	  control = td[i].control;
	}

	if( dvd ) {
	  track.m_type = Track::DATA;
	  track.m_mode = Track::DVD;
	}
	else {
	  track.m_type = (control & 0x4) ? Track::DATA : Track::AUDIO;
	  track.m_mode = getTrackDataMode( track );
	}
	track.m_copyPermitted = ( control & 0x2 );
	track.m_preEmphasis = ( control & 0x1 );

	toc.append( track );
      }

      success = true;
    }

    delete [] data;
  }


  if( needToClose )
    close();

  return success;
}


bool K3bDevice::Device::readRawToc( K3bDevice::Toc& toc ) const
{
  // if the device is already opened we do not close it
  // to allow fast multible method calls in a row
  bool needToClose = !isOpen();

  bool success = false;

  toc.clear();

  if( open() != -1 ) {
    //
    // Read Raw TOC (format: 0010b)
    //
    // For POINT from 01h-63h we get all the tracks
    // POINT a1h gices us the last track number in the session in PMIN
    // POINT a2h gives the start of the session lead-out in PMIN,PSEC,PFRAME
    //

    unsigned char* data = 0;
    int dataLen = 0;

    if( readTocPmaAtip( &data, dataLen, 2, false, 1 ) ) {
      if( dataLen > 4 ) {
	success = true;

	toc_raw_track_descriptor* tr = (toc_raw_track_descriptor*)&data[4];

	//
	// debug the raw toc data
	//
	kdDebug() << "Session |  ADR   | CONTROL|  TNO   | POINT  |  Min   |  Sec   | Frame  |  Zero  |  PMIN  |  PSEC  | PFRAME |" << endl;
	for( int i = 0; i < (dataLen-4)/(int)sizeof(toc_raw_track_descriptor); ++i ) {
	  QString s;
	  s += QString( " %1 |" ).arg( (int)tr[i].session_number, 6 );
	  s += QString( " %1 |" ).arg( (int)tr[i].adr, 6 );
	  s += QString( " %1 |" ).arg( (int)tr[i].control, 6 );
	  s += QString( " %1 |" ).arg( (int)tr[i].tno, 6 );
	  s += QString( " %1 |" ).arg( (int)tr[i].point, 6, 16 );
	  s += QString( " %1 |" ).arg( (int)tr[i].min, 6 );
	  s += QString( " %1 |" ).arg( (int)tr[i].sec, 6 );
	  s += QString( " %1 |" ).arg( (int)tr[i].frame, 6 );
	  s += QString( " %1 |" ).arg( (int)tr[i].zero, 6, 16 );
	  s += QString( " %1 |" ).arg( (int)tr[i].p_min, 6 );
	  s += QString( " %1 |" ).arg( (int)tr[i].p_sec, 6 );
	  s += QString( " %1 |" ).arg( (int)tr[i].p_frame, 6 );
	  kdDebug() << s << endl;
	}

	//
	// First we try to determine if the raw toc data uses BCD values
	//
	int isBcd = rawTocDataWithBcdValues( data, dataLen );
	if( isBcd == -1 ) {
	  delete [] data;
	  return false;
	}

	K3b::Msf sessionLeadOut;

	for( int i = 0; i < (dataLen-4)/(int)sizeof(toc_raw_track_descriptor); ++i ) {
	  if( tr[i].adr == 1 && tr[i].point <= 0x63 ) {
	    // track
	    K3bTrack track;
	    track.m_session = tr[i].session_number;

	    // :( We use 00:00:00 == 0 lba)
	    if( isBcd )
	      track.m_firstSector = K3b::Msf( K3bDevice::fromBcd(tr[i].p_min),
					      K3bDevice::fromBcd(tr[i].p_sec),
					      K3bDevice::fromBcd(tr[i].p_frame) ) - 150;
	    else
	      track.m_firstSector = K3b::Msf( tr[i].p_min, tr[i].p_sec, tr[i].p_frame ) - 150;

	    track.m_type = ( tr[i].control & 0x4 ? Track::DATA : Track::AUDIO );
	    track.m_mode = ( track.type() == Track::DATA ? getTrackDataMode(track) : Track::UNKNOWN );
	    track.m_copyPermitted = ( tr[i].control & 0x2 );
	    track.m_preEmphasis = ( tr[i].control & 0x1 );

	    //
	    // only do this within a session because otherwise we already set the last sector with the session leadout
	    //
	    if( !toc.isEmpty() )
	      if( toc[toc.count()-1].session() == track.session() )
		toc[toc.count()-1].m_lastSector = track.firstSector() - 1;

	    toc.append(track);
	  }
	  else if( tr[i].point == 0xa2 ) {
	    //
	    // since the session is always reported before the tracks this is where we do this:
	    // set the previous session's last tracks's last sector to the first sector of the
	    // session leadout (which was reported before the tracks)
	    //
	    // This only happens on multisession CDs
	    //
	    if( !toc.isEmpty() )
	      toc[toc.count()-1].m_lastSector = sessionLeadOut - 1;

	    // this is save since the descriptors are reported in ascending order of the session number
	    // :( We use 00:00:00 == 0 lba)
	    if( isBcd )
	      sessionLeadOut = K3b::Msf( K3bDevice::fromBcd(tr[i].p_min),
					 K3bDevice::fromBcd(tr[i].p_sec),
					 K3bDevice::fromBcd(tr[i].p_frame) ) - 150;
	    else
	      sessionLeadOut = K3b::Msf( tr[i].p_min, tr[i].p_sec, tr[i].p_frame ) - 150;
	  }
	}

	// set the last track's last sector
	if( !toc.isEmpty() )
	  toc[toc.count()-1].m_lastSector = sessionLeadOut - 1;
      }
      else
	kdDebug() << "(K3bDevice::Device) " << blockDeviceName() << " empty raw toc." << endl;

      delete [] data;
    }
  }

  if( needToClose )
    close();

  return success;
}


int K3bDevice::Device::rawTocDataWithBcdValues( unsigned char* data, int dataLen ) const
{
  toc_raw_track_descriptor* tr = (toc_raw_track_descriptor*)&data[4];

  bool notBcd = false;
  bool notHex = false;

  //
  // in most cases this will already tell us if a drive does not provide bcd numbers
  // (which should be all newer MMC drives)
  //
  for( int i = 0; i < (dataLen-4)/(int)sizeof(toc_raw_track_descriptor); ++i ) {
    if( tr[i].adr == 1 && tr[i].point <= 0xa2) {
      if( !K3bDevice::isValidBcd(tr[i].p_min) ||
	  !K3bDevice::isValidBcd(tr[i].p_sec) ||
	  !K3bDevice::isValidBcd(tr[i].p_frame) ) {
	notBcd = true;
	break;
      }

      // we only need to check sec and frame since min needs to be <= 99
      // and bcd values are never bigger than 99.
      else if( (int)K3bDevice::fromBcd(tr[i].p_sec) >= 60 ||
	       (int)K3bDevice::fromBcd(tr[i].p_frame) >= 75 ) {
	notBcd = true;
	break;
      }
    }
  }


  //
  // all values are valid bcd values but we still don't know for sure if they are really
  // used as bcd. So we also check the HEX values.
  //
  for( int i = 0; i < (dataLen-4)/(int)sizeof(toc_raw_track_descriptor); ++i ) {
    if( tr[i].adr == 1 && tr[i].point <= 0xa2 ) {
      if( (int)tr[i].p_min > 99 ||
	  (int)tr[i].p_sec >= 60 ||
	  (int)tr[i].p_frame >= 75 ) {
	notHex = true;
	break;
      }
    }
  }
  

  //
  // If all values are valid bcd and valid hex we check the start sectors of the tracks.
  //
  if( !notHex || !notBcd ) {
    K3b::Msf sessionLeadOutHex, sessionLeadOutBcd;
    K3b::Msf lastTrackHex, lastTrackBcd;

    for( int i = 0; i < (dataLen-4)/(int)sizeof(toc_raw_track_descriptor); ++i ) {

      if( tr[i].adr == 1 ) {
	if( tr[i].point < 0x64 ) {
	  
	  // check hex values
	  if( K3b::Msf( tr[i].p_min, tr[i].p_sec, tr[i].p_frame ) <
	      lastTrackHex )
	    notHex = true;
	  
	  // check bcd values
	  if( K3b::Msf( K3bDevice::fromBcd(tr[i].p_min), K3bDevice::fromBcd(tr[i].p_sec), K3bDevice::fromBcd(tr[i].p_frame) ) <
	      lastTrackBcd )
	    notBcd = true;

	  lastTrackBcd = K3b::Msf( K3bDevice::fromBcd(tr[i].p_min), K3bDevice::fromBcd(tr[i].p_sec), K3bDevice::fromBcd(tr[i].p_frame) );
	  lastTrackHex = K3b::Msf( tr[i].p_min, tr[i].p_sec, tr[i].p_frame );
	}
	else if( tr[i].point == 0xa2 ) {
	  if( sessionLeadOutHex < lastTrackHex )
	    notHex = true;
	  if( sessionLeadOutBcd < lastTrackBcd )
	    notBcd = true;

	  sessionLeadOutHex = K3b::Msf( tr[i].p_min, tr[i].p_sec, tr[i].p_frame );
	  sessionLeadOutBcd = K3b::Msf( K3bDevice::fromBcd(tr[i].p_min), K3bDevice::fromBcd(tr[i].p_sec), K3bDevice::fromBcd(tr[i].p_frame) );
	}
      }
    }

    // check the last track
    if( sessionLeadOutHex < lastTrackHex )
      notHex = true;
    if( sessionLeadOutBcd < lastTrackBcd )
      notBcd = true;
  }


  if( !notBcd && !notHex ) {
    kdDebug() << "(K3bDevice::Device) need to compare raw toc to formatted toc. :(" << endl;
    //
    // All values are valid bcd and valid HEX values so we compare with the formatted toc.
    // This slows us down a lot but in most cases this should not be reached anyway.
    //
    // TODO: also check the bcd values
    //
    K3bDevice::Toc formattedToc;
    if( readFormattedToc( formattedToc, false ) ) {
      for( int i = 0; i < (dataLen-4)/(int)sizeof(toc_raw_track_descriptor); ++i ) {
	if( tr[i].adr == 1 && tr[i].point < 0x64 ) {
	  unsigned int track = (int)tr[i].point;

	  // FIXME: do bcd drive also encode the track number in bcd? If so test it, too.

	  if( track > formattedToc.count() ) {
	    notHex = true;
	    break;
	  }

	  K3b::Msf posHex( tr[i].p_min,
			   tr[i].p_sec,
			   tr[i].p_frame );
	  K3b::Msf posBcd( K3bDevice::fromBcd(tr[i].p_min), 
			   K3bDevice::fromBcd(tr[i].p_sec), 
			   K3bDevice::fromBcd(tr[i].p_frame) );
	  posHex -= 150;
	  posBcd -= 150;
	  if( posHex != formattedToc[track-1].firstSector() )
	    notHex = true;
	  if( posBcd != formattedToc[track-1].firstSector() )
	    notBcd = true;
	}
      }
    }
  }

  if( notBcd )
    kdDebug() << "(K3bDevice::Device) found invalid bcd values. No bcd toc." << endl;
  if( notHex )
    kdDebug() << "(K3bDevice::Device) found invalid hex values. No hex toc." << endl;

  if( notBcd == notHex ) {
    kdDebug() << "(K3bDevice::Device) unable to determine if hex or bcd." << endl;
    return -1;
  }
  else if( notBcd )
    return 0;
  else
    return 1;
}


K3bDevice::CdText K3bDevice::Device::readCdText() const
{
  // if the device is already opened we do not close it
  // to allow fast multible method calls in a row
  bool needToClose = !isOpen();

  K3bDevice::CdText textData;

  if( open() != -1 ) {
    unsigned char* data = 0;
    int dataLen = 0;

    if( readTocPmaAtip( &data, dataLen, 5, false, 0 ) ) {
      textData.setRawPackData( data, dataLen );

      delete [] data;
    }

    if( needToClose )
      close();
  }

  return textData;
}


#ifdef Q_OS_LINUX
// fallback
bool K3bDevice::Device::readTocLinux( K3bDevice::Toc& toc ) const
{
  // if the device is already opened we do not close it
  // to allow fast multible method calls in a row
  bool needToClose = !isOpen();

  bool success = true;

  toc.clear();

  struct cdrom_tochdr tochdr;
  struct cdrom_tocentry tocentry;

  if (open() != -1) {
    //
    // CDROMREADTOCHDR ioctl returns:
    // cdth_trk0: First Track Number
    // cdth_trk1: Last Track Number
    //
    if( ::ioctl(d->deviceFd,CDROMREADTOCHDR,&tochdr) ) {
      kdDebug() << "(K3bDevice::Device) could not get toc header !" << endl;
      success = false;
    }
    else {
      Track lastTrack;
      for (int i = tochdr.cdth_trk0; i <= tochdr.cdth_trk1 + 1; i++) {
        ::memset(&tocentry,0,sizeof (struct cdrom_tocentry));
        // get Lead-Out Information too
        tocentry.cdte_track = (i<=tochdr.cdth_trk1) ? i : CDROM_LEADOUT;
        tocentry.cdte_format = CDROM_LBA;
        //
        // CDROMREADTOCENTRY ioctl returns:
        // cdte_addr.lba: Start Sector Number (LBA Format requested)
        // cdte_ctrl:     4 ctrl bits
        //                   00x0b: 2 audio Channels(no pre-emphasis)
        //                   00x1b: 2 audio Channels(pre-emphasis)
        //                   10x0b: audio Channels(no pre-emphasis),reserved in cd-rw
        //                   10x1b: audio Channels(pre-emphasis),reserved in cd-rw
        //                   01x0b: data track, recorded uninterrupted
        //                   01x1b: data track, recorded incremental
        //                   11xxb: reserved
        //                   xx0xb: digital copy prohibited
        //                   xx1xb: digital copy permitted
        // cdte_addr:     4 addr bits (type of Q-Subchannel data)
        //                   0000b: no Information
        //                   0001b: current position data
        //                   0010b: MCN
        //                   0011b: ISRC
        //                   0100b-1111b:  reserved
        // cdte_datamode:  0: Data Mode1
        //                 1: CD-I
        //                 2: CD-XA Mode2
        //

        if( ::ioctl(d->deviceFd,CDROMREADTOCENTRY,&tocentry) ) {
          kdDebug() << "(K3bDevice::Device) error reading tocentry " << i << endl;
	  success = false;
	  break;
	}

        int startSec = tocentry.cdte_addr.lba;
        int control  = tocentry.cdte_ctrl & 0x0f;
        int mode     = tocentry.cdte_datamode;
        if( i > tochdr.cdth_trk0 ) {
	  Track track( lastTrack.firstSector(), startSec-1, lastTrack.type(), lastTrack.mode() );
	  track.m_preEmphasis = control & 0x1;
	  track.m_copyPermitted = control & 0x2;
          toc.append( track );
        }
        int trackType = 0;
        int trackMode = Track::UNKNOWN;
        if( (control & 0x04 ) && (tocentry.cdte_track != CDROM_LEADOUT) ) {
          trackType = Track::DATA;
          if( mode == 1 )
            trackMode = Track::MODE1;
          else if( mode == 2 )
            trackMode = Track::MODE2;

          mode = getDataMode(startSec);
          if( mode != Track::UNKNOWN )
            trackMode = mode;
        }
	else
          trackType = Track::AUDIO;

        lastTrack = Track( startSec, startSec, trackType, trackMode );
      }
    }

    if( needToClose )
      close();
  }
  else
    success = false;

  return success;
}
#endif // Q_OS_LINUX


bool K3bDevice::Device::fixupToc( K3bDevice::Toc& toc ) const
{
  bool success = false;

  //
  // This is a very lame method of fixing the TOC of an Advanced Audio CD
  // (a CD with two sessions: one with audio tracks and one with the data track)
  // If a drive does not support reading raw toc or reading track info we only
  // get every track's first sector. But between sessions there is a gap which is used
  // for ms stuff. In this case it's 11400 sectors in size. When ripping ausio we would
  // include these 11400 sectors which would result in a strange ending audio file.
  //
  if( numSessions() > 1 || toc.contentType() == MIXED ) {
    kdDebug() << "(K3bDevice::Device) fixup multisession toc..." << endl;

    //
    // we need to update the last sector of every last track in every session
    // for now we only update the track before the last session...
    // This is the most often case: Advanced Audio CD
    //

    unsigned char* data = 0;
    int dataLen = 0;
    if( readTocPmaAtip( &data, dataLen, 1, false, 0 ) ) {

      //
      // data[6]    - first track number in last complete session
      // data[8-11] - start adress of first track in last session
      //

      toc[(unsigned int)data[6]-2].m_lastSector = from4Byte( &data[8] ) - 11400 - 1;

      delete [] data;
      success = true;
    }
    else
      kdDebug() << "(K3bDevice::Device) FIXUP TOC failed." << endl;
  }

  return success;
}


bool K3bDevice::Device::block( bool b ) const
{
  ScsiCommand cmd( this );
  cmd[0] = MMC_PREVENT_ALLOW_MEDIUM_REMOVAL;
  cmd[4] = b ? 0x1 : 0x0;
  int r = cmd.transport();

  if( r )
    kdDebug() << "(K3bDevice::Device) MMC ALLOW MEDIA REMOVAL failed." << endl;

  return ( r == 0 );
}

bool K3bDevice::Device::rewritable() const
{
  unsigned char* data = 0;
  int dataLen = 0;

  if( readDiscInfo( &data, dataLen ) ) {
    disc_info_t* inf = (disc_info_t*)data;
    bool e = inf->erasable;

    delete [] data;

    return e;
  }
  else
    return false;
}

bool K3bDevice::Device::eject() const
{
  block(false);

  ScsiCommand cmd( this );
  cmd[0] = MMC_START_STOP_UNIT;

  // Since all other eject methods I saw also start the unit before ejecting
  // we do it also although I don't know why...
  cmd[4] = 0x1;      // Start unit
  cmd.transport();

  cmd[4] = 0x2;    // LoEj = 1, Start = 0

  return !cmd.transport();
}


bool K3bDevice::Device::load() const
{
  ScsiCommand cmd( this );
  cmd[0] = MMC_START_STOP_UNIT;
  cmd[4] = 0x3;    // LoEj = 1, Start = 1
  return !cmd.transport();
}


void K3bDevice::Device::addDeviceNode( const QString& n )
{
  if( !d->allNodes.contains( n ) )
    d->allNodes.append( n );
}


const QStringList& K3bDevice::Device::deviceNodes() const
{
  return d->allNodes;
}


bool K3bDevice::Device::supportsWriteMode( WriteMode w )
{
  return (m_writeModes & w);
}


int K3bDevice::Device::open() const
{
#ifdef Q_OS_FREEBSD
    d->cam = cam_open_pass (m_passDevice.latin1(),O_RDWR,0 /* NULL */);
    kdDebug() << "(K3bDevice::openDevice) open device " << m_passDevice
	      << ((d->cam)?" succeeded.":" failed.") << endl;
    return (d->cam ? 0 : -1);
#endif
#ifdef Q_OS_LINUX
  if( d->deviceFd == -1 )
    d->deviceFd = openDevice( QFile::encodeName(devicename()) );

  return d->deviceFd;
#endif
}


void K3bDevice::Device::close() const
{
#ifdef Q_OS_FREEBSD
  if (d->cam)
  {
    cam_close_device(d->cam);
    d->cam = 0;
  }
#endif
#ifdef Q_OS_LINUX
  if( d->deviceFd != -1 ) {
    ::close( d->deviceFd );
    d->deviceFd = -1;
  }
#endif
}


bool K3bDevice::Device::isOpen() const
{
#ifdef Q_OS_FREEBSD
  return d->cam;
#endif
#ifdef Q_OS_LINUX
  return ( d->deviceFd != -1 );
#endif
}


int K3bDevice::Device::supportedProfiles() const
{
  return d->supportedProfiles;
}


int K3bDevice::Device::currentProfile() const
{
  unsigned char profileBuf[8];
  ::memset( profileBuf, 0, 8 );

  ScsiCommand cmd( this );
  cmd[0] = MMC_GET_CONFIGURATION;
  cmd[1] = 1;
  cmd[8] = 8;

  if( cmd.transport( TR_DIR_READ, profileBuf, 8 ) ) {
    kdDebug() << "(K3bDevice::Device) GET_CONFIGURATION failed." << endl;

    return MEDIA_UNKNOWN;
  }
  else {
    short profile = from2Byte( &profileBuf[6] );
    switch (profile) {
    case 0x00: return MEDIA_NONE;
    case 0x10: return MEDIA_DVD_ROM;
    case 0x11: return MEDIA_DVD_R_SEQ;
    case 0x12: return MEDIA_DVD_RAM;
    case 0x13: return MEDIA_DVD_RW_OVWR;
    case 0x14: return MEDIA_DVD_RW_SEQ;
    case 0x1A: return MEDIA_DVD_PLUS_RW;
    case 0x1B: return MEDIA_DVD_PLUS_R;
    case 0x2B: return MEDIA_DVD_PLUS_R_DL;
    case 0x08: return MEDIA_CD_ROM;
    case 0x09: return MEDIA_CD_R;
    case 0x0A: return MEDIA_CD_RW;
    default: return MEDIA_UNKNOWN;
    }
  }
}


K3bDevice::DiskInfo K3bDevice::Device::diskInfo() const
{
  DiskInfo inf;
  inf.m_diskState = STATE_UNKNOWN;

  // if the device is already opened we do not close it
  // to allow fast multible method calls in a row
  bool needToClose = !isOpen();

  if( open() != -1 ) {

    unsigned char* data = 0;
    int dataLen = 0;

    //
    // Set writing mode to TAO.
    // In RAW writing mode we do not get the values we want.
    //
    if( modeSense( &data, dataLen, 0x05 ) ) {
      wr_param_page_05* mp = (struct wr_param_page_05*)(data+8);

      // reset some stuff to be on the safe side
      mp->PS = 0;
      mp->BUFE = 0;
      mp->multi_session = 0;
      mp->test_write = 0;
      mp->LS_V = 0;
      mp->copy = 0;
      mp->fp = 0;
      mp->host_appl_code= 0;
      mp->session_format = 0;
      mp->audio_pause_len[0] = 0;
      mp->audio_pause_len[1] = 150;

      mp->write_type = 0x01;  // TAO
      mp->track_mode = 4;     // MMC-4 says: 5, cdrecord uses 4 ???
      mp->dbtype = 8;         // Mode 1

      if( !modeSelect( data, dataLen, 1, 0 ) ) {
	kdDebug() << "(K3bDevice::Device) " << blockDeviceName()
		  << ": modeSelect 0x05 failed!" << endl;
      }

      delete [] data;
    }
    else
      kdDebug() << "(K3bDevice::Device) " << blockDeviceName()
		<< ": modeSense 0x05 failed!" << endl;


    //
    // The first thing to do should be: checking if a media is loaded
    // We do this with requesting the current profile. If it is 0 no media
    // should be loaded. On an error we just go on.
    //
    if( !isReady() ) {
      // no disk or tray open
      inf.m_diskState = STATE_NO_MEDIA;
      inf.m_mediaType = MEDIA_NONE;
    }
    else {
      int profile = currentProfile();
      if( profile == MEDIA_NONE ) {
	inf.m_diskState = STATE_NO_MEDIA;
	inf.m_mediaType = MEDIA_NONE;
      }
      inf.m_currentProfile = profile;
    }

    if( inf.diskState() != STATE_NO_MEDIA ) {

      if( readDiscInfo( &data, dataLen ) ) {
	disc_info_t* dInf = (disc_info_t*)data;
	//
	// Copy the needed values from the disk_info struct
	//
	switch( dInf->status ) {
	case 0:
	  inf.m_diskState = STATE_EMPTY;
	  break;
	case 1:
	  inf.m_diskState = STATE_INCOMPLETE;
	  break;
	case 2:
	  inf.m_diskState = STATE_COMPLETE;
	  break;
	default:
	  inf.m_diskState = STATE_UNKNOWN;
	  break;
	}

	switch( dInf->border ) {
	case 0x00:
	  inf.m_lastSessionState = STATE_EMPTY;
	  break;
	case 0x01:
	  inf.m_lastSessionState = STATE_INCOMPLETE;
	  break;
	case 0x11:
	  inf.m_lastSessionState = STATE_COMPLETE;
	  break;
	default:
	  inf.m_lastSessionState = STATE_UNKNOWN;
	  break;
	}

	inf.m_bgFormatState = dInf->bg_f_status&0x3;

	inf.m_numTracks = (dInf->last_track_l & 0xff) | (dInf->last_track_m<<8 & 0xff00);
	if( inf.diskState() == STATE_EMPTY )
	  inf.m_numTracks = 0;
	else if( inf.diskState() == STATE_INCOMPLETE )
	  inf.m_numTracks--;  // do not count the invisible track

	inf.m_rewritable = dInf->erasable;

	//
	// This is the Last Possible Lead-Out Start Adress in HMSF format
	// This is only valid for CD-R(W) and DVD+R media.
	// For complete media this shall be filled with 0xff
	//
	if( dInf->lead_out_m != 0xff &&
	    dInf->lead_out_r != 0xff &&
	    dInf->lead_out_s != 0xff &&
	    dInf->lead_out_f != 0xff )
	  inf.m_capacity = K3b::Msf( dInf->lead_out_m + dInf->lead_out_r*60,
				     dInf->lead_out_s,
				     dInf->lead_out_f ) - 150;

	//
	// This is the position where the next Session shall be recorded in HMSF format
	// This is only valid for CD-R(W) and DVD+R media.
	// For complete media this shall be filled with 0xff
	//
	if( dInf->lead_in_m != 0xff &&
	    dInf->lead_in_r != 0xff &&
	    dInf->lead_in_s != 0xff &&
	    dInf->lead_in_f != 0xff )
	  inf.m_usedCapacity = K3b::Msf( dInf->lead_in_m + dInf->lead_in_r*60,
					 dInf->lead_in_s,
					 dInf->lead_in_f ) - 4500;

	delete [] data;
      }



      //
      // The mediatype needs to be set
      //
      inf.m_mediaType = dvdMediaType();

      if( inf.m_mediaType == MEDIA_UNKNOWN ) {
	// probably it is a CD
	if( inf.rewritable() )
	  inf.m_mediaType = MEDIA_CD_RW;
	else if( inf.empty() || inf.appendable() )
	  inf.m_mediaType = MEDIA_CD_R;
	else
	  inf.m_mediaType = MEDIA_CD_ROM;
      }
      else {
	unsigned char* dvdheader = 0;
	int dataLen = 0;
	if( readDvdStructure( &dvdheader, dataLen ) ) {
	  // some debugging stuff
	  K3b::Msf sda, eda, ea0;
	  sda = ( dvdheader[4+5]<<16 | dvdheader[4+6] << 8 | dvdheader[4+7] );
	  eda = ( dvdheader[4+9]<<16 | dvdheader[4+10] << 8 | dvdheader[4+11] );
	  ea0 = ( dvdheader[4+13]<<16 | dvdheader[4+14] << 8 | dvdheader[4+15] );

	  kdDebug() << "First sec data area: " << sda.toString()
		    << " (LBA " << QString::number(sda.lba())
		    << ") (" << QString::number(sda.mode1Bytes()) << " Bytes) ("
		    << KIO::convertSize(sda.mode1Bytes()) << ")" << endl;
	  kdDebug() << "Last sec data area: " << eda.toString()
		    << " (LBA " << QString::number(eda.lba())
		    << ") (" << QString::number(eda.mode1Bytes()) << " Bytes) ("
		    << KIO::convertSize(eda.mode1Bytes()) << ")" << endl;
	  kdDebug() << "Last sec layer 1: " << ea0.toString()
		    << " (LBA " << QString::number(ea0.lba())
		    << ") (" << QString::number(ea0.mode1Bytes()) << " Bytes) ("
		    << KIO::convertSize(ea0.mode1Bytes()) << ")" << endl;


	  K3b::Msf da0 = ea0 - sda + 1;
	  K3b::Msf da1 = eda - ea0;
	  kdDebug() << "Layer 1 length: " << da0.toString()
		    << " (LBA " << QString::number(da0.lba())
		    << ") (" << QString::number(da0.mode1Bytes()) << " Bytes) ("
		    << KIO::convertSize(da0.mode1Bytes()) << ")" << endl;
	  kdDebug() << "Layer 2 length: " << da1.toString()
		    << " (LBA " << QString::number(da1.lba())
		    << ") (" << QString::number(da1.mode1Bytes()) << " Bytes) ("
		    << KIO::convertSize(da1.mode1Bytes()) << ")" << endl;

	  inf.m_numLayers = ((dvdheader[6]&0x60) == 0 ? 1 : 2);
	  inf.m_firstLayerSize = da0;

	  delete [] dvdheader;
	}
	else {
	  kdDebug() << "(K3bDevice::Device) Unable to read DVD structure for num of layers." << endl;
	  inf.m_numLayers = ( inf.m_mediaType == MEDIA_DVD_PLUS_R_DL ? 2 : 1 );
	}
      }


      //
      // Number of sessions for non-empty disks
      //
      if( inf.diskState() != STATE_EMPTY ) {
	int sessions = numSessions();
	if( sessions >= 0 )
	  inf.m_numSessions = sessions;
	else
	  kdDebug() << "(K3bDevice::Device) could not get session info via READ TOC/PMA/ATIP." << endl;
      }
      else
	inf.m_numSessions = 0;


      //
      // Now we determine the size:

      // for all empty and appendable media READ FORMAT CAPACITIES should return the proper unformatted size
      // for complete disks we may use the READ_CAPACITY command or the start sector from the leadout
      //
      int media = inf.mediaType();
      //
      // Use the profile if available because DVD-ROM units need to treat DVD+-R(W) media as DVD-ROM
      // if supported at all
      //
      if( inf.currentProfile() == MEDIA_DVD_ROM )
	media = MEDIA_DVD_ROM;

      switch( media ) {
      case MEDIA_CD_R:
      case MEDIA_CD_RW:
	//
	// for empty and appendable media capacity and usedCapacity should be filled in from
	// diskinfo above. If not they are both still 0
	//
	if( inf.m_capacity != 0 &&
	    ( inf.diskState() == STATE_EMPTY || inf.m_usedCapacity != 0 ) ) {
	  // done.
	  break;
	}

      default:
      case MEDIA_CD_ROM:
	if( inf.m_capacity > 0 && inf.m_usedCapacity == 0 )
	  inf.m_usedCapacity = inf.m_capacity;

	if( inf.m_usedCapacity == 0 ) {
	  K3b::Msf readCap;
	  if( readCapacity( readCap ) ) {
	    kdDebug() << "(K3bDevice::Device) READ CAPACITY: " << readCap.toString()
		      << " other capacity: " << inf.m_capacity.toString() << endl;
	    //
	    // READ CAPACITY returns the last written sector
	    // that means the size is actually readCap + 1
	    //
	    inf.m_usedCapacity = readCap + 1;
	  }
	  else {
	    kdDebug() << "(K3bDevice::Device) " << blockDeviceName()
		      << " Falling back to readToc for capacity." << endl;
	    inf.m_usedCapacity = readToc().length();
	  }
	}

      case MEDIA_DVD_ROM: {
	K3b::Msf readCap;
	if( readCapacity( readCap ) ) {
	  kdDebug() << "(K3bDevice::Device) READ CAPACITY: " << readCap.toString()
		    << " other capacity: " << inf.m_capacity.toString() << endl;
	  //
	  // READ CAPACITY returns the last written sector
	  // that means the size is actually readCap + 1
	  //
	  inf.m_usedCapacity = readCap + 1;
	}
	else {
	  //
	  // Only one track, use it's size
	  //
	  if( readTrackInformation( &data, dataLen, 0x1, 0x1 ) ) {
	    track_info_t* trackInfo = (track_info_t*)data;
	    inf.m_usedCapacity = from4Byte( trackInfo->track_size );
	    delete [] data;
	  }
	  else
	    kdDebug() << "(K3bDevice::Device) " << blockDeviceName()
		      << "READ TRACK INFORMATION for DVD-ROM failed." << endl;
	}

	break;
      }

      case MEDIA_DVD_PLUS_R:
      case MEDIA_DVD_PLUS_R_DL:
	if( inf.appendable() || inf.empty() ) {
	  //
	  // get remaining space via the invisible track
	  //
	  if( readTrackInformation( &data, dataLen, 0x1, 0xff ) ) {
	    track_info_t* trackInfo = (track_info_t*)data;
	    inf.m_usedCapacity = from4Byte( trackInfo->track_start );
	    inf.m_capacity = from4Byte( trackInfo->track_start ) + from4Byte( trackInfo->track_size );
	    delete [] data;
	  }
	}
	else {
	  if( readTrackInformation( &data, dataLen, 0x1, inf.numTracks() ) ) {
	    track_info_t* trackInfo = (track_info_t*)data;
	    inf.m_capacity = inf.m_usedCapacity
	      = from4Byte( trackInfo->track_start ) + from4Byte( trackInfo->track_size );
	    delete [] data;
	  }
	}
	break;

      case MEDIA_DVD_R:
      case MEDIA_DVD_R_SEQ:
	//
	// get data from the incomplete track (which is NOT the invisible track 0xff)
	// This will fail in case the media is complete!
	//
	if( readTrackInformation( &data, dataLen, 0x1, inf.numTracks()+1 ) ) {
	  track_info_t* trackInfo = (track_info_t*)data;
	  inf.m_usedCapacity = from4Byte( trackInfo->track_start );
	  inf.m_capacity = from4Byte( trackInfo->free_blocks ) + from4Byte( trackInfo->track_start );
	  delete [] data;
	}

	//
	// Get the "really" used space without border-out
	//
	if( !inf.empty() ) {
	  K3b::Msf readCap;
	  if( readCapacity( readCap ) ) {
	    //
	    // READ CAPACITY returns the last written sector
	    // that means the size is actually readCap + 1
	    //
	    inf.m_usedCapacity = readCap + 1;
	  }
	  else
	    kdDebug() << "(K3bDevice::Device) " << blockDeviceName()
		      << " READ CAPACITY for DVD-R failed." << endl;
	}

	break;

      case MEDIA_DVD_RW:
      case MEDIA_DVD_RW_SEQ:
	// only one track on a DVD-RW media
	if( readTrackInformation( &data, dataLen, 0x1, 0x1 ) ) {
	  track_info_t* trackInfo = (track_info_t*)data;
	  if( inf.empty() )
	    inf.m_capacity = from4Byte( trackInfo->track_size );
	  else
	    inf.m_usedCapacity = from4Byte( trackInfo->track_size );
	  delete [] data;
	}
	break;

      case MEDIA_DVD_PLUS_RW: {
	K3b::Msf currentMax;
	int currentMaxFormat = 0;
	if( readFormatCapacity( 0x26, inf.m_capacity, &currentMax, &currentMaxFormat ) ) {
	  if( inf.bgFormatState() != BG_FORMAT_NONE )
	    inf.m_usedCapacity = currentMax;
	  else
	    inf.m_usedCapacity = 0;
       	}
	else
	  kdDebug() << "(K3bDevice::Device) " << blockDeviceName()
		    << " READ FORMAT CAPACITIES for DVD+RW failed." << endl;

	break;
      }

      case MEDIA_DVD_RW_OVWR:
	inf.m_numSessions = 1;
	if( readTrackInformation( &data, dataLen, 0x1, 0x1 ) ) {
	  track_info_t* trackInfo = (track_info_t*)data;
	  inf.m_usedCapacity = inf.m_capacity = from4Byte( trackInfo->track_size );
	  delete [] data;
	}
	break;
      }



// 	  // read next writable adress
// 	  if( readTrackInformation( &data, dataLen, 0x1, 0xff ) ) {
// 	    track_info_t* trackInfo = (track_info_t*)data;
// 	    if( trackInfo->nwa_v ) {
// 	      K3b::Msf nwa = from4Byte( trackInfo->next_writable );
// 	      kdDebug() << "(K3bDevice::Device) Next writale adress valid: " << nwa.toString() << endl;
// 	      inf.m_remaining = inf.m_capacity - nwa - 150;  // reserve space for pre-gap after lead-in (??)
// 	    }
// 	    else {
// 	      kdDebug() << "(K3bDevice::Device) Next writale adress invalid." << endl;
// 	    }

// 	    delete [] data;
// 	  }
// 	}
//       }
//       else {
// 	K3b::Msf readCap;
// 	if( readCapacity( readCap ) ) {
// 	  kdDebug() << "(K3bDevice::Device) READ CAPACITY: " << readCap.toString()
// 		    << " other capacity: " << inf.m_capacity.toString() << endl;

// 	  //
// 	  // READ CAPACITY returns the last written sector
// 	  // that means the size is actually readCap + 1
// 	  //
// 	  inf.m_capacity = readCap + 1;
// 	}
// 	else {
// 	  kdDebug() << "(K3bDevice::Device) READ CAPACITY failed. Falling back to READ TRACK INFO." << endl;

// 	  if( readTrackInformation( &data, dataLen, 0x1, 0xff ) ) {
// 	    track_info_t* trackInfo = (track_info_t*)data;
// 	    inf.m_capacity = from4Byte( trackInfo->track_start );

// 	    delete [] data;
// 	  }
// 	  else {
// 	    kdDebug() << "(K3bDevice::Device) Falling back to readToc." << endl;
// 	    inf.m_capacity = readToc().length();
// 	  }
// 	}
//       }
    }

    if( needToClose )
      close();
  }

  return inf;
}


int K3bDevice::Device::cdMediaType() const
{
  int m = MEDIA_UNKNOWN;

  unsigned char* data = 0;
  int dataLen = 0;
  if( readTocPmaAtip( &data, dataLen, 4, false, 0 ) ) {
    if( (data[6]>>6)&1 )
      m = MEDIA_CD_RW;
    else
      m = MEDIA_CD_R;

    delete [] data;
  }
  else
    m = MEDIA_CD_ROM;

  return m;
}


int K3bDevice::Device::dvdMediaType() const
{
  int m = MEDIA_UNKNOWN;

  if( readsDvd() ) {
    m = currentProfile();
    if( !(m & (MEDIA_WRITABLE_DVD|MEDIA_DVD_ROM)) )
      m = MEDIA_UNKNOWN;  // no profile information or CD media

    if( m & (MEDIA_UNKNOWN|MEDIA_DVD_ROM) ) {
      //
      // We prefere the mediatype as reported by the media since this way
      // even ROM drives may report the correct type of writable media.
      //

      // 4 bytes header + 2048 bytes layer descriptor
      unsigned char* data = 0;
      int dataLen = 0;
      if( readDvdStructure( &data, dataLen ) ) {
	switch( data[4]&0xF0 ) {
	case 0x00: m = MEDIA_DVD_ROM; break;
	case 0x10: m = MEDIA_DVD_RAM; break;
	case 0x20: m = MEDIA_DVD_R; break;
	case 0x30: m = MEDIA_DVD_RW; break;
	case 0x90: m = MEDIA_DVD_PLUS_RW; break;
	case 0xA0: m = MEDIA_DVD_PLUS_R; break;
	case 0xE0: m = MEDIA_DVD_PLUS_R_DL; break;
	default: break; // unknown
	}

	delete [] data;
      }
    }
  }

  return m;
}


bool K3bDevice::Device::readSectorsRaw(unsigned char *buf, int start, int count) const
{
  return readCd( buf, count*2352,
		 0,      // all sector types
		 false,  // no dap
		 start,
		 count,
		 true, // SYNC
		 true, // HEADER
		 true, // SUBHEADER
		 true, // USER DATA
		 true, // EDC/ECC
		 0,    // no c2 info
		 0 );
}


void K3bDevice::Device::checkWriteModes()
{
  // if the device is already opened we do not close it
  // to allow fast multible method calls in a row
  bool needToClose = !isOpen();

  if( open() < 0 )
    return;

  // header size is 8
  unsigned char* buffer = 0;
  int dataLen = 0;

  if( !modeSense( &buffer, dataLen, 0x05 ) ) {
    kdDebug() << "(K3bDevice::Device) " << blockDeviceName() << ": modeSense 0x05 failed!" << endl
	      << "(K3bDevice::Device) " << blockDeviceName() << ": Cannot check write modes." << endl;
  }
  else if( dataLen < 18 ) { // 8 bytes header + 10 bytes used modepage
    kdDebug() << "(K3bDevice::Device) " << blockDeviceName() << ": Missing modepage 0x05 data." << endl
	      << "(K3bDevice::Device) " << blockDeviceName() << ": Cannot check write modes." << endl;
  }
  else {
    kdDebug() << "(K3bDevice::Device) " << blockDeviceName() << ": dataLen: " << dataLen << endl;

    wr_param_page_05* mp = (struct wr_param_page_05*)(buffer+8);

    // reset some stuff to be on the safe side
    mp->PS = 0;
    mp->BUFE = 0;
    mp->multi_session = 0;
    mp->test_write = 0;
    mp->LS_V = 0;
    mp->copy = 0;
    mp->fp = 0;
    mp->host_appl_code= 0;
    mp->session_format = 0;
    mp->audio_pause_len[0] = 0;
    mp->audio_pause_len[1] = 150;

    m_writeModes = 0;

    // TAO
    mp->write_type = 0x01;  // Track-at-once
    mp->track_mode = 4;     // MMC-4 says: 5, cdrecord uses 4 ???
    mp->dbtype = 8;         // Mode 1

    //    kdDebug() << "(K3bDevice::Device) " << blockDeviceName() << ": modeselect TAO data: " << endl;
    //    debugBitfield( buffer, dataLen );


    //
    // if a writer does not support TAO it surely does not support SAO or RAW writing since TAO is the minimal
    // requirement
    //

    if( modeSelect( buffer, dataLen, 1, 0 ) ) {
      m_writeModes |= TAO;
      d->deviceType |= CDR;

      // SAO
      mp->write_type = 0x02; // Session-at-once

      if( modeSelect( buffer, dataLen, 1, 0 ) )
	m_writeModes |= SAO;

      // RAW
      mp->write_type = 0x03; // RAW
      mp->dbtype = 1;        // Raw data with P and Q Sub-channel (2368 bytes)
      if( modeSelect( buffer, dataLen, 1, 0 ) ) {
	m_writeModes |= RAW;
	m_writeModes |= RAW_R16;
      }

      mp->dbtype = 2;        // Raw data with P-W Sub-channel (2448 bytes)
      if( modeSelect( buffer, dataLen, 1, 0 ) ) {
	m_writeModes |= RAW;
	m_writeModes |= RAW_R96P;
      }

      mp->dbtype = 3;        // Raw data with P-W raw Sub-channel (2368 bytes)
      if( modeSelect( buffer, dataLen, 1, 0 ) ) {
	m_writeModes |= RAW;
	m_writeModes |= RAW_R96R;
      }
    }
    else {
      kdDebug() << "(K3bDevice::Device) " << blockDeviceName() << ": modeSelect with TAO failed. No writer" << endl;
    }


    delete [] buffer;
  }

  if( needToClose )
    close();
}


int K3bDevice::Device::determineMaximalWriteSpeed() const
{
  int ret = 0;

  QValueList<int> list = determineSupportedWriteSpeeds();
  for( QValueList<int>::iterator it = list.begin(); it != list.end(); ++it )
    ret = QMAX( ret, *it );

  if( ret > 0 )
    return ret;
  else
    return m_maxWriteSpeed;
}


QValueList<int> K3bDevice::Device::determineSupportedWriteSpeeds() const
{
  QValueList<int> ret;

  if( burner() ) {
    unsigned char* data = 0;
    int dataLen = 0;
    bool dvd = isDVD();

    //
    // First we try the 2A mode page
    //
    if( modeSense( &data, dataLen, 0x2A ) ) {
      mm_cap_page_2A* mm = (mm_cap_page_2A*)&data[8];

      if( dataLen > 32 ) {
	// we have descriptors
	int numDesc = from2Byte( mm->num_wr_speed_des );

	// Some CDs writer returns the number of bytes that contain
	// the descriptors rather than the number of descriptors
	// Ensure number of descriptors claimed actually fits in the data
	// returned by the mode sense command.
	if( numDesc > ((dataLen - 32 - 8) / 4) )
	  numDesc = (dataLen - 32 - 8) / 4;

	cd_wr_speed_performance* wr = (cd_wr_speed_performance*)mm->wr_speed_des;

	kdDebug() << "(K3bDevice::Device) " << blockDeviceName()
		  << ":  Number of supported write speeds via 2A: "
		  << numDesc << endl;


	for( int i = 0; i < numDesc; ++i ) {
	  int s = from2Byte( wr[i].wr_speed_supp );
	  //
	  // some DVD writers report CD writing speeds here
	  // If that is the case we cannot rely on the reported speeds
	  // and need to use the values gained from GET PERFORMANCE.
	  //
	  if( dvd && s < 1352 ) {
	    kdDebug() << "(K3bDevice::Device) " << blockDeviceName()
		      << " Invalid DVD speed: " << s << " KB/s" << endl;
	    ret.clear();
	    break;
	  }
	  else {
	    kdDebug() << "(K3bDevice::Device) " << blockDeviceName()
		      << " : " << s << " KB/s" << endl;

	    if( dvd )
	      s = fixupDvdWritingSpeed( s );

	    // sort the list
	    QValueList<int>::iterator it = ret.begin();
	    while( it != ret.end() && *it < s )
	      ++it;
	    ret.insert( it, s );
	  }
	}
      }
      else if( dataLen > 19 ) {
	// MMC1 used byte 18 and 19 for the max write speed
	ret.append( from2Byte( mm->max_write_speed ) );
      }

      delete [] data;
    }

    if( getPerformance( &data, dataLen, 0x3, 0x0 ) ) {
      int numDesc = (dataLen-8)/16;
      kdDebug() << "(K3bDevice::Device) " << blockDeviceName()
		<< ":  Number of supported write speeds via GET PERFORMANCE: "
		<< numDesc << endl;

      for( int i = 0; i < numDesc; ++i ) {
	int s = from4Byte( &data[20+i*16] );
	if( dvd && s < 1352 ) {
	  //
	  // Does this ever happen?
	  //
	  kdDebug() << "(K3bDevice::Device) " << blockDeviceName()
		    << " Invalid DVD speed: " << s << " KB/s" << endl;
	}
	else {
	  kdDebug() << "(K3bDevice::Device) " << blockDeviceName()
		      << " : " << s << " KB/s" << endl;

	  if( dvd )
	    s = fixupDvdWritingSpeed( s );

	  QValueList<int>::iterator it = ret.begin();
	  while( it != ret.end() && *it < s )
	    ++it;
	  // the speed might already have been found in the 2a modepage
	  if( it == ret.end() || *it != s )
	    ret.insert( it, s );
	}
      }

      delete [] data;
    }
  }

  return ret;
}


int K3bDevice::Device::getIndex( unsigned long lba ) const
{
  // if the device is already opened we do not close it
  // to allow fast multible method calls in a row
  bool needToClose = !isOpen();

  if( open() < 0 )
    return -1;

  int ret = -1;

  //
  // first try readCd
  //
  unsigned char readData[16];
  ::memset( readData, 0, 16 );

  //
  // The index is found in the Mode-1 Q which occupies at least 9 out of 10 successive CD frames
  // It can be indentified by ADR == 1
  //
  // So if the current sector does not provide Mode-1 Q subchannel we try the previous.
  //

  if( readCd( readData,
	      16,
	      1, // CD-DA
	      0, // no DAP
	      lba,
	      1,
	      false,
	      false,
	      false,
	      false,
	      false,
	      0,
	      2 // Q-Subchannel
	      ) ) {
    // byte 0: 4 bits CONTROL (MSB) + 4 bits ADR (LSB)
    if( (readData[0]&0x0f) == 0x1 )
      ret = readData[2];

    // search previous sector for Mode1 Q Subchannel
    else if( readCd( readData,
	      16,
	      1, // CD-DA
	      0, // no DAP
	      lba-1,
	      1,
	      false,
	      false,
	      false,
	      false,
	      false,
	      0,
	      2 // Q-Subchannel
	      ) ) {
      if( (readData[0]&0x0f) == 0x1 )
	ret = readData[2];
      else
	ret = -2;
    }
  }

  else {
    kdDebug() << "(K3bDevice::Device::getIndex) readCd failed. Trying seek." << endl;

    unsigned char* data = 0;
    int dataLen = 0;
    if( seek( lba ) && readSubChannel( &data, dataLen, 1, 0 ) ) {
      // byte 5: 4 bits ADR (MSB) + 4 bits CONTROL (LSB)
      if( dataLen > 7 && (data[5]>>4 & 0x0F) == 0x1 ) {
	ret = data[7];
      }
      else if( seek( lba-1 ) && readSubChannel( &data, dataLen, 1, 0 ) ) {
	if( dataLen > 7 && (data[5]>>4 & 0x0F) == 0x1 )
	  ret = data[7];
	else
	  ret = -2;
      }

      delete [] data;
    }
    else
      kdDebug() << "(K3bDevice::Device::getIndex) seek or readSubChannel failed." << endl;
  }

  if( needToClose )
    close();

  return ret;
}


bool K3bDevice::Device::searchIndex0( unsigned long startSec,
					  unsigned long endSec,
					  long& pregapStart ) const
{
  // if the device is already opened we do not close it
  // to allow fast multible method calls in a row
  bool needToClose = !isOpen();

  if( open() < 0 )
    return false;

  bool ret = false;

  int lastIndex = getIndex( endSec );
  if( lastIndex == 0 ) {
    // there is a pregap
    // let's find the position where the index turns to 0
    // we jump in 1 sec steps backwards until we find an index > 0
    unsigned long sector = endSec;
    while( lastIndex == 0 && sector > startSec ) {
      sector -= 75;
      if( sector < startSec )
	sector = startSec;
      lastIndex = getIndex(sector);
    }

    if( lastIndex == 0 ) {
      kdDebug() << "(K3bDevice::Device) warning: no index != 0 found." << endl;
    }
    else {
      // search forward to the first index = 0
      while( getIndex( sector ) != 0 && sector < endSec )
	sector++;

      pregapStart = sector;
      ret = true;
    }
  }
  else if( lastIndex > 0 ) {
    // no pregap
    pregapStart = -1;
    ret = true;
  }

  if( needToClose )
    close();

  return ret;
}


bool K3bDevice::Device::indexScan( K3bDevice::Toc& toc ) const
{
  // if the device is already opened we do not close it
  // to allow fast multible method calls in a row
  bool needToClose = !isOpen();

  if( open() < 0 )
    return false;

  bool ret = true;

  for( Toc::iterator it = toc.begin(); it != toc.end(); ++it ) {
    Track& track = *it;
    if( track.type() == Track::AUDIO ) {
      track.m_indices.clear();
      long index0 = -1;
      if( searchIndex0( track.firstSector().lba(), track.lastSector().lba(), index0 ) ) {
	kdDebug() << "(K3bDevice::Device) found index 0: " << index0 << endl;
      }
      if( index0 > 0 )
	track.m_index0 = K3b::Msf( index0 - track.firstSector().lba() );
      else
	track.m_index0 = 0;

      if( index0 > 0 )
	searchIndexTransitions( track.firstSector().lba(), index0-1, track );
      else
	searchIndexTransitions( track.firstSector().lba(), track.lastSector().lba(), track );
    }
  }

  if( needToClose )
    close();

  return ret;
}


void K3bDevice::Device::searchIndexTransitions( long start, long end, K3bDevice::Track& track ) const
{
  kdDebug() << "(K3bDevice::Device) searching for index transitions betweeen "
	    << start << " and " << end << endl;
  int startIndex = getIndex( start );
  int endIndex = getIndex( end );

  if( startIndex < 0 || endIndex < 0 ) {
    kdDebug() << "(K3bDevice::Device) could not retrieve index values." << endl;
  }

  kdDebug() << "(K3bDevice::Device) indices: " << start << " - " << startIndex
	    << " and " << end << " - " << endIndex << endl;

  if( startIndex != endIndex ) {
    if( start+1 == end ) {
      kdDebug() << "(K3bDevice::Device) found index transition: " << endIndex << " " << end << endl;
      track.m_indices.resize( endIndex );
      // we save the index relative to the first sector
      track.m_indices[endIndex-1] = K3b::Msf( end ) - track.firstSector();
    }
    else {
      searchIndexTransitions( start, start+(end-start)/2, track );
      searchIndexTransitions( start+(end-start)/2, end, track );
    }
  }
}


int K3bDevice::Device::copyrightProtectionSystemType() const
{
  unsigned char* dvdheader = 0;
  int dataLen = 0;
  if( readDvdStructure( &dvdheader, dataLen, 0x1 ) ) {
    int ret = -1;
    if( dataLen >= 6 )
      ret = dvdheader[4];
    delete [] dvdheader;
    return ret;
  }
  else
    return -1;
}


#ifdef Q_OS_FREEBSD
struct cam_device *K3bDevice::Device::cam() const
{
  return d->cam;
}
#endif
