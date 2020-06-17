/****************************************************************************
** Meta object code from reading C++ file 'k3bburnprogressdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "k3bburnprogressdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'k3bburnprogressdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_K3b__BurnProgressDialog_t {
    QByteArrayData data[7];
    char stringdata0[119];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_K3b__BurnProgressDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_K3b__BurnProgressDialog_t qt_meta_stringdata_K3b__BurnProgressDialog = {
    {
QT_MOC_LITERAL(0, 0, 23), // "K3b::BurnProgressDialog"
QT_MOC_LITERAL(1, 24, 14), // "slotWriteSpeed"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 31), // "K3b::Device::SpeedMultiplicator"
QT_MOC_LITERAL(4, 72, 16), // "slotBufferStatus"
QT_MOC_LITERAL(5, 89, 16), // "slotDeviceBuffer"
QT_MOC_LITERAL(6, 106, 12) // "slotFinished"

    },
    "K3b::BurnProgressDialog\0slotWriteSpeed\0"
    "\0K3b::Device::SpeedMultiplicator\0"
    "slotBufferStatus\0slotDeviceBuffer\0"
    "slotFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_K3b__BurnProgressDialog[] = {

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
       1,    2,   34,    2, 0x09 /* Protected */,
       4,    1,   39,    2, 0x09 /* Protected */,
       5,    1,   42,    2, 0x09 /* Protected */,
       6,    1,   45,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 3,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void K3b::BurnProgressDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BurnProgressDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotWriteSpeed((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< K3b::Device::SpeedMultiplicator(*)>(_a[2]))); break;
        case 1: _t->slotBufferStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->slotDeviceBuffer((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->slotFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject K3b::BurnProgressDialog::staticMetaObject = { {
    &JobProgressDialog::staticMetaObject,
    qt_meta_stringdata_K3b__BurnProgressDialog.data,
    qt_meta_data_K3b__BurnProgressDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *K3b::BurnProgressDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *K3b::BurnProgressDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_K3b__BurnProgressDialog.stringdata0))
        return static_cast<void*>(this);
    return JobProgressDialog::qt_metacast(_clname);
}

int K3b::BurnProgressDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = JobProgressDialog::qt_metacall(_c, _id, _a);
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
