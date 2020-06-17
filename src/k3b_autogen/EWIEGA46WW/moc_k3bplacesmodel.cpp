/****************************************************************************
** Meta object code from reading C++ file 'k3bplacesmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "k3bplacesmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'k3bplacesmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_K3b__PlacesModel_t {
    QByteArrayData data[15];
    char stringdata0[147];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_K3b__PlacesModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_K3b__PlacesModel_t qt_meta_stringdata_K3b__PlacesModel = {
    {
QT_MOC_LITERAL(0, 0, 16), // "K3b::PlacesModel"
QT_MOC_LITERAL(1, 17, 6), // "expand"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 37, 5), // "index"
QT_MOC_LITERAL(5, 43, 8), // "addPlace"
QT_MOC_LITERAL(6, 52, 4), // "name"
QT_MOC_LITERAL(7, 57, 4), // "icon"
QT_MOC_LITERAL(8, 62, 7), // "rootUrl"
QT_MOC_LITERAL(9, 70, 11), // "expandToUrl"
QT_MOC_LITERAL(10, 82, 3), // "url"
QT_MOC_LITERAL(11, 86, 18), // "slotDevicesChanged"
QT_MOC_LITERAL(12, 105, 27), // "K3b::Device::DeviceManager*"
QT_MOC_LITERAL(13, 133, 2), // "dm"
QT_MOC_LITERAL(14, 136, 10) // "slotExpand"

    },
    "K3b::PlacesModel\0expand\0\0QModelIndex\0"
    "index\0addPlace\0name\0icon\0rootUrl\0"
    "expandToUrl\0url\0slotDevicesChanged\0"
    "K3b::Device::DeviceManager*\0dm\0"
    "slotExpand"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_K3b__PlacesModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    3,   42,    2, 0x0a /* Public */,
       9,    1,   49,    2, 0x0a /* Public */,
      11,    1,   52,    2, 0x08 /* Private */,
      14,    1,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QIcon, QMetaType::QUrl,    6,    7,    8,
    QMetaType::Void, QMetaType::QUrl,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void K3b::PlacesModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PlacesModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->expand((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->addPlace((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QIcon(*)>(_a[2])),(*reinterpret_cast< const QUrl(*)>(_a[3]))); break;
        case 2: _t->expandToUrl((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 3: _t->slotDevicesChanged((*reinterpret_cast< K3b::Device::DeviceManager*(*)>(_a[1]))); break;
        case 4: _t->slotExpand((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PlacesModel::*)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlacesModel::expand)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject K3b::PlacesModel::staticMetaObject = { {
    &MetaItemModel::staticMetaObject,
    qt_meta_stringdata_K3b__PlacesModel.data,
    qt_meta_data_K3b__PlacesModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *K3b::PlacesModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *K3b::PlacesModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_K3b__PlacesModel.stringdata0))
        return static_cast<void*>(this);
    return MetaItemModel::qt_metacast(_clname);
}

int K3b::PlacesModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MetaItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void K3b::PlacesModel::expand(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
