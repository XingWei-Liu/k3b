/****************************************************************************
** Meta object code from reading C++ file 'k3baudioview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "projects/k3baudioview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'k3baudioview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_K3b__AudioView_t {
    QByteArrayData data[14];
    char stringdata0[194];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_K3b__AudioView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_K3b__AudioView_t qt_meta_stringdata_K3b__AudioView = {
    {
QT_MOC_LITERAL(0, 0, 14), // "K3b::AudioView"
QT_MOC_LITERAL(1, 15, 7), // "addUrls"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 11), // "QList<QUrl>"
QT_MOC_LITERAL(4, 36, 4), // "urls"
QT_MOC_LITERAL(5, 41, 15), // "slotMediaChange"
QT_MOC_LITERAL(6, 57, 20), // "K3b::Device::Device*"
QT_MOC_LITERAL(7, 78, 16), // "slotDeviceChange"
QT_MOC_LITERAL(8, 95, 27), // "K3b::Device::DeviceManager*"
QT_MOC_LITERAL(9, 123, 22), // "slotPlayerStateChanged"
QT_MOC_LITERAL(10, 146, 12), // "slotOpenfile"
QT_MOC_LITERAL(11, 159, 11), // "slotSetting"
QT_MOC_LITERAL(12, 171, 13), // "slotStartBurn"
QT_MOC_LITERAL(13, 185, 8) // "slotBurn"

    },
    "K3b::AudioView\0addUrls\0\0QList<QUrl>\0"
    "urls\0slotMediaChange\0K3b::Device::Device*\0"
    "slotDeviceChange\0K3b::Device::DeviceManager*\0"
    "slotPlayerStateChanged\0slotOpenfile\0"
    "slotSetting\0slotStartBurn\0slotBurn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_K3b__AudioView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x0a /* Public */,
       5,    1,   57,    2, 0x0a /* Public */,
       7,    1,   60,    2, 0x0a /* Public */,
       9,    0,   63,    2, 0x08 /* Private */,
      10,    0,   64,    2, 0x08 /* Private */,
      11,    0,   65,    2, 0x08 /* Private */,
      12,    0,   66,    2, 0x08 /* Private */,
      13,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void K3b::AudioView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AudioView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addUrls((*reinterpret_cast< const QList<QUrl>(*)>(_a[1]))); break;
        case 1: _t->slotMediaChange((*reinterpret_cast< K3b::Device::Device*(*)>(_a[1]))); break;
        case 2: _t->slotDeviceChange((*reinterpret_cast< K3b::Device::DeviceManager*(*)>(_a[1]))); break;
        case 3: _t->slotPlayerStateChanged(); break;
        case 4: _t->slotOpenfile(); break;
        case 5: _t->slotSetting(); break;
        case 6: _t->slotStartBurn(); break;
        case 7: _t->slotBurn(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QUrl> >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject K3b::AudioView::staticMetaObject = { {
    &View::staticMetaObject,
    qt_meta_stringdata_K3b__AudioView.data,
    qt_meta_data_K3b__AudioView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *K3b::AudioView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *K3b::AudioView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_K3b__AudioView.stringdata0))
        return static_cast<void*>(this);
    return View::qt_metacast(_clname);
}

int K3b::AudioView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = View::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
