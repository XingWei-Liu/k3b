/****************************************************************************
** Meta object code from reading C++ file 'k3bdatadirtreeview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "projects/k3bdatadirtreeview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'k3bdatadirtreeview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_K3b__DataDirTreeView_t {
    QByteArrayData data[15];
    char stringdata0[206];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_K3b__DataDirTreeView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_K3b__DataDirTreeView_t qt_meta_stringdata_K3b__DataDirTreeView = {
    {
QT_MOC_LITERAL(0, 0, 20), // "K3b::DataDirTreeView"
QT_MOC_LITERAL(1, 21, 11), // "dirSelected"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 13), // "K3b::DirItem*"
QT_MOC_LITERAL(4, 48, 13), // "setCurrentDir"
QT_MOC_LITERAL(5, 62, 20), // "slotSelectionChanged"
QT_MOC_LITERAL(6, 83, 14), // "QItemSelection"
QT_MOC_LITERAL(7, 98, 8), // "selected"
QT_MOC_LITERAL(8, 107, 20), // "slotAddUrlsRequested"
QT_MOC_LITERAL(9, 128, 11), // "QList<QUrl>"
QT_MOC_LITERAL(10, 140, 4), // "urls"
QT_MOC_LITERAL(11, 145, 9), // "targetDir"
QT_MOC_LITERAL(12, 155, 22), // "slotMoveItemsRequested"
QT_MOC_LITERAL(13, 178, 21), // "QList<K3b::DataItem*>"
QT_MOC_LITERAL(14, 200, 5) // "items"

    },
    "K3b::DataDirTreeView\0dirSelected\0\0"
    "K3b::DirItem*\0setCurrentDir\0"
    "slotSelectionChanged\0QItemSelection\0"
    "selected\0slotAddUrlsRequested\0QList<QUrl>\0"
    "urls\0targetDir\0slotMoveItemsRequested\0"
    "QList<K3b::DataItem*>\0items"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_K3b__DataDirTreeView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   42,    2, 0x0a /* Public */,
       5,    2,   45,    2, 0x08 /* Private */,
       8,    2,   50,    2, 0x08 /* Private */,
      12,    2,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 6,    7,    2,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 3,   10,   11,
    QMetaType::Void, 0x80000000 | 13, 0x80000000 | 3,   14,   11,

       0        // eod
};

void K3b::DataDirTreeView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DataDirTreeView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dirSelected((*reinterpret_cast< K3b::DirItem*(*)>(_a[1]))); break;
        case 1: _t->setCurrentDir((*reinterpret_cast< K3b::DirItem*(*)>(_a[1]))); break;
        case 2: _t->slotSelectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 3: _t->slotAddUrlsRequested((*reinterpret_cast< QList<QUrl>(*)>(_a[1])),(*reinterpret_cast< K3b::DirItem*(*)>(_a[2]))); break;
        case 4: _t->slotMoveItemsRequested((*reinterpret_cast< QList<K3b::DataItem*>(*)>(_a[1])),(*reinterpret_cast< K3b::DirItem*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QItemSelection >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QUrl> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DataDirTreeView::*)(K3b::DirItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataDirTreeView::dirSelected)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject K3b::DataDirTreeView::staticMetaObject = { {
    &QTreeView::staticMetaObject,
    qt_meta_stringdata_K3b__DataDirTreeView.data,
    qt_meta_data_K3b__DataDirTreeView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *K3b::DataDirTreeView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *K3b::DataDirTreeView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_K3b__DataDirTreeView.stringdata0))
        return static_cast<void*>(this);
    return QTreeView::qt_metacast(_clname);
}

int K3b::DataDirTreeView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void K3b::DataDirTreeView::dirSelected(K3b::DirItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
