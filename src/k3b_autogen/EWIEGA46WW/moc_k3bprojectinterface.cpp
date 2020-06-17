/****************************************************************************
** Meta object code from reading C++ file 'k3bprojectinterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "k3bprojectinterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'k3bprojectinterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_K3b__ProjectInterface_t {
    QByteArrayData data[17];
    char stringdata0[175];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_K3b__ProjectInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_K3b__ProjectInterface_t qt_meta_stringdata_K3b__ProjectInterface = {
    {
QT_MOC_LITERAL(0, 0, 21), // "K3b::ProjectInterface"
QT_MOC_LITERAL(1, 22, 15), // "D-Bus Interface"
QT_MOC_LITERAL(2, 38, 15), // "org.k3b.Project"
QT_MOC_LITERAL(3, 54, 7), // "addUrls"
QT_MOC_LITERAL(4, 62, 0), // ""
QT_MOC_LITERAL(5, 63, 4), // "urls"
QT_MOC_LITERAL(6, 68, 6), // "addUrl"
QT_MOC_LITERAL(7, 75, 3), // "url"
QT_MOC_LITERAL(8, 79, 4), // "burn"
QT_MOC_LITERAL(9, 84, 10), // "directBurn"
QT_MOC_LITERAL(10, 95, 13), // "setBurnDevice"
QT_MOC_LITERAL(11, 109, 15), // "blockdevicename"
QT_MOC_LITERAL(12, 125, 6), // "length"
QT_MOC_LITERAL(13, 132, 4), // "size"
QT_MOC_LITERAL(14, 137, 15), // "KIO::filesize_t"
QT_MOC_LITERAL(15, 153, 9), // "imagePath"
QT_MOC_LITERAL(16, 163, 11) // "projectType"

    },
    "K3b::ProjectInterface\0D-Bus Interface\0"
    "org.k3b.Project\0addUrls\0\0urls\0addUrl\0"
    "url\0burn\0directBurn\0setBurnDevice\0"
    "blockdevicename\0length\0size\0KIO::filesize_t\0"
    "imagePath\0projectType"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_K3b__ProjectInterface[] = {

 // content:
       8,       // revision
       0,       // classname
       1,   14, // classinfo
       9,   16, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    2,

 // slots: name, argc, parameters, tag, flags
       3,    1,   61,    4, 0x0a /* Public */,
       6,    1,   64,    4, 0x0a /* Public */,
       8,    0,   67,    4, 0x0a /* Public */,
       9,    0,   68,    4, 0x0a /* Public */,
      10,    1,   69,    4, 0x0a /* Public */,
      12,    0,   72,    4, 0x0a /* Public */,
      13,    0,   73,    4, 0x0a /* Public */,
      15,    0,   74,    4, 0x0a /* Public */,
      16,    0,   75,    4, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QStringList,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Int,
    0x80000000 | 14,
    QMetaType::Void,
    QMetaType::QString,

       0        // eod
};

void K3b::ProjectInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ProjectInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addUrls((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 1: _t->addUrl((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->burn(); break;
        case 3: { bool _r = _t->directBurn();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->setBurnDevice((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: { int _r = _t->length();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 6: { KIO::filesize_t _r = _t->size();
            if (_a[0]) *reinterpret_cast< KIO::filesize_t*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->imagePath(); break;
        case 8: { QString _r = _t->projectType();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject K3b::ProjectInterface::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_K3b__ProjectInterface.data,
    qt_meta_data_K3b__ProjectInterface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *K3b::ProjectInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *K3b::ProjectInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_K3b__ProjectInterface.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int K3b::ProjectInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
