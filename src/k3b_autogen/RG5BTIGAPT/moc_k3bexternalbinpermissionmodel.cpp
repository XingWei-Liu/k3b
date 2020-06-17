/****************************************************************************
** Meta object code from reading C++ file 'k3bexternalbinpermissionmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "option/k3bexternalbinpermissionmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'k3bexternalbinpermissionmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_K3b__ExternalBinPermissionModel_t {
    QByteArrayData data[5];
    char stringdata0[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_K3b__ExternalBinPermissionModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_K3b__ExternalBinPermissionModel_t qt_meta_stringdata_K3b__ExternalBinPermissionModel = {
    {
QT_MOC_LITERAL(0, 0, 31), // "K3b::ExternalBinPermissionModel"
QT_MOC_LITERAL(1, 32, 15), // "setBurningGroup"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 12), // "burningGroup"
QT_MOC_LITERAL(4, 62, 6) // "update"

    },
    "K3b::ExternalBinPermissionModel\0"
    "setBurningGroup\0\0burningGroup\0update"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_K3b__ExternalBinPermissionModel[] = {

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
       1,    1,   24,    2, 0x0a /* Public */,
       4,    0,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,

       0        // eod
};

void K3b::ExternalBinPermissionModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ExternalBinPermissionModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setBurningGroup((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->update(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject K3b::ExternalBinPermissionModel::staticMetaObject = { {
    &QAbstractItemModel::staticMetaObject,
    qt_meta_stringdata_K3b__ExternalBinPermissionModel.data,
    qt_meta_data_K3b__ExternalBinPermissionModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *K3b::ExternalBinPermissionModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *K3b::ExternalBinPermissionModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_K3b__ExternalBinPermissionModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int K3b::ExternalBinPermissionModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
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
