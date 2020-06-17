/****************************************************************************
** Meta object code from reading C++ file 'k3bview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "projects/k3bview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'k3bview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_K3b__View_t {
    QByteArrayData data[8];
    char stringdata0[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_K3b__View_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_K3b__View_t qt_meta_stringdata_K3b__View = {
    {
QT_MOC_LITERAL(0, 0, 9), // "K3b::View"
QT_MOC_LITERAL(1, 10, 8), // "slotBurn"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 14), // "slotProperties"
QT_MOC_LITERAL(4, 35, 6), // "addUrl"
QT_MOC_LITERAL(5, 42, 7), // "addUrls"
QT_MOC_LITERAL(6, 50, 11), // "QList<QUrl>"
QT_MOC_LITERAL(7, 62, 23) // "slotPluginButtonClicked"

    },
    "K3b::View\0slotBurn\0\0slotProperties\0"
    "addUrl\0addUrls\0QList<QUrl>\0"
    "slotPluginButtonClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_K3b__View[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x0a /* Public */,
       4,    1,   41,    2, 0x0a /* Public */,
       5,    1,   44,    2, 0x0a /* Public */,
       7,    0,   47,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void,

       0        // eod
};

void K3b::View::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<View *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotBurn(); break;
        case 1: _t->slotProperties(); break;
        case 2: _t->addUrl((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 3: _t->addUrls((*reinterpret_cast< const QList<QUrl>(*)>(_a[1]))); break;
        case 4: _t->slotPluginButtonClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QUrl> >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject K3b::View::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_K3b__View.data,
    qt_meta_data_K3b__View,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *K3b::View::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *K3b::View::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_K3b__View.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "KXMLGUIClient"))
        return static_cast< KXMLGUIClient*>(this);
    return QWidget::qt_metacast(_clname);
}

int K3b::View::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
