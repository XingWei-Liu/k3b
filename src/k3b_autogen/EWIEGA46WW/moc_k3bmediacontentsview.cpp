/****************************************************************************
** Meta object code from reading C++ file 'k3bmediacontentsview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "k3bmediacontentsview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'k3bmediacontentsview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_K3b__MediaContentsView_t {
    QByteArrayData data[12];
    char stringdata0[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_K3b__MediaContentsView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_K3b__MediaContentsView_t qt_meta_stringdata_K3b__MediaContentsView = {
    {
QT_MOC_LITERAL(0, 0, 22), // "K3b::MediaContentsView"
QT_MOC_LITERAL(1, 23, 6), // "reload"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 20), // "K3b::Device::Device*"
QT_MOC_LITERAL(4, 52, 3), // "dev"
QT_MOC_LITERAL(5, 56, 11), // "K3b::Medium"
QT_MOC_LITERAL(6, 68, 1), // "m"
QT_MOC_LITERAL(7, 70, 13), // "setAutoReload"
QT_MOC_LITERAL(8, 84, 1), // "b"
QT_MOC_LITERAL(9, 86, 17), // "enableInteraction"
QT_MOC_LITERAL(10, 104, 6), // "enable"
QT_MOC_LITERAL(11, 111, 17) // "slotMediumChanged"

    },
    "K3b::MediaContentsView\0reload\0\0"
    "K3b::Device::Device*\0dev\0K3b::Medium\0"
    "m\0setAutoReload\0b\0enableInteraction\0"
    "enable\0slotMediumChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_K3b__MediaContentsView[] = {

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
       1,    1,   45,    2, 0x0a /* Public */,
       1,    1,   48,    2, 0x0a /* Public */,
       7,    1,   51,    2, 0x0a /* Public */,
       9,    1,   54,    2, 0x0a /* Public */,
      11,    1,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, 0x80000000 | 3,    2,

       0        // eod
};

void K3b::MediaContentsView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MediaContentsView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->reload(); break;
        case 1: _t->reload((*reinterpret_cast< K3b::Device::Device*(*)>(_a[1]))); break;
        case 2: _t->reload((*reinterpret_cast< const K3b::Medium(*)>(_a[1]))); break;
        case 3: _t->setAutoReload((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->enableInteraction((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->slotMediumChanged((*reinterpret_cast< K3b::Device::Device*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject K3b::MediaContentsView::staticMetaObject = { {
    &ContentsView::staticMetaObject,
    qt_meta_stringdata_K3b__MediaContentsView.data,
    qt_meta_data_K3b__MediaContentsView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *K3b::MediaContentsView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *K3b::MediaContentsView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_K3b__MediaContentsView.stringdata0))
        return static_cast<void*>(this);
    return ContentsView::qt_metacast(_clname);
}

int K3b::MediaContentsView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ContentsView::qt_metacall(_c, _id, _a);
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
