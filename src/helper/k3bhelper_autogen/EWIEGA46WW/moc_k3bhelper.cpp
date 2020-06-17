/****************************************************************************
** Meta object code from reading C++ file 'k3bhelper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "k3bhelper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'k3bhelper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_K3b__Helper_t {
    QByteArrayData data[6];
    char stringdata0[59];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_K3b__Helper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_K3b__Helper_t qt_meta_stringdata_K3b__Helper = {
    {
QT_MOC_LITERAL(0, 0, 11), // "K3b::Helper"
QT_MOC_LITERAL(1, 12, 17), // "updatepermissions"
QT_MOC_LITERAL(2, 30, 11), // "ActionReply"
QT_MOC_LITERAL(3, 42, 0), // ""
QT_MOC_LITERAL(4, 43, 4), // "args"
QT_MOC_LITERAL(5, 48, 10) // "addtogroup"

    },
    "K3b::Helper\0updatepermissions\0ActionReply\0"
    "\0args\0addtogroup"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_K3b__Helper[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    3, 0x0a /* Public */,
       5,    1,   27,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QVariantMap,    4,
    0x80000000 | 2, QMetaType::QVariantMap,    4,

       0        // eod
};

void K3b::Helper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Helper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { ActionReply _r = _t->updatepermissions((*reinterpret_cast< QVariantMap(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< ActionReply*>(_a[0]) = std::move(_r); }  break;
        case 1: { ActionReply _r = _t->addtogroup((*reinterpret_cast< QVariantMap(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< ActionReply*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject K3b::Helper::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_K3b__Helper.data,
    qt_meta_data_K3b__Helper,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *K3b::Helper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *K3b::Helper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_K3b__Helper.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int K3b::Helper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
