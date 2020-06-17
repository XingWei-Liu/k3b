/****************************************************************************
** Meta object code from reading C++ file 'k3bfileview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "k3bfileview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'k3bfileview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_K3b__FileView_t {
    QByteArrayData data[9];
    char stringdata0[87];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_K3b__FileView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_K3b__FileView_t qt_meta_stringdata_K3b__FileView = {
    {
QT_MOC_LITERAL(0, 0, 13), // "K3b::FileView"
QT_MOC_LITERAL(1, 14, 10), // "urlEntered"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 3), // "url"
QT_MOC_LITERAL(4, 30, 10), // "saveConfig"
QT_MOC_LITERAL(5, 41, 12), // "KConfigGroup"
QT_MOC_LITERAL(6, 54, 3), // "grp"
QT_MOC_LITERAL(7, 58, 10), // "readConfig"
QT_MOC_LITERAL(8, 69, 17) // "slotFilterChanged"

    },
    "K3b::FileView\0urlEntered\0\0url\0saveConfig\0"
    "KConfigGroup\0grp\0readConfig\0"
    "slotFilterChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_K3b__FileView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   37,    2, 0x0a /* Public */,
       7,    1,   40,    2, 0x0a /* Public */,
       8,    0,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QUrl,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,

       0        // eod
};

void K3b::FileView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FileView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->urlEntered((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 1: _t->saveConfig((*reinterpret_cast< KConfigGroup(*)>(_a[1]))); break;
        case 2: _t->readConfig((*reinterpret_cast< const KConfigGroup(*)>(_a[1]))); break;
        case 3: _t->slotFilterChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FileView::*)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileView::urlEntered)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject K3b::FileView::staticMetaObject = { {
    &ContentsView::staticMetaObject,
    qt_meta_stringdata_K3b__FileView.data,
    qt_meta_data_K3b__FileView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *K3b::FileView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *K3b::FileView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_K3b__FileView.stringdata0))
        return static_cast<void*>(this);
    return ContentsView::qt_metacast(_clname);
}

int K3b::FileView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ContentsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void K3b::FileView::urlEntered(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
