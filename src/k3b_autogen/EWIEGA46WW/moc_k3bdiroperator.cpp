/****************************************************************************
** Meta object code from reading C++ file 'k3bdiroperator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "k3bdiroperator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'k3bdiroperator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_K3b__DirOperator_t {
    QByteArrayData data[6];
    char stringdata0[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_K3b__DirOperator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_K3b__DirOperator_t qt_meta_stringdata_K3b__DirOperator = {
    {
QT_MOC_LITERAL(0, 0, 16), // "K3b::DirOperator"
QT_MOC_LITERAL(1, 17, 21), // "slotAddFilesToProject"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 17), // "extendContextMenu"
QT_MOC_LITERAL(4, 58, 9), // "KFileItem"
QT_MOC_LITERAL(5, 68, 6) // "QMenu*"

    },
    "K3b::DirOperator\0slotAddFilesToProject\0"
    "\0extendContextMenu\0KFileItem\0QMenu*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_K3b__DirOperator[] = {

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
       1,    0,   24,    2, 0x0a /* Public */,
       3,    2,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 5,    2,    2,

       0        // eod
};

void K3b::DirOperator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DirOperator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotAddFilesToProject(); break;
        case 1: _t->extendContextMenu((*reinterpret_cast< const KFileItem(*)>(_a[1])),(*reinterpret_cast< QMenu*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KFileItem >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject K3b::DirOperator::staticMetaObject = { {
    &KDirOperator::staticMetaObject,
    qt_meta_stringdata_K3b__DirOperator.data,
    qt_meta_data_K3b__DirOperator,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *K3b::DirOperator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *K3b::DirOperator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_K3b__DirOperator.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "KBookmarkOwner"))
        return static_cast< KBookmarkOwner*>(this);
    return KDirOperator::qt_metacast(_clname);
}

int K3b::DirOperator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDirOperator::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
