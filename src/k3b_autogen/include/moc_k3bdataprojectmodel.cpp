/****************************************************************************
** Meta object code from reading C++ file 'k3bdataprojectmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "projects/k3bdataprojectmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'k3bdataprojectmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_K3b__DataProjectModel_t {
    QByteArrayData data[18];
    char stringdata0[248];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_K3b__DataProjectModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_K3b__DataProjectModel_t qt_meta_stringdata_K3b__DataProjectModel = {
    {
QT_MOC_LITERAL(0, 0, 21), // "K3b::DataProjectModel"
QT_MOC_LITERAL(1, 22, 16), // "addUrlsRequested"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 11), // "QList<QUrl>"
QT_MOC_LITERAL(4, 52, 4), // "urls"
QT_MOC_LITERAL(5, 57, 13), // "K3b::DirItem*"
QT_MOC_LITERAL(6, 71, 9), // "targetDir"
QT_MOC_LITERAL(7, 81, 18), // "moveItemsRequested"
QT_MOC_LITERAL(8, 100, 21), // "QList<K3b::DataItem*>"
QT_MOC_LITERAL(9, 122, 5), // "items"
QT_MOC_LITERAL(10, 128, 25), // "_k_itemsAboutToBeInserted"
QT_MOC_LITERAL(11, 154, 6), // "parent"
QT_MOC_LITERAL(12, 161, 5), // "start"
QT_MOC_LITERAL(13, 167, 3), // "end"
QT_MOC_LITERAL(14, 171, 24), // "_k_itemsAboutToBeRemoved"
QT_MOC_LITERAL(15, 196, 16), // "_k_itemsInserted"
QT_MOC_LITERAL(16, 213, 15), // "_k_itemsRemoved"
QT_MOC_LITERAL(17, 229, 18) // "_k_volumeIdChanged"

    },
    "K3b::DataProjectModel\0addUrlsRequested\0"
    "\0QList<QUrl>\0urls\0K3b::DirItem*\0"
    "targetDir\0moveItemsRequested\0"
    "QList<K3b::DataItem*>\0items\0"
    "_k_itemsAboutToBeInserted\0parent\0start\0"
    "end\0_k_itemsAboutToBeRemoved\0"
    "_k_itemsInserted\0_k_itemsRemoved\0"
    "_k_volumeIdChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_K3b__DataProjectModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x06 /* Public */,
       7,    2,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    3,   59,    2, 0x08 /* Private */,
      14,    3,   66,    2, 0x08 /* Private */,
      15,    3,   73,    2, 0x08 /* Private */,
      16,    3,   80,    2, 0x08 /* Private */,
      17,    0,   87,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 5,    9,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int, QMetaType::Int,   11,   12,   13,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int, QMetaType::Int,   11,   12,   13,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int, QMetaType::Int,   11,   12,   13,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int, QMetaType::Int,   11,   12,   13,
    QMetaType::Void,

       0        // eod
};

void K3b::DataProjectModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DataProjectModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addUrlsRequested((*reinterpret_cast< QList<QUrl>(*)>(_a[1])),(*reinterpret_cast< K3b::DirItem*(*)>(_a[2]))); break;
        case 1: _t->moveItemsRequested((*reinterpret_cast< QList<K3b::DataItem*>(*)>(_a[1])),(*reinterpret_cast< K3b::DirItem*(*)>(_a[2]))); break;
        case 2: _t->d->_k_itemsAboutToBeInserted((*reinterpret_cast< K3b::DirItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->d->_k_itemsAboutToBeRemoved((*reinterpret_cast< K3b::DirItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: _t->d->_k_itemsInserted((*reinterpret_cast< K3b::DirItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 5: _t->d->_k_itemsRemoved((*reinterpret_cast< K3b::DirItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 6: _t->d->_k_volumeIdChanged(); break;
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
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DataProjectModel::*)(QList<QUrl> , K3b::DirItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataProjectModel::addUrlsRequested)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DataProjectModel::*)(QList<K3b::DataItem*> , K3b::DirItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataProjectModel::moveItemsRequested)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject K3b::DataProjectModel::staticMetaObject = { {
    &QAbstractItemModel::staticMetaObject,
    qt_meta_stringdata_K3b__DataProjectModel.data,
    qt_meta_data_K3b__DataProjectModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *K3b::DataProjectModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *K3b::DataProjectModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_K3b__DataProjectModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int K3b::DataProjectModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void K3b::DataProjectModel::addUrlsRequested(QList<QUrl> _t1, K3b::DirItem * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void K3b::DataProjectModel::moveItemsRequested(QList<K3b::DataItem*> _t1, K3b::DirItem * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
