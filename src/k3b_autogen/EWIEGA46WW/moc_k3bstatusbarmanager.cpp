/****************************************************************************
** Meta object code from reading C++ file 'k3bstatusbarmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "k3bstatusbarmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'k3bstatusbarmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_K3b__StatusBarManager_t {
    QByteArrayData data[10];
    char stringdata0[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_K3b__StatusBarManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_K3b__StatusBarManager_t qt_meta_stringdata_K3b__StatusBarManager = {
    {
QT_MOC_LITERAL(0, 0, 21), // "K3b::StatusBarManager"
QT_MOC_LITERAL(1, 22, 6), // "update"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 20), // "showActionStatusText"
QT_MOC_LITERAL(4, 51, 4), // "text"
QT_MOC_LITERAL(5, 56, 21), // "clearActionStatusText"
QT_MOC_LITERAL(6, 78, 24), // "slotActiveProjectChanged"
QT_MOC_LITERAL(7, 103, 9), // "K3b::Doc*"
QT_MOC_LITERAL(8, 113, 3), // "doc"
QT_MOC_LITERAL(9, 117, 22) // "slotUpdateProjectStats"

    },
    "K3b::StatusBarManager\0update\0\0"
    "showActionStatusText\0text\0"
    "clearActionStatusText\0slotActiveProjectChanged\0"
    "K3b::Doc*\0doc\0slotUpdateProjectStats"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_K3b__StatusBarManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    1,   40,    2, 0x08 /* Private */,
       5,    0,   43,    2, 0x08 /* Private */,
       6,    1,   44,    2, 0x08 /* Private */,
       9,    0,   47,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,

       0        // eod
};

void K3b::StatusBarManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StatusBarManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->update(); break;
        case 1: _t->showActionStatusText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->clearActionStatusText(); break;
        case 3: _t->slotActiveProjectChanged((*reinterpret_cast< K3b::Doc*(*)>(_a[1]))); break;
        case 4: _t->slotUpdateProjectStats(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject K3b::StatusBarManager::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_K3b__StatusBarManager.data,
    qt_meta_data_K3b__StatusBarManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *K3b::StatusBarManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *K3b::StatusBarManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_K3b__StatusBarManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int K3b::StatusBarManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
