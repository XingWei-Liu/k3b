/****************************************************************************
** Meta object code from reading C++ file 'k3bvideodvdrippingview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "rip/videodvd/k3bvideodvdrippingview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'k3bvideodvdrippingview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_K3b__VideoDVDRippingView_t {
    QByteArrayData data[10];
    char stringdata0[137];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_K3b__VideoDVDRippingView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_K3b__VideoDVDRippingView_t qt_meta_stringdata_K3b__VideoDVDRippingView = {
    {
QT_MOC_LITERAL(0, 0, 24), // "K3b::VideoDVDRippingView"
QT_MOC_LITERAL(1, 25, 16), // "slotStartRipping"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 15), // "slotContextMenu"
QT_MOC_LITERAL(4, 59, 3), // "pos"
QT_MOC_LITERAL(5, 63, 26), // "slotContextMenuAboutToShow"
QT_MOC_LITERAL(6, 90, 9), // "slotCheck"
QT_MOC_LITERAL(7, 100, 11), // "slotUncheck"
QT_MOC_LITERAL(8, 112, 10), // "slotToggle"
QT_MOC_LITERAL(9, 123, 13) // "slotShowFiles"

    },
    "K3b::VideoDVDRippingView\0slotStartRipping\0"
    "\0slotContextMenu\0pos\0slotContextMenuAboutToShow\0"
    "slotCheck\0slotUncheck\0slotToggle\0"
    "slotShowFiles"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_K3b__VideoDVDRippingView[] = {

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
       3,    1,   50,    2, 0x08 /* Private */,
       5,    0,   53,    2, 0x08 /* Private */,
       6,    0,   54,    2, 0x08 /* Private */,
       7,    0,   55,    2, 0x08 /* Private */,
       8,    0,   56,    2, 0x08 /* Private */,
       9,    0,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void K3b::VideoDVDRippingView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VideoDVDRippingView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotStartRipping(); break;
        case 1: _t->slotContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 2: _t->slotContextMenuAboutToShow(); break;
        case 3: _t->slotCheck(); break;
        case 4: _t->slotUncheck(); break;
        case 5: _t->slotToggle(); break;
        case 6: _t->slotShowFiles(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject K3b::VideoDVDRippingView::staticMetaObject = { {
    &MediaContentsView::staticMetaObject,
    qt_meta_stringdata_K3b__VideoDVDRippingView.data,
    qt_meta_data_K3b__VideoDVDRippingView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *K3b::VideoDVDRippingView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *K3b::VideoDVDRippingView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_K3b__VideoDVDRippingView.stringdata0))
        return static_cast<void*>(this);
    return MediaContentsView::qt_metacast(_clname);
}

int K3b::VideoDVDRippingView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MediaContentsView::qt_metacall(_c, _id, _a);
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
