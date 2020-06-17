/****************************************************************************
** Meta object code from reading C++ file 'k3bfillstatusdisplay.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "projects/k3bfillstatusdisplay.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'k3bfillstatusdisplay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_K3b__FillStatusDisplayWidget_t {
    QByteArrayData data[8];
    char stringdata0[80];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_K3b__FillStatusDisplayWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_K3b__FillStatusDisplayWidget_t qt_meta_stringdata_K3b__FillStatusDisplayWidget = {
    {
QT_MOC_LITERAL(0, 0, 28), // "K3b::FillStatusDisplayWidget"
QT_MOC_LITERAL(1, 29, 11), // "contextMenu"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 11), // "setShowTime"
QT_MOC_LITERAL(4, 54, 1), // "b"
QT_MOC_LITERAL(5, 56, 9), // "setCdSize"
QT_MOC_LITERAL(6, 66, 8), // "K3b::Msf"
QT_MOC_LITERAL(7, 75, 4) // "size"

    },
    "K3b::FillStatusDisplayWidget\0contextMenu\0"
    "\0setShowTime\0b\0setCdSize\0K3b::Msf\0"
    "size"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_K3b__FillStatusDisplayWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   32,    2, 0x0a /* Public */,
       5,    1,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPoint,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void K3b::FillStatusDisplayWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FillStatusDisplayWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->contextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 1: _t->setShowTime((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setCdSize((*reinterpret_cast< const K3b::Msf(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FillStatusDisplayWidget::*)(const QPoint & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FillStatusDisplayWidget::contextMenu)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject K3b::FillStatusDisplayWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_K3b__FillStatusDisplayWidget.data,
    qt_meta_data_K3b__FillStatusDisplayWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *K3b::FillStatusDisplayWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *K3b::FillStatusDisplayWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_K3b__FillStatusDisplayWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int K3b::FillStatusDisplayWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void K3b::FillStatusDisplayWidget::contextMenu(const QPoint & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_K3b__FillStatusDisplay_t {
    QByteArrayData data[24];
    char stringdata0[345];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_K3b__FillStatusDisplay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_K3b__FillStatusDisplay_t qt_meta_stringdata_K3b__FillStatusDisplay = {
    {
QT_MOC_LITERAL(0, 0, 22), // "K3b::FillStatusDisplay"
QT_MOC_LITERAL(1, 23, 8), // "showSize"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 8), // "showTime"
QT_MOC_LITERAL(4, 42, 12), // "slotAutoSize"
QT_MOC_LITERAL(5, 55, 13), // "slot74Minutes"
QT_MOC_LITERAL(6, 69, 13), // "slot80Minutes"
QT_MOC_LITERAL(7, 83, 14), // "slot100Minutes"
QT_MOC_LITERAL(8, 98, 12), // "slotDvd4_7GB"
QT_MOC_LITERAL(9, 111, 18), // "slotDvdDoubleLayer"
QT_MOC_LITERAL(10, 130, 9), // "slotWhy44"
QT_MOC_LITERAL(11, 140, 8), // "slotBD25"
QT_MOC_LITERAL(12, 149, 8), // "slotBD50"
QT_MOC_LITERAL(13, 158, 14), // "slotCustomSize"
QT_MOC_LITERAL(14, 173, 21), // "slotMenuButtonClicked"
QT_MOC_LITERAL(15, 195, 13), // "slotPopupMenu"
QT_MOC_LITERAL(16, 209, 17), // "slotDetermineSize"
QT_MOC_LITERAL(17, 227, 14), // "slotDocChanged"
QT_MOC_LITERAL(18, 242, 17), // "slotMediumChanged"
QT_MOC_LITERAL(19, 260, 20), // "K3b::Device::Device*"
QT_MOC_LITERAL(20, 281, 3), // "dev"
QT_MOC_LITERAL(21, 285, 17), // "slotUpdateDisplay"
QT_MOC_LITERAL(22, 303, 20), // "slotLoadUserDefaults"
QT_MOC_LITERAL(23, 324, 20) // "slotSaveUserDefaults"

    },
    "K3b::FillStatusDisplay\0showSize\0\0"
    "showTime\0slotAutoSize\0slot74Minutes\0"
    "slot80Minutes\0slot100Minutes\0slotDvd4_7GB\0"
    "slotDvdDoubleLayer\0slotWhy44\0slotBD25\0"
    "slotBD50\0slotCustomSize\0slotMenuButtonClicked\0"
    "slotPopupMenu\0slotDetermineSize\0"
    "slotDocChanged\0slotMediumChanged\0"
    "K3b::Device::Device*\0dev\0slotUpdateDisplay\0"
    "slotLoadUserDefaults\0slotSaveUserDefaults"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_K3b__FillStatusDisplay[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  114,    2, 0x0a /* Public */,
       3,    0,  115,    2, 0x0a /* Public */,
       4,    0,  116,    2, 0x08 /* Private */,
       5,    0,  117,    2, 0x08 /* Private */,
       6,    0,  118,    2, 0x08 /* Private */,
       7,    0,  119,    2, 0x08 /* Private */,
       8,    0,  120,    2, 0x08 /* Private */,
       9,    0,  121,    2, 0x08 /* Private */,
      10,    0,  122,    2, 0x08 /* Private */,
      11,    0,  123,    2, 0x08 /* Private */,
      12,    0,  124,    2, 0x08 /* Private */,
      13,    0,  125,    2, 0x08 /* Private */,
      14,    0,  126,    2, 0x08 /* Private */,
      15,    1,  127,    2, 0x08 /* Private */,
      16,    0,  130,    2, 0x08 /* Private */,
      17,    0,  131,    2, 0x08 /* Private */,
      18,    1,  132,    2, 0x08 /* Private */,
      21,    0,  135,    2, 0x08 /* Private */,
      22,    0,  136,    2, 0x08 /* Private */,
      23,    0,  137,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void K3b::FillStatusDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FillStatusDisplay *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showSize(); break;
        case 1: _t->showTime(); break;
        case 2: _t->slotAutoSize(); break;
        case 3: _t->slot74Minutes(); break;
        case 4: _t->slot80Minutes(); break;
        case 5: _t->slot100Minutes(); break;
        case 6: _t->slotDvd4_7GB(); break;
        case 7: _t->slotDvdDoubleLayer(); break;
        case 8: _t->slotWhy44(); break;
        case 9: _t->slotBD25(); break;
        case 10: _t->slotBD50(); break;
        case 11: _t->slotCustomSize(); break;
        case 12: _t->slotMenuButtonClicked(); break;
        case 13: _t->slotPopupMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 14: _t->slotDetermineSize(); break;
        case 15: _t->slotDocChanged(); break;
        case 16: _t->slotMediumChanged((*reinterpret_cast< K3b::Device::Device*(*)>(_a[1]))); break;
        case 17: _t->slotUpdateDisplay(); break;
        case 18: _t->slotLoadUserDefaults(); break;
        case 19: _t->slotSaveUserDefaults(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject K3b::FillStatusDisplay::staticMetaObject = { {
    &QFrame::staticMetaObject,
    qt_meta_stringdata_K3b__FillStatusDisplay.data,
    qt_meta_data_K3b__FillStatusDisplay,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *K3b::FillStatusDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *K3b::FillStatusDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_K3b__FillStatusDisplay.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int K3b::FillStatusDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 20;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
