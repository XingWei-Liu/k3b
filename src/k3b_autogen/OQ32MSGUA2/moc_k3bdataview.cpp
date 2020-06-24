/****************************************************************************
** Meta object code from reading C++ file 'k3bdataview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "projects/k3bdataview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'k3bdataview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_K3b__DataView_t {
    QByteArrayData data[20];
    char stringdata0[272];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_K3b__DataView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_K3b__DataView_t qt_meta_stringdata_K3b__DataView = {
    {
QT_MOC_LITERAL(0, 0, 13), // "K3b::DataView"
QT_MOC_LITERAL(1, 14, 8), // "slotBurn"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 13), // "slotStartBurn"
QT_MOC_LITERAL(4, 38, 15), // "add_device_urls"
QT_MOC_LITERAL(5, 54, 9), // "filenpath"
QT_MOC_LITERAL(6, 64, 7), // "addUrls"
QT_MOC_LITERAL(7, 72, 11), // "QList<QUrl>"
QT_MOC_LITERAL(8, 84, 4), // "urls"
QT_MOC_LITERAL(9, 89, 15), // "slotMediaChange"
QT_MOC_LITERAL(10, 105, 20), // "K3b::Device::Device*"
QT_MOC_LITERAL(11, 126, 16), // "slotDeviceChange"
QT_MOC_LITERAL(12, 143, 27), // "K3b::Device::DeviceManager*"
QT_MOC_LITERAL(13, 171, 11), // "slotComboCD"
QT_MOC_LITERAL(14, 183, 15), // "slotComboBurner"
QT_MOC_LITERAL(15, 199, 13), // "slotParentDir"
QT_MOC_LITERAL(16, 213, 21), // "slotCurrentDirChanged"
QT_MOC_LITERAL(17, 235, 18), // "slotSetCurrentRoot"
QT_MOC_LITERAL(18, 254, 11), // "QModelIndex"
QT_MOC_LITERAL(19, 266, 5) // "index"

    },
    "K3b::DataView\0slotBurn\0\0slotStartBurn\0"
    "add_device_urls\0filenpath\0addUrls\0"
    "QList<QUrl>\0urls\0slotMediaChange\0"
    "K3b::Device::Device*\0slotDeviceChange\0"
    "K3b::Device::DeviceManager*\0slotComboCD\0"
    "slotComboBurner\0slotParentDir\0"
    "slotCurrentDirChanged\0slotSetCurrentRoot\0"
    "QModelIndex\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_K3b__DataView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x0a /* Public */,
       3,    0,   70,    2, 0x0a /* Public */,
       4,    1,   71,    2, 0x0a /* Public */,
       6,    1,   74,    2, 0x0a /* Public */,
       9,    1,   77,    2, 0x0a /* Public */,
      11,    1,   80,    2, 0x0a /* Public */,
      13,    1,   83,    2, 0x0a /* Public */,
      14,    1,   86,    2, 0x0a /* Public */,
      15,    0,   89,    2, 0x08 /* Private */,
      16,    0,   90,    2, 0x08 /* Private */,
      17,    1,   91,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void, 0x80000000 | 12,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18,   19,

       0        // eod
};

void K3b::DataView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DataView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotBurn(); break;
        case 1: _t->slotStartBurn(); break;
        case 2: _t->add_device_urls((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->addUrls((*reinterpret_cast< const QList<QUrl>(*)>(_a[1]))); break;
        case 4: _t->slotMediaChange((*reinterpret_cast< K3b::Device::Device*(*)>(_a[1]))); break;
        case 5: _t->slotDeviceChange((*reinterpret_cast< K3b::Device::DeviceManager*(*)>(_a[1]))); break;
        case 6: _t->slotComboCD((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->slotComboBurner((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->slotParentDir(); break;
        case 9: _t->slotCurrentDirChanged(); break;
        case 10: _t->slotSetCurrentRoot((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QUrl> >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject K3b::DataView::staticMetaObject = { {
    &View::staticMetaObject,
    qt_meta_stringdata_K3b__DataView.data,
    qt_meta_data_K3b__DataView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *K3b::DataView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *K3b::DataView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_K3b__DataView.stringdata0))
        return static_cast<void*>(this);
    return View::qt_metacast(_clname);
}

int K3b::DataView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = View::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
