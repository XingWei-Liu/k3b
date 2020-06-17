/****************************************************************************
** Meta object code from reading C++ file 'k3bdatamultisessionimportdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "projects/k3bdatamultisessionimportdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'k3bdatamultisessionimportdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_K3b__DataMultisessionImportDialog_t {
    QByteArrayData data[12];
    char stringdata0[147];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_K3b__DataMultisessionImportDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_K3b__DataMultisessionImportDialog_t qt_meta_stringdata_K3b__DataMultisessionImportDialog = {
    {
QT_MOC_LITERAL(0, 0, 33), // "K3b::DataMultisessionImportDi..."
QT_MOC_LITERAL(1, 34, 6), // "slotOk"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 10), // "slotCancel"
QT_MOC_LITERAL(4, 53, 13), // "importSession"
QT_MOC_LITERAL(5, 67, 13), // "K3b::DataDoc*"
QT_MOC_LITERAL(6, 81, 3), // "doc"
QT_MOC_LITERAL(7, 85, 20), // "slotSelectionChanged"
QT_MOC_LITERAL(8, 106, 11), // "updateMedia"
QT_MOC_LITERAL(9, 118, 9), // "addMedium"
QT_MOC_LITERAL(10, 128, 11), // "K3b::Medium"
QT_MOC_LITERAL(11, 140, 6) // "medium"

    },
    "K3b::DataMultisessionImportDialog\0"
    "slotOk\0\0slotCancel\0importSession\0"
    "K3b::DataDoc*\0doc\0slotSelectionChanged\0"
    "updateMedia\0addMedium\0K3b::Medium\0"
    "medium"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_K3b__DataMultisessionImportDialog[] = {

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
       4,    1,   46,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,
       8,    0,   50,    2, 0x08 /* Private */,
       9,    1,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,

       0        // eod
};

void K3b::DataMultisessionImportDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DataMultisessionImportDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotOk(); break;
        case 1: _t->slotCancel(); break;
        case 2: _t->importSession((*reinterpret_cast< K3b::DataDoc*(*)>(_a[1]))); break;
        case 3: _t->slotSelectionChanged(); break;
        case 4: _t->updateMedia(); break;
        case 5: _t->addMedium((*reinterpret_cast< const K3b::Medium(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject K3b::DataMultisessionImportDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_K3b__DataMultisessionImportDialog.data,
    qt_meta_data_K3b__DataMultisessionImportDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *K3b::DataMultisessionImportDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *K3b::DataMultisessionImportDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_K3b__DataMultisessionImportDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int K3b::DataMultisessionImportDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
