/****************************************************************************
** Meta object code from reading C++ file 'k3baudiotracksplitdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "projects/k3baudiotracksplitdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'k3baudiotracksplitdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_K3b__AudioTrackSplitDialog_t {
    QByteArrayData data[12];
    char stringdata0[150];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_K3b__AudioTrackSplitDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_K3b__AudioTrackSplitDialog_t qt_meta_stringdata_K3b__AudioTrackSplitDialog = {
    {
QT_MOC_LITERAL(0, 0, 26), // "K3b::AudioTrackSplitDialog"
QT_MOC_LITERAL(1, 27, 17), // "slotRangeModified"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 8), // "K3b::Msf"
QT_MOC_LITERAL(4, 55, 5), // "start"
QT_MOC_LITERAL(5, 61, 18), // "slotMsfEditChanged"
QT_MOC_LITERAL(6, 80, 3), // "msf"
QT_MOC_LITERAL(7, 84, 25), // "slotRangeSelectionChanged"
QT_MOC_LITERAL(8, 110, 13), // "slotSplitHere"
QT_MOC_LITERAL(9, 124, 15), // "slotRemoveRange"
QT_MOC_LITERAL(10, 140, 7), // "splitAt"
QT_MOC_LITERAL(11, 148, 1) // "p"

    },
    "K3b::AudioTrackSplitDialog\0slotRangeModified\0"
    "\0K3b::Msf\0start\0slotMsfEditChanged\0"
    "msf\0slotRangeSelectionChanged\0"
    "slotSplitHere\0slotRemoveRange\0splitAt\0"
    "p"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_K3b__AudioTrackSplitDialog[] = {

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
       1,    3,   44,    2, 0x08 /* Private */,
       5,    1,   51,    2, 0x08 /* Private */,
       7,    1,   54,    2, 0x08 /* Private */,
       8,    0,   57,    2, 0x08 /* Private */,
       9,    0,   58,    2, 0x08 /* Private */,
      10,    1,   59,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 3, 0x80000000 | 3,    2,    4,    2,
    QMetaType::Void, 0x80000000 | 3,    6,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   11,

       0        // eod
};

void K3b::AudioTrackSplitDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AudioTrackSplitDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotRangeModified((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const K3b::Msf(*)>(_a[2])),(*reinterpret_cast< const K3b::Msf(*)>(_a[3]))); break;
        case 1: _t->slotMsfEditChanged((*reinterpret_cast< const K3b::Msf(*)>(_a[1]))); break;
        case 2: _t->slotRangeSelectionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->slotSplitHere(); break;
        case 4: _t->slotRemoveRange(); break;
        case 5: _t->splitAt((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject K3b::AudioTrackSplitDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_K3b__AudioTrackSplitDialog.data,
    qt_meta_data_K3b__AudioTrackSplitDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *K3b::AudioTrackSplitDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *K3b::AudioTrackSplitDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_K3b__AudioTrackSplitDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int K3b::AudioTrackSplitDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
