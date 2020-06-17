/****************************************************************************
** Meta object code from reading C++ file 'k3bwritingmodewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "k3bwritingmodewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'k3bwritingmodewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_K3b__WritingModeWidget_t {
    QByteArrayData data[16];
    char stringdata0[212];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_K3b__WritingModeWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_K3b__WritingModeWidget_t qt_meta_stringdata_K3b__WritingModeWidget = {
    {
QT_MOC_LITERAL(0, 0, 22), // "K3b::WritingModeWidget"
QT_MOC_LITERAL(1, 23, 18), // "writingModeChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 11), // "WritingMode"
QT_MOC_LITERAL(4, 55, 4), // "mode"
QT_MOC_LITERAL(5, 60, 14), // "setWritingMode"
QT_MOC_LITERAL(6, 75, 1), // "m"
QT_MOC_LITERAL(7, 77, 17), // "setSupportedModes"
QT_MOC_LITERAL(8, 95, 12), // "WritingModes"
QT_MOC_LITERAL(9, 108, 5), // "modes"
QT_MOC_LITERAL(10, 114, 9), // "setDevice"
QT_MOC_LITERAL(11, 124, 20), // "K3b::Device::Device*"
QT_MOC_LITERAL(12, 145, 33), // "determineSupportedModesFromMe..."
QT_MOC_LITERAL(13, 179, 6), // "Medium"
QT_MOC_LITERAL(14, 186, 3), // "dev"
QT_MOC_LITERAL(15, 190, 21) // "_k_writingModeChanged"

    },
    "K3b::WritingModeWidget\0writingModeChanged\0"
    "\0WritingMode\0mode\0setWritingMode\0m\0"
    "setSupportedModes\0WritingModes\0modes\0"
    "setDevice\0K3b::Device::Device*\0"
    "determineSupportedModesFromMedium\0"
    "Medium\0dev\0_k_writingModeChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_K3b__WritingModeWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   52,    2, 0x0a /* Public */,
       7,    1,   55,    2, 0x0a /* Public */,
      10,    1,   58,    2, 0x0a /* Public */,
      12,    1,   61,    2, 0x0a /* Public */,
      12,    1,   64,    2, 0x0a /* Public */,
      15,    1,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void, 0x80000000 | 13,    6,
    QMetaType::Void, 0x80000000 | 11,   14,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void K3b::WritingModeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WritingModeWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->writingModeChanged((*reinterpret_cast< WritingMode(*)>(_a[1]))); break;
        case 1: _t->setWritingMode((*reinterpret_cast< WritingMode(*)>(_a[1]))); break;
        case 2: _t->setSupportedModes((*reinterpret_cast< WritingModes(*)>(_a[1]))); break;
        case 3: _t->setDevice((*reinterpret_cast< K3b::Device::Device*(*)>(_a[1]))); break;
        case 4: _t->determineSupportedModesFromMedium((*reinterpret_cast< const Medium(*)>(_a[1]))); break;
        case 5: _t->determineSupportedModesFromMedium((*reinterpret_cast< K3b::Device::Device*(*)>(_a[1]))); break;
        case 6: _t->d->_k_writingModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WritingModeWidget::*)(WritingMode );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WritingModeWidget::writingModeChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject K3b::WritingModeWidget::staticMetaObject = { {
    &IntMapComboBox::staticMetaObject,
    qt_meta_stringdata_K3b__WritingModeWidget.data,
    qt_meta_data_K3b__WritingModeWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *K3b::WritingModeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *K3b::WritingModeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_K3b__WritingModeWidget.stringdata0))
        return static_cast<void*>(this);
    return IntMapComboBox::qt_metacast(_clname);
}

int K3b::WritingModeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = IntMapComboBox::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void K3b::WritingModeWidget::writingModeChanged(WritingMode _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
