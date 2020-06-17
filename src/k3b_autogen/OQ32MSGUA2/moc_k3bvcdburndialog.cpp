/****************************************************************************
** Meta object code from reading C++ file 'k3bvcdburndialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "projects/k3bvcdburndialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'k3bvcdburndialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_K3b__VcdBurnDialog_t {
    QByteArrayData data[9];
    char stringdata0[158];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_K3b__VcdBurnDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_K3b__VcdBurnDialog_t qt_meta_stringdata_K3b__VcdBurnDialog = {
    {
QT_MOC_LITERAL(0, 0, 18), // "K3b::VcdBurnDialog"
QT_MOC_LITERAL(1, 19, 16), // "slotStartClicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 15), // "slotGapsChecked"
QT_MOC_LITERAL(4, 53, 19), // "slotSpinVolumeCount"
QT_MOC_LITERAL(5, 73, 18), // "slotVcdTypeClicked"
QT_MOC_LITERAL(6, 92, 28), // "K3b::VcdOptions::MPEGVersion"
QT_MOC_LITERAL(7, 121, 21), // "slotCdiSupportChecked"
QT_MOC_LITERAL(8, 143, 14) // "slotAutoDetect"

    },
    "K3b::VcdBurnDialog\0slotStartClicked\0"
    "\0slotGapsChecked\0slotSpinVolumeCount\0"
    "slotVcdTypeClicked\0K3b::VcdOptions::MPEGVersion\0"
    "slotCdiSupportChecked\0slotAutoDetect"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_K3b__VcdBurnDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x09 /* Protected */,
       3,    1,   45,    2, 0x09 /* Protected */,
       4,    0,   48,    2, 0x09 /* Protected */,
       5,    1,   49,    2, 0x09 /* Protected */,
       7,    1,   52,    2, 0x09 /* Protected */,
       8,    1,   55,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void K3b::VcdBurnDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VcdBurnDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotStartClicked(); break;
        case 1: _t->slotGapsChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->slotSpinVolumeCount(); break;
        case 3: _t->slotVcdTypeClicked((*reinterpret_cast< K3b::VcdOptions::MPEGVersion(*)>(_a[1]))); break;
        case 4: _t->slotCdiSupportChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->slotAutoDetect((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject K3b::VcdBurnDialog::staticMetaObject = { {
    &ProjectBurnDialog::staticMetaObject,
    qt_meta_stringdata_K3b__VcdBurnDialog.data,
    qt_meta_data_K3b__VcdBurnDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *K3b::VcdBurnDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *K3b::VcdBurnDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_K3b__VcdBurnDialog.stringdata0))
        return static_cast<void*>(this);
    return ProjectBurnDialog::qt_metacast(_clname);
}

int K3b::VcdBurnDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ProjectBurnDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
