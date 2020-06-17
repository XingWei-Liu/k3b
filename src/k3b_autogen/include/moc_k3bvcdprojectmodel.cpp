/****************************************************************************
** Meta object code from reading C++ file 'k3bvcdprojectmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "projects/k3bvcdprojectmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'k3bvcdprojectmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_K3b__VcdProjectModel_t {
    QByteArrayData data[6];
    char stringdata0[89];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_K3b__VcdProjectModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_K3b__VcdProjectModel_t qt_meta_stringdata_K3b__VcdProjectModel = {
    {
QT_MOC_LITERAL(0, 0, 20), // "K3b::VcdProjectModel"
QT_MOC_LITERAL(1, 21, 17), // "_k_aboutToAddRows"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 12), // "_k_addedRows"
QT_MOC_LITERAL(4, 53, 20), // "_k_aboutToRemoveRows"
QT_MOC_LITERAL(5, 74, 14) // "_k_removedRows"

    },
    "K3b::VcdProjectModel\0_k_aboutToAddRows\0"
    "\0_k_addedRows\0_k_aboutToRemoveRows\0"
    "_k_removedRows"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_K3b__VcdProjectModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x08 /* Private */,
       3,    0,   39,    2, 0x08 /* Private */,
       4,    2,   40,    2, 0x08 /* Private */,
       5,    0,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void,

       0        // eod
};

void K3b::VcdProjectModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VcdProjectModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->d->_k_aboutToAddRows((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->d->_k_addedRows(); break;
        case 2: _t->d->_k_aboutToRemoveRows((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->d->_k_removedRows(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject K3b::VcdProjectModel::staticMetaObject = { {
    &QAbstractTableModel::staticMetaObject,
    qt_meta_stringdata_K3b__VcdProjectModel.data,
    qt_meta_data_K3b__VcdProjectModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *K3b::VcdProjectModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *K3b::VcdProjectModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_K3b__VcdProjectModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractTableModel::qt_metacast(_clname);
}

int K3b::VcdProjectModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
