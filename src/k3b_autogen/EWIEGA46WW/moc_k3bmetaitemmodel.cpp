/****************************************************************************
** Meta object code from reading C++ file 'k3bmetaitemmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "k3bmetaitemmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'k3bmetaitemmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_K3b__MetaItemModel_t {
    QByteArrayData data[17];
    char stringdata0[229];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_K3b__MetaItemModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_K3b__MetaItemModel_t qt_meta_stringdata_K3b__MetaItemModel = {
    {
QT_MOC_LITERAL(0, 0, 18), // "K3b::MetaItemModel"
QT_MOC_LITERAL(1, 19, 11), // "addSubModel"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 4), // "name"
QT_MOC_LITERAL(4, 37, 4), // "icon"
QT_MOC_LITERAL(5, 42, 19), // "QAbstractItemModel*"
QT_MOC_LITERAL(6, 62, 5), // "model"
QT_MOC_LITERAL(7, 68, 4), // "flat"
QT_MOC_LITERAL(8, 73, 14), // "removeSubModel"
QT_MOC_LITERAL(9, 88, 25), // "slotRowsAboutToBeInserted"
QT_MOC_LITERAL(10, 114, 11), // "QModelIndex"
QT_MOC_LITERAL(11, 126, 16), // "slotRowsInserted"
QT_MOC_LITERAL(12, 143, 24), // "slotRowsAboutToBeRemoved"
QT_MOC_LITERAL(13, 168, 15), // "slotRowsRemoved"
QT_MOC_LITERAL(14, 184, 15), // "slotDataChanged"
QT_MOC_LITERAL(15, 200, 18), // "slotAboutToBeReset"
QT_MOC_LITERAL(16, 219, 9) // "slotReset"

    },
    "K3b::MetaItemModel\0addSubModel\0\0name\0"
    "icon\0QAbstractItemModel*\0model\0flat\0"
    "removeSubModel\0slotRowsAboutToBeInserted\0"
    "QModelIndex\0slotRowsInserted\0"
    "slotRowsAboutToBeRemoved\0slotRowsRemoved\0"
    "slotDataChanged\0slotAboutToBeReset\0"
    "slotReset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_K3b__MetaItemModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    4,   64,    2, 0x0a /* Public */,
       1,    3,   73,    2, 0x2a /* Public | MethodCloned */,
       8,    1,   80,    2, 0x0a /* Public */,
       9,    3,   83,    2, 0x08 /* Private */,
      11,    3,   90,    2, 0x08 /* Private */,
      12,    3,   97,    2, 0x08 /* Private */,
      13,    3,  104,    2, 0x08 /* Private */,
      14,    2,  111,    2, 0x08 /* Private */,
      15,    0,  116,    2, 0x08 /* Private */,
      16,    0,  117,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QIcon, 0x80000000 | 5, QMetaType::Bool,    3,    4,    6,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QIcon, 0x80000000 | 5,    3,    4,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 10, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 10, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 10, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 10, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 10,    2,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void K3b::MetaItemModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MetaItemModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addSubModel((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QIcon(*)>(_a[2])),(*reinterpret_cast< QAbstractItemModel*(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 1: _t->addSubModel((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QIcon(*)>(_a[2])),(*reinterpret_cast< QAbstractItemModel*(*)>(_a[3]))); break;
        case 2: _t->removeSubModel((*reinterpret_cast< QAbstractItemModel*(*)>(_a[1]))); break;
        case 3: _t->slotRowsAboutToBeInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: _t->slotRowsInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 5: _t->slotRowsAboutToBeRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 6: _t->slotRowsRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 7: _t->slotDataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 8: _t->slotAboutToBeReset(); break;
        case 9: _t->slotReset(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractItemModel* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractItemModel* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractItemModel* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject K3b::MetaItemModel::staticMetaObject = { {
    &QAbstractItemModel::staticMetaObject,
    qt_meta_stringdata_K3b__MetaItemModel.data,
    qt_meta_data_K3b__MetaItemModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *K3b::MetaItemModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *K3b::MetaItemModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_K3b__MetaItemModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int K3b::MetaItemModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
