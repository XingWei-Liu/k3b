/****************************************************************************
** Meta object code from reading C++ file 'k3bthemedheader.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "k3bthemedheader.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'k3bthemedheader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_K3b__ThemedHeader_t {
    QByteArrayData data[13];
    char stringdata0[156];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_K3b__ThemedHeader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_K3b__ThemedHeader_t qt_meta_stringdata_K3b__ThemedHeader = {
    {
QT_MOC_LITERAL(0, 0, 17), // "K3b::ThemedHeader"
QT_MOC_LITERAL(1, 18, 8), // "setTitle"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 5), // "title"
QT_MOC_LITERAL(4, 34, 8), // "subtitle"
QT_MOC_LITERAL(5, 43, 11), // "setSubTitle"
QT_MOC_LITERAL(6, 55, 12), // "setAlignment"
QT_MOC_LITERAL(7, 68, 13), // "Qt::Alignment"
QT_MOC_LITERAL(8, 82, 9), // "alignment"
QT_MOC_LITERAL(9, 92, 13), // "setLeftPixmap"
QT_MOC_LITERAL(10, 106, 17), // "Theme::PixmapType"
QT_MOC_LITERAL(11, 124, 14), // "setRightPixmap"
QT_MOC_LITERAL(12, 139, 16) // "slotThemeChanged"

    },
    "K3b::ThemedHeader\0setTitle\0\0title\0"
    "subtitle\0setSubTitle\0setAlignment\0"
    "Qt::Alignment\0alignment\0setLeftPixmap\0"
    "Theme::PixmapType\0setRightPixmap\0"
    "slotThemeChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_K3b__ThemedHeader[] = {

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
       1,    2,   49,    2, 0x0a /* Public */,
       1,    1,   54,    2, 0x2a /* Public | MethodCloned */,
       5,    1,   57,    2, 0x0a /* Public */,
       6,    1,   60,    2, 0x0a /* Public */,
       9,    1,   63,    2, 0x0a /* Public */,
      11,    1,   66,    2, 0x0a /* Public */,
      12,    0,   69,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void,

       0        // eod
};

void K3b::ThemedHeader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ThemedHeader *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setTitle((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->setTitle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setSubTitle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->setAlignment((*reinterpret_cast< Qt::Alignment(*)>(_a[1]))); break;
        case 4: _t->setLeftPixmap((*reinterpret_cast< Theme::PixmapType(*)>(_a[1]))); break;
        case 5: _t->setRightPixmap((*reinterpret_cast< Theme::PixmapType(*)>(_a[1]))); break;
        case 6: _t->slotThemeChanged(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject K3b::ThemedHeader::staticMetaObject = { {
    &QFrame::staticMetaObject,
    qt_meta_stringdata_K3b__ThemedHeader.data,
    qt_meta_data_K3b__ThemedHeader,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *K3b::ThemedHeader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *K3b::ThemedHeader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_K3b__ThemedHeader.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int K3b::ThemedHeader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
