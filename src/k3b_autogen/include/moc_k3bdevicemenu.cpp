/****************************************************************************
** Meta object code from reading C++ file 'k3bdevicemenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "k3bdevicemenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'k3bdevicemenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_K3b__DeviceMenu_t {
    QByteArrayData data[9];
    char stringdata0[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_K3b__DeviceMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_K3b__DeviceMenu_t qt_meta_stringdata_K3b__DeviceMenu = {
    {
QT_MOC_LITERAL(0, 0, 15), // "K3b::DeviceMenu"
QT_MOC_LITERAL(1, 16, 14), // "_k_aboutToShow"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 7), // "_k_copy"
QT_MOC_LITERAL(4, 40, 9), // "_k_format"
QT_MOC_LITERAL(5, 50, 11), // "_k_ripAudio"
QT_MOC_LITERAL(6, 62, 9), // "_k_ripVcd"
QT_MOC_LITERAL(7, 72, 14), // "_k_ripVideoDVD"
QT_MOC_LITERAL(8, 87, 23) // "_k_continueMultisession"

    },
    "K3b::DeviceMenu\0_k_aboutToShow\0\0_k_copy\0"
    "_k_format\0_k_ripAudio\0_k_ripVcd\0"
    "_k_ripVideoDVD\0_k_continueMultisession"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_K3b__DeviceMenu[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void K3b::DeviceMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DeviceMenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->d->_k_aboutToShow(); break;
        case 1: _t->d->_k_copy(); break;
        case 2: _t->d->_k_format(); break;
        case 3: _t->d->_k_ripAudio(); break;
        case 4: _t->d->_k_ripVcd(); break;
        case 5: _t->d->_k_ripVideoDVD(); break;
        case 6: _t->d->_k_continueMultisession(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject K3b::DeviceMenu::staticMetaObject = { {
    &QMenu::staticMetaObject,
    qt_meta_stringdata_K3b__DeviceMenu.data,
    qt_meta_data_K3b__DeviceMenu,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *K3b::DeviceMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *K3b::DeviceMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_K3b__DeviceMenu.stringdata0))
        return static_cast<void*>(this);
    return QMenu::qt_metacast(_clname);
}

int K3b::DeviceMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMenu::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
