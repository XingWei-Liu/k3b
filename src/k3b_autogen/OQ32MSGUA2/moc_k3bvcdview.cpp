/****************************************************************************
** Meta object code from reading C++ file 'k3bvcdview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "projects/k3bvcdview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'k3bvcdview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_K3b__VcdView_t {
    QByteArrayData data[13];
    char stringdata0[178];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_K3b__VcdView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_K3b__VcdView_t qt_meta_stringdata_K3b__VcdView = {
    {
QT_MOC_LITERAL(0, 0, 12), // "K3b::VcdView"
QT_MOC_LITERAL(1, 13, 19), // "slotLabel_CDClicked"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 21), // "slotLabel_pathClicked"
QT_MOC_LITERAL(4, 56, 12), // "slotOpenfile"
QT_MOC_LITERAL(5, 69, 11), // "slotSetting"
QT_MOC_LITERAL(6, 81, 13), // "slotStartBurn"
QT_MOC_LITERAL(7, 95, 20), // "slotSelectionChanged"
QT_MOC_LITERAL(8, 116, 14), // "slotProperties"
QT_MOC_LITERAL(9, 131, 10), // "slotRemove"
QT_MOC_LITERAL(10, 142, 17), // "slotItemActivated"
QT_MOC_LITERAL(11, 160, 11), // "QModelIndex"
QT_MOC_LITERAL(12, 172, 5) // "index"

    },
    "K3b::VcdView\0slotLabel_CDClicked\0\0"
    "slotLabel_pathClicked\0slotOpenfile\0"
    "slotSetting\0slotStartBurn\0"
    "slotSelectionChanged\0slotProperties\0"
    "slotRemove\0slotItemActivated\0QModelIndex\0"
    "index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_K3b__VcdView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x0a /* Public */,
       3,    0,   60,    2, 0x0a /* Public */,
       4,    0,   61,    2, 0x0a /* Public */,
       5,    0,   62,    2, 0x0a /* Public */,
       6,    0,   63,    2, 0x0a /* Public */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    1,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,

       0        // eod
};

void K3b::VcdView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VcdView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotLabel_CDClicked(); break;
        case 1: _t->slotLabel_pathClicked(); break;
        case 2: _t->slotOpenfile(); break;
        case 3: _t->slotSetting(); break;
        case 4: _t->slotStartBurn(); break;
        case 5: _t->slotSelectionChanged(); break;
        case 6: _t->slotProperties(); break;
        case 7: _t->slotRemove(); break;
        case 8: _t->slotItemActivated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject K3b::VcdView::staticMetaObject = { {
    &View::staticMetaObject,
    qt_meta_stringdata_K3b__VcdView.data,
    qt_meta_data_K3b__VcdView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *K3b::VcdView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *K3b::VcdView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_K3b__VcdView.stringdata0))
        return static_cast<void*>(this);
    return View::qt_metacast(_clname);
}

int K3b::VcdView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = View::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
