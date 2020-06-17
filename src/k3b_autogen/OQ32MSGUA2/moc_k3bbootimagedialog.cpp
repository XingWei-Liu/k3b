/****************************************************************************
** Meta object code from reading C++ file 'k3bbootimagedialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "projects/k3bbootimagedialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'k3bbootimagedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_K3b__BootImageDialog_t {
    QByteArrayData data[11];
    char stringdata0[167];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_K3b__BootImageDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_K3b__BootImageDialog_t qt_meta_stringdata_K3b__BootImageDialog = {
    {
QT_MOC_LITERAL(0, 0, 20), // "K3b::BootImageDialog"
QT_MOC_LITERAL(1, 21, 16), // "slotNewBootImage"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 19), // "slotDeleteBootImage"
QT_MOC_LITERAL(4, 59, 17), // "slotToggleOptions"
QT_MOC_LITERAL(5, 77, 18), // "slotCurrentChanged"
QT_MOC_LITERAL(6, 96, 11), // "QModelIndex"
QT_MOC_LITERAL(7, 108, 7), // "current"
QT_MOC_LITERAL(8, 116, 8), // "previous"
QT_MOC_LITERAL(9, 125, 18), // "slotOptionsChanged"
QT_MOC_LITERAL(10, 144, 22) // "slotNoEmulationToggled"

    },
    "K3b::BootImageDialog\0slotNewBootImage\0"
    "\0slotDeleteBootImage\0slotToggleOptions\0"
    "slotCurrentChanged\0QModelIndex\0current\0"
    "previous\0slotOptionsChanged\0"
    "slotNoEmulationToggled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_K3b__BootImageDialog[] = {

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
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    2,   47,    2, 0x08 /* Private */,
       9,    0,   52,    2, 0x08 /* Private */,
      10,    1,   53,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 6,    7,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void K3b::BootImageDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BootImageDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotNewBootImage(); break;
        case 1: _t->slotDeleteBootImage(); break;
        case 2: _t->slotToggleOptions(); break;
        case 3: _t->slotCurrentChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 4: _t->slotOptionsChanged(); break;
        case 5: _t->slotNoEmulationToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject K3b::BootImageDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_K3b__BootImageDialog.data,
    qt_meta_data_K3b__BootImageDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *K3b::BootImageDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *K3b::BootImageDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_K3b__BootImageDialog.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::base_K3bBootImageDialog"))
        return static_cast< Ui::base_K3bBootImageDialog*>(this);
    return QDialog::qt_metacast(_clname);
}

int K3b::BootImageDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
