/****************************************************************************
** Meta object code from reading C++ file 'k3bmediaselectioncombobox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "k3bmediaselectioncombobox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'k3bmediaselectioncombobox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_K3b__MediaSelectionComboBox_t {
    QByteArrayData data[27];
    char stringdata0[426];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_K3b__MediaSelectionComboBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_K3b__MediaSelectionComboBox_t qt_meta_stringdata_K3b__MediaSelectionComboBox = {
    {
QT_MOC_LITERAL(0, 0, 27), // "K3b::MediaSelectionComboBox"
QT_MOC_LITERAL(1, 28, 16), // "selectionChanged"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 20), // "K3b::Device::Device*"
QT_MOC_LITERAL(4, 67, 8), // "newMedia"
QT_MOC_LITERAL(5, 76, 9), // "newMedium"
QT_MOC_LITERAL(6, 86, 3), // "dev"
QT_MOC_LITERAL(7, 90, 17), // "setSelectedDevice"
QT_MOC_LITERAL(8, 108, 19), // "setWantedMediumType"
QT_MOC_LITERAL(9, 128, 23), // "K3b::Device::MediaTypes"
QT_MOC_LITERAL(10, 152, 4), // "type"
QT_MOC_LITERAL(11, 157, 20), // "setWantedMediumState"
QT_MOC_LITERAL(12, 178, 24), // "K3b::Device::MediaStates"
QT_MOC_LITERAL(13, 203, 5), // "state"
QT_MOC_LITERAL(14, 209, 22), // "setWantedMediumContent"
QT_MOC_LITERAL(15, 232, 27), // "K3b::Medium::MediumContents"
QT_MOC_LITERAL(16, 260, 7), // "content"
QT_MOC_LITERAL(17, 268, 19), // "setWantedMediumSize"
QT_MOC_LITERAL(18, 288, 8), // "K3b::Msf"
QT_MOC_LITERAL(19, 297, 7), // "minSize"
QT_MOC_LITERAL(20, 305, 15), // "setIgnoreDevice"
QT_MOC_LITERAL(21, 321, 17), // "slotMediumChanged"
QT_MOC_LITERAL(22, 339, 24), // "slotDeviceManagerChanged"
QT_MOC_LITERAL(23, 364, 27), // "K3b::Device::DeviceManager*"
QT_MOC_LITERAL(24, 392, 13), // "slotActivated"
QT_MOC_LITERAL(25, 406, 1), // "i"
QT_MOC_LITERAL(26, 408, 17) // "slotUpdateToolTip"

    },
    "K3b::MediaSelectionComboBox\0"
    "selectionChanged\0\0K3b::Device::Device*\0"
    "newMedia\0newMedium\0dev\0setSelectedDevice\0"
    "setWantedMediumType\0K3b::Device::MediaTypes\0"
    "type\0setWantedMediumState\0"
    "K3b::Device::MediaStates\0state\0"
    "setWantedMediumContent\0"
    "K3b::Medium::MediumContents\0content\0"
    "setWantedMediumSize\0K3b::Msf\0minSize\0"
    "setIgnoreDevice\0slotMediumChanged\0"
    "slotDeviceManagerChanged\0"
    "K3b::Device::DeviceManager*\0slotActivated\0"
    "i\0slotUpdateToolTip"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_K3b__MediaSelectionComboBox[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       4,    0,   82,    2, 0x06 /* Public */,
       5,    1,   83,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   86,    2, 0x0a /* Public */,
       8,    1,   89,    2, 0x0a /* Public */,
      11,    1,   92,    2, 0x0a /* Public */,
      14,    1,   95,    2, 0x0a /* Public */,
      17,    1,   98,    2, 0x0a /* Public */,
      20,    1,  101,    2, 0x0a /* Public */,
      21,    1,  104,    2, 0x08 /* Private */,
      22,    1,  107,    2, 0x08 /* Private */,
      24,    1,  110,    2, 0x08 /* Private */,
      26,    1,  113,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, 0x80000000 | 3,    6,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 23,    2,
    QMetaType::Void, QMetaType::Int,   25,
    QMetaType::Void, 0x80000000 | 3,    2,

       0        // eod
};

void K3b::MediaSelectionComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MediaSelectionComboBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectionChanged((*reinterpret_cast< K3b::Device::Device*(*)>(_a[1]))); break;
        case 1: _t->newMedia(); break;
        case 2: _t->newMedium((*reinterpret_cast< K3b::Device::Device*(*)>(_a[1]))); break;
        case 3: _t->setSelectedDevice((*reinterpret_cast< K3b::Device::Device*(*)>(_a[1]))); break;
        case 4: _t->setWantedMediumType((*reinterpret_cast< K3b::Device::MediaTypes(*)>(_a[1]))); break;
        case 5: _t->setWantedMediumState((*reinterpret_cast< K3b::Device::MediaStates(*)>(_a[1]))); break;
        case 6: _t->setWantedMediumContent((*reinterpret_cast< K3b::Medium::MediumContents(*)>(_a[1]))); break;
        case 7: _t->setWantedMediumSize((*reinterpret_cast< const K3b::Msf(*)>(_a[1]))); break;
        case 8: _t->setIgnoreDevice((*reinterpret_cast< K3b::Device::Device*(*)>(_a[1]))); break;
        case 9: _t->slotMediumChanged((*reinterpret_cast< K3b::Device::Device*(*)>(_a[1]))); break;
        case 10: _t->slotDeviceManagerChanged((*reinterpret_cast< K3b::Device::DeviceManager*(*)>(_a[1]))); break;
        case 11: _t->slotActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->slotUpdateToolTip((*reinterpret_cast< K3b::Device::Device*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MediaSelectionComboBox::*)(K3b::Device::Device * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MediaSelectionComboBox::selectionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MediaSelectionComboBox::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MediaSelectionComboBox::newMedia)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MediaSelectionComboBox::*)(K3b::Device::Device * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MediaSelectionComboBox::newMedium)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject K3b::MediaSelectionComboBox::staticMetaObject = { {
    &KComboBox::staticMetaObject,
    qt_meta_stringdata_K3b__MediaSelectionComboBox.data,
    qt_meta_data_K3b__MediaSelectionComboBox,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *K3b::MediaSelectionComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *K3b::MediaSelectionComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_K3b__MediaSelectionComboBox.stringdata0))
        return static_cast<void*>(this);
    return KComboBox::qt_metacast(_clname);
}

int K3b::MediaSelectionComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void K3b::MediaSelectionComboBox::selectionChanged(K3b::Device::Device * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void K3b::MediaSelectionComboBox::newMedia()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void K3b::MediaSelectionComboBox::newMedium(K3b::Device::Device * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
