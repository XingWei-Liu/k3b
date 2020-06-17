/****************************************************************************
** Meta object code from reading C++ file 'k3baudioprojectmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "projects/k3baudioprojectmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'k3baudioprojectmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_K3b__AudioProjectModel_t {
    QByteArrayData data[13];
    char stringdata0[217];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_K3b__AudioProjectModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_K3b__AudioProjectModel_t qt_meta_stringdata_K3b__AudioProjectModel = {
    {
QT_MOC_LITERAL(0, 0, 22), // "K3b::AudioProjectModel"
QT_MOC_LITERAL(1, 23, 22), // "_k_trackAboutToBeAdded"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 8), // "position"
QT_MOC_LITERAL(4, 56, 13), // "_k_trackAdded"
QT_MOC_LITERAL(5, 70, 24), // "_k_trackAboutToBeRemoved"
QT_MOC_LITERAL(6, 95, 15), // "_k_trackRemoved"
QT_MOC_LITERAL(7, 111, 23), // "_k_sourceAboutToBeAdded"
QT_MOC_LITERAL(8, 135, 16), // "K3b::AudioTrack*"
QT_MOC_LITERAL(9, 152, 6), // "parent"
QT_MOC_LITERAL(10, 159, 14), // "_k_sourceAdded"
QT_MOC_LITERAL(11, 174, 25), // "_k_sourceAboutToBeRemoved"
QT_MOC_LITERAL(12, 200, 16) // "_k_sourceRemoved"

    },
    "K3b::AudioProjectModel\0_k_trackAboutToBeAdded\0"
    "\0position\0_k_trackAdded\0"
    "_k_trackAboutToBeRemoved\0_k_trackRemoved\0"
    "_k_sourceAboutToBeAdded\0K3b::AudioTrack*\0"
    "parent\0_k_sourceAdded\0_k_sourceAboutToBeRemoved\0"
    "_k_sourceRemoved"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_K3b__AudioProjectModel[] = {

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
       1,    1,   54,    2, 0x08 /* Private */,
       4,    0,   57,    2, 0x08 /* Private */,
       5,    1,   58,    2, 0x08 /* Private */,
       6,    0,   61,    2, 0x08 /* Private */,
       7,    2,   62,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,
      11,    2,   68,    2, 0x08 /* Private */,
      12,    0,   73,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int,    9,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int,    9,    3,
    QMetaType::Void,

       0        // eod
};

void K3b::AudioProjectModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AudioProjectModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->d->_k_trackAboutToBeAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->d->_k_trackAdded(); break;
        case 2: _t->d->_k_trackAboutToBeRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->d->_k_trackRemoved(); break;
        case 4: _t->d->_k_sourceAboutToBeAdded((*reinterpret_cast< K3b::AudioTrack*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->d->_k_sourceAdded(); break;
        case 6: _t->d->_k_sourceAboutToBeRemoved((*reinterpret_cast< K3b::AudioTrack*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->d->_k_sourceRemoved(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject K3b::AudioProjectModel::staticMetaObject = { {
    &QAbstractItemModel::staticMetaObject,
    qt_meta_stringdata_K3b__AudioProjectModel.data,
    qt_meta_data_K3b__AudioProjectModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *K3b::AudioProjectModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *K3b::AudioProjectModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_K3b__AudioProjectModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int K3b::AudioProjectModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
