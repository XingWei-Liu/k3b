/****************************************************************************
** Meta object code from reading C++ file 'k3bfiletreeview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "k3bfiletreeview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'k3bfiletreeview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_K3b__FileTreeView_t {
    QByteArrayData data[15];
    char stringdata0[177];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_K3b__FileTreeView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_K3b__FileTreeView_t qt_meta_stringdata_K3b__FileTreeView = {
    {
QT_MOC_LITERAL(0, 0, 17), // "K3b::FileTreeView"
QT_MOC_LITERAL(1, 18, 9), // "activated"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 3), // "url"
QT_MOC_LITERAL(4, 33, 20), // "K3b::Device::Device*"
QT_MOC_LITERAL(5, 54, 3), // "dev"
QT_MOC_LITERAL(6, 58, 14), // "setSelectedUrl"
QT_MOC_LITERAL(7, 73, 17), // "setSelectedDevice"
QT_MOC_LITERAL(8, 91, 11), // "slotClicked"
QT_MOC_LITERAL(9, 103, 11), // "QModelIndex"
QT_MOC_LITERAL(10, 115, 5), // "index"
QT_MOC_LITERAL(11, 121, 13), // "slotExpandUrl"
QT_MOC_LITERAL(12, 135, 15), // "slotContextMenu"
QT_MOC_LITERAL(13, 151, 3), // "pos"
QT_MOC_LITERAL(14, 155, 21) // "slotAddFilesToProject"

    },
    "K3b::FileTreeView\0activated\0\0url\0"
    "K3b::Device::Device*\0dev\0setSelectedUrl\0"
    "setSelectedDevice\0slotClicked\0QModelIndex\0"
    "index\0slotExpandUrl\0slotContextMenu\0"
    "pos\0slotAddFilesToProject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_K3b__FileTreeView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       1,    1,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   60,    2, 0x0a /* Public */,
       7,    1,   63,    2, 0x0a /* Public */,
       8,    1,   66,    2, 0x08 /* Private */,
      11,    1,   69,    2, 0x08 /* Private */,
      12,    1,   72,    2, 0x08 /* Private */,
      14,    0,   75,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QUrl,    3,
    QMetaType::Void, 0x80000000 | 4,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QUrl,    3,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::QPoint,   13,
    QMetaType::Void,

       0        // eod
};

void K3b::FileTreeView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FileTreeView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activated((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 1: _t->activated((*reinterpret_cast< K3b::Device::Device*(*)>(_a[1]))); break;
        case 2: _t->setSelectedUrl((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 3: _t->setSelectedDevice((*reinterpret_cast< K3b::Device::Device*(*)>(_a[1]))); break;
        case 4: _t->slotClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->slotExpandUrl((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 6: _t->slotContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 7: _t->slotAddFilesToProject(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FileTreeView::*)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileTreeView::activated)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FileTreeView::*)(K3b::Device::Device * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileTreeView::activated)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject K3b::FileTreeView::staticMetaObject = { {
    &QTreeView::staticMetaObject,
    qt_meta_stringdata_K3b__FileTreeView.data,
    qt_meta_data_K3b__FileTreeView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *K3b::FileTreeView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *K3b::FileTreeView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_K3b__FileTreeView.stringdata0))
        return static_cast<void*>(this);
    return QTreeView::qt_metacast(_clname);
}

int K3b::FileTreeView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void K3b::FileTreeView::activated(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void K3b::FileTreeView::activated(K3b::Device::Device * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
