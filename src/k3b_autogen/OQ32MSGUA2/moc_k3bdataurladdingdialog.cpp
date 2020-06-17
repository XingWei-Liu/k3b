/****************************************************************************
** Meta object code from reading C++ file 'k3bdataurladdingdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "projects/k3bdataurladdingdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'k3bdataurladdingdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_K3b__DataUrlAddingDialog_t {
    QByteArrayData data[9];
    char stringdata0[134];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_K3b__DataUrlAddingDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_K3b__DataUrlAddingDialog_t qt_meta_stringdata_K3b__DataUrlAddingDialog = {
    {
QT_MOC_LITERAL(0, 0, 24), // "K3b::DataUrlAddingDialog"
QT_MOC_LITERAL(1, 25, 16), // "slotStartAddUrls"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 22), // "slotStartCopyMoveItems"
QT_MOC_LITERAL(4, 66, 11), // "slotAddUrls"
QT_MOC_LITERAL(5, 78, 17), // "slotCopyMoveItems"
QT_MOC_LITERAL(6, 96, 6), // "reject"
QT_MOC_LITERAL(7, 103, 15), // "slotDirSizeDone"
QT_MOC_LITERAL(8, 119, 14) // "updateProgress"

    },
    "K3b::DataUrlAddingDialog\0slotStartAddUrls\0"
    "\0slotStartCopyMoveItems\0slotAddUrls\0"
    "slotCopyMoveItems\0reject\0slotDirSizeDone\0"
    "updateProgress"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_K3b__DataUrlAddingDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    1,   54,    2, 0x08 /* Private */,
       8,    0,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,

       0        // eod
};

void K3b::DataUrlAddingDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DataUrlAddingDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotStartAddUrls(); break;
        case 1: _t->slotStartCopyMoveItems(); break;
        case 2: _t->slotAddUrls(); break;
        case 3: _t->slotCopyMoveItems(); break;
        case 4: _t->reject(); break;
        case 5: _t->slotDirSizeDone((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->updateProgress(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject K3b::DataUrlAddingDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_K3b__DataUrlAddingDialog.data,
    qt_meta_data_K3b__DataUrlAddingDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *K3b::DataUrlAddingDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *K3b::DataUrlAddingDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_K3b__DataUrlAddingDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int K3b::DataUrlAddingDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
