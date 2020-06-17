/****************************************************************************
** Meta object code from reading C++ file 'k3bdataprojectinterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "k3bdataprojectinterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'k3bdataprojectinterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_K3b__DataProjectInterface_t {
    QByteArrayData data[21];
    char stringdata0[198];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_K3b__DataProjectInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_K3b__DataProjectInterface_t qt_meta_stringdata_K3b__DataProjectInterface = {
    {
QT_MOC_LITERAL(0, 0, 25), // "K3b::DataProjectInterface"
QT_MOC_LITERAL(1, 26, 15), // "D-Bus Interface"
QT_MOC_LITERAL(2, 42, 19), // "org.k3b.DataProject"
QT_MOC_LITERAL(3, 62, 12), // "createFolder"
QT_MOC_LITERAL(4, 75, 0), // ""
QT_MOC_LITERAL(5, 76, 4), // "name"
QT_MOC_LITERAL(6, 81, 3), // "dir"
QT_MOC_LITERAL(7, 85, 6), // "addUrl"
QT_MOC_LITERAL(8, 92, 3), // "url"
QT_MOC_LITERAL(9, 96, 7), // "addUrls"
QT_MOC_LITERAL(10, 104, 4), // "urls"
QT_MOC_LITERAL(11, 109, 10), // "removeItem"
QT_MOC_LITERAL(12, 120, 4), // "path"
QT_MOC_LITERAL(13, 125, 10), // "renameItem"
QT_MOC_LITERAL(14, 136, 7), // "newName"
QT_MOC_LITERAL(15, 144, 11), // "setVolumeID"
QT_MOC_LITERAL(16, 156, 2), // "id"
QT_MOC_LITERAL(17, 159, 8), // "isFolder"
QT_MOC_LITERAL(18, 168, 8), // "children"
QT_MOC_LITERAL(19, 177, 13), // "setSortWeight"
QT_MOC_LITERAL(20, 191, 6) // "weight"

    },
    "K3b::DataProjectInterface\0D-Bus Interface\0"
    "org.k3b.DataProject\0createFolder\0\0"
    "name\0dir\0addUrl\0url\0addUrls\0urls\0"
    "removeItem\0path\0renameItem\0newName\0"
    "setVolumeID\0id\0isFolder\0children\0"
    "setSortWeight\0weight"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_K3b__DataProjectInterface[] = {

 // content:
       8,       // revision
       0,       // classname
       1,   14, // classinfo
      10,   16, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    2,

 // slots: name, argc, parameters, tag, flags
       3,    1,   66,    4, 0x0a /* Public */,
       3,    2,   69,    4, 0x0a /* Public */,
       7,    2,   74,    4, 0x0a /* Public */,
       9,    2,   79,    4, 0x0a /* Public */,
      11,    1,   84,    4, 0x0a /* Public */,
      13,    2,   87,    4, 0x0a /* Public */,
      15,    1,   92,    4, 0x0a /* Public */,
      17,    1,   95,    4, 0x0a /* Public */,
      18,    1,   98,    4, 0x0a /* Public */,
      19,    2,  101,    4, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Bool, QMetaType::QString,    5,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,    5,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    8,    6,
    QMetaType::Void, QMetaType::QStringList, QMetaType::QString,   10,    6,
    QMetaType::Bool, QMetaType::QString,   12,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,   12,   14,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Bool, QMetaType::QString,   12,
    QMetaType::QStringList, QMetaType::QString,   12,
    QMetaType::Bool, QMetaType::QString, QMetaType::Long,   12,   20,

       0        // eod
};

void K3b::DataProjectInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DataProjectInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->createFolder((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: { bool _r = _t->createFolder((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->addUrl((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->addUrls((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: { bool _r = _t->removeItem((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->renameItem((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->setVolumeID((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: { bool _r = _t->isFolder((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: { QStringList _r = _t->children((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 9: { bool _r = _t->setSortWeight((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< long(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject K3b::DataProjectInterface::staticMetaObject = { {
    &ProjectInterface::staticMetaObject,
    qt_meta_stringdata_K3b__DataProjectInterface.data,
    qt_meta_data_K3b__DataProjectInterface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *K3b::DataProjectInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *K3b::DataProjectInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_K3b__DataProjectInterface.stringdata0))
        return static_cast<void*>(this);
    return ProjectInterface::qt_metacast(_clname);
}

int K3b::DataProjectInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ProjectInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
