/****************************************************************************
** Meta object code from reading C++ file 'k3bimagewritingdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "misc/k3bimagewritingdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'k3bimagewritingdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_K3b__ImageWritingDialog_t {
    QByteArrayData data[9];
    char stringdata0[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_K3b__ImageWritingDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_K3b__ImageWritingDialog_t qt_meta_stringdata_K3b__ImageWritingDialog = {
    {
QT_MOC_LITERAL(0, 0, 23), // "K3b::ImageWritingDialog"
QT_MOC_LITERAL(1, 24, 16), // "slotStartClicked"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 15), // "slotSaveClicked"
QT_MOC_LITERAL(4, 58, 17), // "slotMd5JobPercent"
QT_MOC_LITERAL(5, 76, 18), // "slotMd5JobFinished"
QT_MOC_LITERAL(6, 95, 24), // "slotContextMenuRequested"
QT_MOC_LITERAL(7, 120, 3), // "pos"
QT_MOC_LITERAL(8, 124, 15) // "slotUpdateImage"

    },
    "K3b::ImageWritingDialog\0slotStartClicked\0"
    "\0slotSaveClicked\0slotMd5JobPercent\0"
    "slotMd5JobFinished\0slotContextMenuRequested\0"
    "pos\0slotUpdateImage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_K3b__ImageWritingDialog[] = {

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
       1,    0,   44,    2, 0x0a /* Public */,
       3,    0,   45,    2, 0x0a /* Public */,
       4,    1,   46,    2, 0x0a /* Public */,
       5,    1,   49,    2, 0x0a /* Public */,
       6,    1,   52,    2, 0x0a /* Public */,
       8,    1,   55,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QPoint,    7,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void K3b::ImageWritingDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ImageWritingDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotStartClicked(); break;
        case 1: _t->slotSaveClicked(); break;
        case 2: _t->slotMd5JobPercent((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->slotMd5JobFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->slotContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 5: _t->slotUpdateImage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject K3b::ImageWritingDialog::staticMetaObject = { {
    &InteractionDialog::staticMetaObject,
    qt_meta_stringdata_K3b__ImageWritingDialog.data,
    qt_meta_data_K3b__ImageWritingDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *K3b::ImageWritingDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *K3b::ImageWritingDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_K3b__ImageWritingDialog.stringdata0))
        return static_cast<void*>(this);
    return InteractionDialog::qt_metacast(_clname);
}

int K3b::ImageWritingDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = InteractionDialog::qt_metacall(_c, _id, _a);
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
