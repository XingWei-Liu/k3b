/****************************************************************************
** Meta object code from reading C++ file 'k3baudioprojectinterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "k3baudioprojectinterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'k3baudioprojectinterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_K3b__AudioProjectInterface_t {
    QByteArrayData data[14];
    char stringdata0[169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_K3b__AudioProjectInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_K3b__AudioProjectInterface_t qt_meta_stringdata_K3b__AudioProjectInterface = {
    {
QT_MOC_LITERAL(0, 0, 26), // "K3b::AudioProjectInterface"
QT_MOC_LITERAL(1, 27, 15), // "D-Bus Interface"
QT_MOC_LITERAL(2, 43, 20), // "org.k3b.AudioProject"
QT_MOC_LITERAL(3, 64, 10), // "trackCount"
QT_MOC_LITERAL(4, 75, 0), // ""
QT_MOC_LITERAL(5, 76, 5), // "title"
QT_MOC_LITERAL(6, 82, 6), // "artist"
QT_MOC_LITERAL(7, 89, 10), // "trackTitle"
QT_MOC_LITERAL(8, 100, 8), // "trackNum"
QT_MOC_LITERAL(9, 109, 11), // "trackArtist"
QT_MOC_LITERAL(10, 121, 8), // "setTitle"
QT_MOC_LITERAL(11, 130, 9), // "setArtist"
QT_MOC_LITERAL(12, 140, 13), // "setTrackTitle"
QT_MOC_LITERAL(13, 154, 14) // "setTrackArtist"

    },
    "K3b::AudioProjectInterface\0D-Bus Interface\0"
    "org.k3b.AudioProject\0trackCount\0\0title\0"
    "artist\0trackTitle\0trackNum\0trackArtist\0"
    "setTitle\0setArtist\0setTrackTitle\0"
    "setTrackArtist"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_K3b__AudioProjectInterface[] = {

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
       3,    0,   61,    4, 0x0a /* Public */,
       5,    0,   62,    4, 0x0a /* Public */,
       6,    0,   63,    4, 0x0a /* Public */,
       7,    1,   64,    4, 0x0a /* Public */,
       9,    1,   67,    4, 0x0a /* Public */,
      10,    1,   70,    4, 0x0a /* Public */,
      11,    1,   73,    4, 0x0a /* Public */,
      12,    2,   76,    4, 0x0a /* Public */,
      13,    2,   81,    4, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Int,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString, QMetaType::Int,    8,
    QMetaType::QString, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    8,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    8,    6,

       0        // eod
};

void K3b::AudioProjectInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AudioProjectInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { int _r = _t->trackCount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 1: { QString _r = _t->title();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 2: { QString _r = _t->artist();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 3: { QString _r = _t->trackTitle((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 4: { QString _r = _t->trackArtist((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->setTitle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->setArtist((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->setTrackTitle((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 8: _t->setTrackArtist((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject K3b::AudioProjectInterface::staticMetaObject = { {
    &ProjectInterface::staticMetaObject,
    qt_meta_stringdata_K3b__AudioProjectInterface.data,
    qt_meta_data_K3b__AudioProjectInterface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *K3b::AudioProjectInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *K3b::AudioProjectInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_K3b__AudioProjectInterface.stringdata0))
        return static_cast<void*>(this);
    return ProjectInterface::qt_metacast(_clname);
}

int K3b::AudioProjectInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ProjectInterface::qt_metacall(_c, _id, _a);
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
