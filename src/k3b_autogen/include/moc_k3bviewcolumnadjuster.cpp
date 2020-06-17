/****************************************************************************
** Meta object code from reading C++ file 'k3bviewcolumnadjuster.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "k3bviewcolumnadjuster.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'k3bviewcolumnadjuster.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_K3b__ViewColumnAdjuster_t {
    QByteArrayData data[5];
    char stringdata0[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_K3b__ViewColumnAdjuster_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_K3b__ViewColumnAdjuster_t qt_meta_stringdata_K3b__ViewColumnAdjuster = {
    {
QT_MOC_LITERAL(0, 0, 23), // "K3b::ViewColumnAdjuster"
QT_MOC_LITERAL(1, 24, 19), // "columnsNeedAjusting"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 13), // "adjustColumns"
QT_MOC_LITERAL(4, 59, 16) // "_k_adjustColumns"

    },
    "K3b::ViewColumnAdjuster\0columnsNeedAjusting\0"
    "\0adjustColumns\0_k_adjustColumns"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_K3b__ViewColumnAdjuster[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   30,    2, 0x0a /* Public */,
       4,    0,   31,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void K3b::ViewColumnAdjuster::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ViewColumnAdjuster *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->columnsNeedAjusting(); break;
        case 1: _t->adjustColumns(); break;
        case 2: _t->d->_k_adjustColumns(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ViewColumnAdjuster::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewColumnAdjuster::columnsNeedAjusting)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject K3b::ViewColumnAdjuster::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_K3b__ViewColumnAdjuster.data,
    qt_meta_data_K3b__ViewColumnAdjuster,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *K3b::ViewColumnAdjuster::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *K3b::ViewColumnAdjuster::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_K3b__ViewColumnAdjuster.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int K3b::ViewColumnAdjuster::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void K3b::ViewColumnAdjuster::columnsNeedAjusting()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
