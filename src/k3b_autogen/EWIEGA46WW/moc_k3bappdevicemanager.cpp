/****************************************************************************
** Meta object code from reading C++ file 'k3bappdevicemanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "k3bappdevicemanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'k3bappdevicemanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_K3b__AppDeviceManager_t {
    QByteArrayData data[29];
    char stringdata0[367];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_K3b__AppDeviceManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_K3b__AppDeviceManager_t qt_meta_stringdata_K3b__AppDeviceManager = {
    {
QT_MOC_LITERAL(0, 0, 21), // "K3b::AppDeviceManager"
QT_MOC_LITERAL(1, 22, 20), // "currentDeviceChanged"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 20), // "K3b::Device::Device*"
QT_MOC_LITERAL(4, 65, 17), // "detectingDiskInfo"
QT_MOC_LITERAL(5, 83, 13), // "mountFinished"
QT_MOC_LITERAL(6, 97, 10), // "mountPoint"
QT_MOC_LITERAL(7, 108, 15), // "unmountFinished"
QT_MOC_LITERAL(8, 124, 7), // "success"
QT_MOC_LITERAL(9, 132, 5), // "clear"
QT_MOC_LITERAL(10, 138, 16), // "setCurrentDevice"
QT_MOC_LITERAL(11, 155, 8), // "diskInfo"
QT_MOC_LITERAL(12, 164, 12), // "unlockDevice"
QT_MOC_LITERAL(13, 177, 10), // "lockDevice"
QT_MOC_LITERAL(14, 188, 9), // "mountDisk"
QT_MOC_LITERAL(15, 198, 11), // "unmountDisk"
QT_MOC_LITERAL(16, 210, 9), // "ejectDisk"
QT_MOC_LITERAL(17, 220, 8), // "loadDisk"
QT_MOC_LITERAL(18, 229, 12), // "setReadSpeed"
QT_MOC_LITERAL(19, 242, 17), // "slotMediumChanged"
QT_MOC_LITERAL(20, 260, 3), // "dev"
QT_MOC_LITERAL(21, 264, 16), // "slotMountChanged"
QT_MOC_LITERAL(22, 281, 10), // "accessible"
QT_MOC_LITERAL(23, 292, 3), // "udi"
QT_MOC_LITERAL(24, 296, 17), // "slotMountFinished"
QT_MOC_LITERAL(25, 314, 16), // "Solid::ErrorType"
QT_MOC_LITERAL(26, 331, 5), // "error"
QT_MOC_LITERAL(27, 337, 9), // "errorData"
QT_MOC_LITERAL(28, 347, 19) // "slotUnmountFinished"

    },
    "K3b::AppDeviceManager\0currentDeviceChanged\0"
    "\0K3b::Device::Device*\0detectingDiskInfo\0"
    "mountFinished\0mountPoint\0unmountFinished\0"
    "success\0clear\0setCurrentDevice\0diskInfo\0"
    "unlockDevice\0lockDevice\0mountDisk\0"
    "unmountDisk\0ejectDisk\0loadDisk\0"
    "setReadSpeed\0slotMediumChanged\0dev\0"
    "slotMountChanged\0accessible\0udi\0"
    "slotMountFinished\0Solid::ErrorType\0"
    "error\0errorData\0slotUnmountFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_K3b__AppDeviceManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  144,    2, 0x06 /* Public */,
       4,    1,  147,    2, 0x06 /* Public */,
       5,    1,  150,    2, 0x06 /* Public */,
       7,    1,  153,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,  156,    2, 0x0a /* Public */,
      10,    1,  157,    2, 0x0a /* Public */,
      11,    0,  160,    2, 0x0a /* Public */,
      12,    0,  161,    2, 0x0a /* Public */,
      13,    0,  162,    2, 0x0a /* Public */,
      14,    0,  163,    2, 0x0a /* Public */,
      15,    0,  164,    2, 0x0a /* Public */,
      16,    0,  165,    2, 0x0a /* Public */,
      17,    0,  166,    2, 0x0a /* Public */,
      18,    0,  167,    2, 0x0a /* Public */,
      11,    1,  168,    2, 0x0a /* Public */,
      12,    1,  171,    2, 0x0a /* Public */,
      13,    1,  174,    2, 0x0a /* Public */,
      14,    1,  177,    2, 0x0a /* Public */,
      15,    1,  180,    2, 0x0a /* Public */,
      16,    1,  183,    2, 0x0a /* Public */,
      17,    1,  186,    2, 0x0a /* Public */,
      18,    1,  189,    2, 0x0a /* Public */,
      19,    1,  192,    2, 0x08 /* Private */,
      21,    2,  195,    2, 0x08 /* Private */,
      24,    3,  200,    2, 0x08 /* Private */,
      28,    3,  207,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Bool,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,   20,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,   22,   23,
    QMetaType::Void, 0x80000000 | 25, QMetaType::QVariant, QMetaType::QString,   26,   27,   23,
    QMetaType::Void, 0x80000000 | 25, QMetaType::QVariant, QMetaType::QString,   26,   27,   23,

       0        // eod
};

void K3b::AppDeviceManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AppDeviceManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentDeviceChanged((*reinterpret_cast< K3b::Device::Device*(*)>(_a[1]))); break;
        case 1: _t->detectingDiskInfo((*reinterpret_cast< K3b::Device::Device*(*)>(_a[1]))); break;
        case 2: _t->mountFinished((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->unmountFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->clear(); break;
        case 5: _t->setCurrentDevice((*reinterpret_cast< K3b::Device::Device*(*)>(_a[1]))); break;
        case 6: _t->diskInfo(); break;
        case 7: _t->unlockDevice(); break;
        case 8: _t->lockDevice(); break;
        case 9: _t->mountDisk(); break;
        case 10: _t->unmountDisk(); break;
        case 11: _t->ejectDisk(); break;
        case 12: _t->loadDisk(); break;
        case 13: _t->setReadSpeed(); break;
        case 14: _t->diskInfo((*reinterpret_cast< K3b::Device::Device*(*)>(_a[1]))); break;
        case 15: _t->unlockDevice((*reinterpret_cast< K3b::Device::Device*(*)>(_a[1]))); break;
        case 16: _t->lockDevice((*reinterpret_cast< K3b::Device::Device*(*)>(_a[1]))); break;
        case 17: _t->mountDisk((*reinterpret_cast< K3b::Device::Device*(*)>(_a[1]))); break;
        case 18: _t->unmountDisk((*reinterpret_cast< K3b::Device::Device*(*)>(_a[1]))); break;
        case 19: _t->ejectDisk((*reinterpret_cast< K3b::Device::Device*(*)>(_a[1]))); break;
        case 20: _t->loadDisk((*reinterpret_cast< K3b::Device::Device*(*)>(_a[1]))); break;
        case 21: _t->setReadSpeed((*reinterpret_cast< K3b::Device::Device*(*)>(_a[1]))); break;
        case 22: _t->slotMediumChanged((*reinterpret_cast< K3b::Device::Device*(*)>(_a[1]))); break;
        case 23: _t->slotMountChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 24: _t->slotMountFinished((*reinterpret_cast< Solid::ErrorType(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 25: _t->slotUnmountFinished((*reinterpret_cast< Solid::ErrorType(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Solid::ErrorType >(); break;
            }
            break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Solid::ErrorType >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AppDeviceManager::*)(K3b::Device::Device * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AppDeviceManager::currentDeviceChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AppDeviceManager::*)(K3b::Device::Device * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AppDeviceManager::detectingDiskInfo)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AppDeviceManager::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AppDeviceManager::mountFinished)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AppDeviceManager::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AppDeviceManager::unmountFinished)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject K3b::AppDeviceManager::staticMetaObject = { {
    &Device::DeviceManager::staticMetaObject,
    qt_meta_stringdata_K3b__AppDeviceManager.data,
    qt_meta_data_K3b__AppDeviceManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *K3b::AppDeviceManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *K3b::AppDeviceManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_K3b__AppDeviceManager.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "KXMLGUIClient"))
        return static_cast< KXMLGUIClient*>(this);
    return Device::DeviceManager::qt_metacast(_clname);
}

int K3b::AppDeviceManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Device::DeviceManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }
    return _id;
}

// SIGNAL 0
void K3b::AppDeviceManager::currentDeviceChanged(K3b::Device::Device * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void K3b::AppDeviceManager::detectingDiskInfo(K3b::Device::Device * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void K3b::AppDeviceManager::mountFinished(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void K3b::AppDeviceManager::unmountFinished(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
