/****************************************************************************
** Meta object code from reading C++ file 'k3bvideocdview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "rip/k3bvideocdview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'k3bvideocdview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_K3b__VideoCdView_t {
    QByteArrayData data[18];
    char stringdata0[224];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_K3b__VideoCdView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_K3b__VideoCdView_t qt_meta_stringdata_K3b__VideoCdView = {
    {
QT_MOC_LITERAL(0, 0, 16), // "K3b::VideoCdView"
QT_MOC_LITERAL(1, 17, 15), // "slotContextMenu"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 3), // "pos"
QT_MOC_LITERAL(4, 38, 25), // "slotTrackSelectionChanged"
QT_MOC_LITERAL(5, 64, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(6, 81, 7), // "current"
QT_MOC_LITERAL(7, 89, 8), // "previous"
QT_MOC_LITERAL(8, 98, 16), // "slotStateChanged"
QT_MOC_LITERAL(9, 115, 4), // "item"
QT_MOC_LITERAL(10, 120, 6), // "column"
QT_MOC_LITERAL(11, 127, 23), // "slotVideoCdInfoFinished"
QT_MOC_LITERAL(12, 151, 8), // "startRip"
QT_MOC_LITERAL(13, 160, 12), // "slotCheckAll"
QT_MOC_LITERAL(14, 173, 14), // "slotUncheckAll"
QT_MOC_LITERAL(15, 188, 9), // "slotCheck"
QT_MOC_LITERAL(16, 198, 11), // "slotUncheck"
QT_MOC_LITERAL(17, 210, 13) // "slotViewFiles"

    },
    "K3b::VideoCdView\0slotContextMenu\0\0pos\0"
    "slotTrackSelectionChanged\0QTreeWidgetItem*\0"
    "current\0previous\0slotStateChanged\0"
    "item\0column\0slotVideoCdInfoFinished\0"
    "startRip\0slotCheckAll\0slotUncheckAll\0"
    "slotCheck\0slotUncheck\0slotViewFiles"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_K3b__VideoCdView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x08 /* Private */,
       4,    2,   67,    2, 0x08 /* Private */,
       8,    2,   72,    2, 0x08 /* Private */,
      11,    1,   77,    2, 0x08 /* Private */,
      12,    0,   80,    2, 0x08 /* Private */,
      13,    0,   81,    2, 0x08 /* Private */,
      14,    0,   82,    2, 0x08 /* Private */,
      15,    0,   83,    2, 0x08 /* Private */,
      16,    0,   84,    2, 0x08 /* Private */,
      17,    0,   85,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    3,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 5,    6,    7,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int,    9,   10,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void K3b::VideoCdView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VideoCdView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 1: _t->slotTrackSelectionChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 2: _t->slotStateChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->slotVideoCdInfoFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->startRip(); break;
        case 5: _t->slotCheckAll(); break;
        case 6: _t->slotUncheckAll(); break;
        case 7: _t->slotCheck(); break;
        case 8: _t->slotUncheck(); break;
        case 9: _t->slotViewFiles(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject K3b::VideoCdView::staticMetaObject = { {
    &MediaContentsView::staticMetaObject,
    qt_meta_stringdata_K3b__VideoCdView.data,
    qt_meta_data_K3b__VideoCdView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *K3b::VideoCdView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *K3b::VideoCdView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_K3b__VideoCdView.stringdata0))
        return static_cast<void*>(this);
    return MediaContentsView::qt_metacast(_clname);
}

int K3b::VideoCdView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MediaContentsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
