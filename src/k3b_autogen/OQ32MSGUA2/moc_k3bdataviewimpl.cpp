/****************************************************************************
** Meta object code from reading C++ file 'k3bdataviewimpl.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "projects/k3bdataviewimpl.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'k3bdataviewimpl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_K3b__DataViewImpl_t {
    QByteArrayData data[30];
    char stringdata0[436];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_K3b__DataViewImpl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_K3b__DataViewImpl_t qt_meta_stringdata_K3b__DataViewImpl = {
    {
QT_MOC_LITERAL(0, 0, 17), // "K3b::DataViewImpl"
QT_MOC_LITERAL(1, 18, 14), // "setCurrentRoot"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 46, 5), // "index"
QT_MOC_LITERAL(5, 52, 22), // "slotCurrentRootChanged"
QT_MOC_LITERAL(6, 75, 7), // "newRoot"
QT_MOC_LITERAL(7, 83, 17), // "slotItemActivated"
QT_MOC_LITERAL(8, 101, 10), // "slotNewDir"
QT_MOC_LITERAL(9, 112, 11), // "slotOpenDir"
QT_MOC_LITERAL(10, 124, 9), // "slotClear"
QT_MOC_LITERAL(11, 134, 10), // "slotRemove"
QT_MOC_LITERAL(12, 145, 10), // "slotRename"
QT_MOC_LITERAL(13, 156, 14), // "slotProperties"
QT_MOC_LITERAL(14, 171, 8), // "slotOpen"
QT_MOC_LITERAL(15, 180, 20), // "slotSelectionChanged"
QT_MOC_LITERAL(16, 201, 16), // "slotEnterPressed"
QT_MOC_LITERAL(17, 218, 17), // "slotImportSession"
QT_MOC_LITERAL(18, 236, 24), // "slotClearImportedSession"
QT_MOC_LITERAL(19, 261, 18), // "slotEditBootImages"
QT_MOC_LITERAL(20, 280, 26), // "slotImportedSessionChanged"
QT_MOC_LITERAL(21, 307, 15), // "importedSession"
QT_MOC_LITERAL(22, 323, 20), // "slotAddUrlsRequested"
QT_MOC_LITERAL(23, 344, 11), // "QList<QUrl>"
QT_MOC_LITERAL(24, 356, 4), // "urls"
QT_MOC_LITERAL(25, 361, 13), // "K3b::DirItem*"
QT_MOC_LITERAL(26, 375, 9), // "targetDir"
QT_MOC_LITERAL(27, 385, 22), // "slotMoveItemsRequested"
QT_MOC_LITERAL(28, 408, 21), // "QList<K3b::DataItem*>"
QT_MOC_LITERAL(29, 430, 5) // "items"

    },
    "K3b::DataViewImpl\0setCurrentRoot\0\0"
    "QModelIndex\0index\0slotCurrentRootChanged\0"
    "newRoot\0slotItemActivated\0slotNewDir\0"
    "slotOpenDir\0slotClear\0slotRemove\0"
    "slotRename\0slotProperties\0slotOpen\0"
    "slotSelectionChanged\0slotEnterPressed\0"
    "slotImportSession\0slotClearImportedSession\0"
    "slotEditBootImages\0slotImportedSessionChanged\0"
    "importedSession\0slotAddUrlsRequested\0"
    "QList<QUrl>\0urls\0K3b::DirItem*\0targetDir\0"
    "slotMoveItemsRequested\0QList<K3b::DataItem*>\0"
    "items"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_K3b__DataViewImpl[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  104,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,  107,    2, 0x0a /* Public */,
       7,    1,  110,    2, 0x0a /* Public */,
       8,    0,  113,    2, 0x08 /* Private */,
       9,    0,  114,    2, 0x08 /* Private */,
      10,    0,  115,    2, 0x08 /* Private */,
      11,    0,  116,    2, 0x08 /* Private */,
      12,    0,  117,    2, 0x08 /* Private */,
      13,    0,  118,    2, 0x08 /* Private */,
      14,    0,  119,    2, 0x08 /* Private */,
      15,    0,  120,    2, 0x08 /* Private */,
      16,    0,  121,    2, 0x08 /* Private */,
      17,    0,  122,    2, 0x08 /* Private */,
      18,    0,  123,    2, 0x08 /* Private */,
      19,    0,  124,    2, 0x08 /* Private */,
      20,    1,  125,    2, 0x08 /* Private */,
      22,    2,  128,    2, 0x08 /* Private */,
      27,    2,  133,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    6,
    QMetaType::Void, 0x80000000 | 3,    4,
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
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void, 0x80000000 | 23, 0x80000000 | 25,   24,   26,
    QMetaType::Void, 0x80000000 | 28, 0x80000000 | 25,   29,   26,

       0        // eod
};

void K3b::DataViewImpl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DataViewImpl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setCurrentRoot((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->slotCurrentRootChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->slotItemActivated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->slotNewDir(); break;
        case 4: _t->slotOpenDir(); break;
        case 5: _t->slotClear(); break;
        case 6: _t->slotRemove(); break;
        case 7: _t->slotRename(); break;
        case 8: _t->slotProperties(); break;
        case 9: _t->slotOpen(); break;
        case 10: _t->slotSelectionChanged(); break;
        case 11: _t->slotEnterPressed(); break;
        case 12: _t->slotImportSession(); break;
        case 13: _t->slotClearImportedSession(); break;
        case 14: _t->slotEditBootImages(); break;
        case 15: _t->slotImportedSessionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->slotAddUrlsRequested((*reinterpret_cast< QList<QUrl>(*)>(_a[1])),(*reinterpret_cast< K3b::DirItem*(*)>(_a[2]))); break;
        case 17: _t->slotMoveItemsRequested((*reinterpret_cast< QList<K3b::DataItem*>(*)>(_a[1])),(*reinterpret_cast< K3b::DirItem*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 16:
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
            using _t = void (DataViewImpl::*)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataViewImpl::setCurrentRoot)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject K3b::DataViewImpl::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_K3b__DataViewImpl.data,
    qt_meta_data_K3b__DataViewImpl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *K3b::DataViewImpl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *K3b::DataViewImpl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_K3b__DataViewImpl.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int K3b::DataViewImpl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void K3b::DataViewImpl::setCurrentRoot(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
