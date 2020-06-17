/****************************************************************************
** Meta object code from reading C++ file 'k3bmovixprojectmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "projects/k3bmovixprojectmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'k3bmovixprojectmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_K3b__MovixProjectModel_t {
    QByteArrayData data[11];
    char stringdata0[224];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_K3b__MovixProjectModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_K3b__MovixProjectModel_t qt_meta_stringdata_K3b__MovixProjectModel = {
    {
QT_MOC_LITERAL(0, 0, 22), // "K3b::MovixProjectModel"
QT_MOC_LITERAL(1, 23, 25), // "_k_itemsAboutToBeInserted"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 16), // "_k_itemsInserted"
QT_MOC_LITERAL(4, 67, 24), // "_k_itemsAboutToBeRemoved"
QT_MOC_LITERAL(5, 92, 15), // "_k_itemsRemoved"
QT_MOC_LITERAL(6, 108, 28), // "_k_subTitleAboutToBeInserted"
QT_MOC_LITERAL(7, 137, 19), // "K3b::MovixFileItem*"
QT_MOC_LITERAL(8, 157, 19), // "_k_subTitleInserted"
QT_MOC_LITERAL(9, 177, 27), // "_k_subTitleAboutToBeRemoved"
QT_MOC_LITERAL(10, 205, 18) // "_k_subTitleRemoved"

    },
    "K3b::MovixProjectModel\0_k_itemsAboutToBeInserted\0"
    "\0_k_itemsInserted\0_k_itemsAboutToBeRemoved\0"
    "_k_itemsRemoved\0_k_subTitleAboutToBeInserted\0"
    "K3b::MovixFileItem*\0_k_subTitleInserted\0"
    "_k_subTitleAboutToBeRemoved\0"
    "_k_subTitleRemoved"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_K3b__MovixProjectModel[] = {

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
       1,    2,   54,    2, 0x08 /* Private */,
       3,    0,   59,    2, 0x08 /* Private */,
       4,    2,   60,    2, 0x08 /* Private */,
       5,    0,   65,    2, 0x08 /* Private */,
       6,    1,   66,    2, 0x08 /* Private */,
       8,    0,   69,    2, 0x08 /* Private */,
       9,    1,   70,    2, 0x08 /* Private */,
      10,    0,   73,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void,

       0        // eod
};

void K3b::MovixProjectModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MovixProjectModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->d->_k_itemsAboutToBeInserted((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->d->_k_itemsInserted(); break;
        case 2: _t->d->_k_itemsAboutToBeRemoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->d->_k_itemsRemoved(); break;
        case 4: _t->d->_k_subTitleAboutToBeInserted((*reinterpret_cast< K3b::MovixFileItem*(*)>(_a[1]))); break;
        case 5: _t->d->_k_subTitleInserted(); break;
        case 6: _t->d->_k_subTitleAboutToBeRemoved((*reinterpret_cast< K3b::MovixFileItem*(*)>(_a[1]))); break;
        case 7: _t->d->_k_subTitleRemoved(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject K3b::MovixProjectModel::staticMetaObject = { {
    &QAbstractItemModel::staticMetaObject,
    qt_meta_stringdata_K3b__MovixProjectModel.data,
    qt_meta_data_K3b__MovixProjectModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *K3b::MovixProjectModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *K3b::MovixProjectModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_K3b__MovixProjectModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int K3b::MovixProjectModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
