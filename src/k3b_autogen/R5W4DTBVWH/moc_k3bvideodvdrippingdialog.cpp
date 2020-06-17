/****************************************************************************
** Meta object code from reading C++ file 'k3bvideodvdrippingdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "rip/videodvd/k3bvideodvdrippingdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'k3bvideodvdrippingdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_K3b__VideoDVDRippingDialog_t {
    QByteArrayData data[10];
    char stringdata0[160];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_K3b__VideoDVDRippingDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_K3b__VideoDVDRippingDialog_t qt_meta_stringdata_K3b__VideoDVDRippingDialog = {
    {
QT_MOC_LITERAL(0, 0, 26), // "K3b::VideoDVDRippingDialog"
QT_MOC_LITERAL(1, 27, 16), // "slotStartClicked"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 19), // "slotUpdateFilenames"
QT_MOC_LITERAL(4, 65, 19), // "slotUpdateFilesizes"
QT_MOC_LITERAL(5, 85, 20), // "slotUpdateVideoSizes"
QT_MOC_LITERAL(6, 106, 21), // "slotAudioModelChanged"
QT_MOC_LITERAL(7, 128, 11), // "QModelIndex"
QT_MOC_LITERAL(8, 140, 7), // "topLeft"
QT_MOC_LITERAL(9, 148, 11) // "bottomRight"

    },
    "K3b::VideoDVDRippingDialog\0slotStartClicked\0"
    "\0slotUpdateFilenames\0slotUpdateFilesizes\0"
    "slotUpdateVideoSizes\0slotAudioModelChanged\0"
    "QModelIndex\0topLeft\0bottomRight"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_K3b__VideoDVDRippingDialog[] = {

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
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    2,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 7,    8,    9,

       0        // eod
};

void K3b::VideoDVDRippingDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VideoDVDRippingDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotStartClicked(); break;
        case 1: _t->slotUpdateFilenames(); break;
        case 2: _t->slotUpdateFilesizes(); break;
        case 3: _t->slotUpdateVideoSizes(); break;
        case 4: _t->slotAudioModelChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject K3b::VideoDVDRippingDialog::staticMetaObject = { {
    &InteractionDialog::staticMetaObject,
    qt_meta_stringdata_K3b__VideoDVDRippingDialog.data,
    qt_meta_data_K3b__VideoDVDRippingDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *K3b::VideoDVDRippingDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *K3b::VideoDVDRippingDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_K3b__VideoDVDRippingDialog.stringdata0))
        return static_cast<void*>(this);
    return InteractionDialog::qt_metacast(_clname);
}

int K3b::VideoDVDRippingDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = InteractionDialog::qt_metacall(_c, _id, _a);
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
