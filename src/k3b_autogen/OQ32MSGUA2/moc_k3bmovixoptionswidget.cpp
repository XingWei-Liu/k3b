/****************************************************************************
** Meta object code from reading C++ file 'k3bmovixoptionswidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "projects/k3bmovixoptionswidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'k3bmovixoptionswidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_K3b__MovixOptionsWidget_t {
    QByteArrayData data[11];
    char stringdata0[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_K3b__MovixOptionsWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_K3b__MovixOptionsWidget_t qt_meta_stringdata_K3b__MovixOptionsWidget = {
    {
QT_MOC_LITERAL(0, 0, 23), // "K3b::MovixOptionsWidget"
QT_MOC_LITERAL(1, 24, 4), // "init"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 20), // "const K3b::MovixBin*"
QT_MOC_LITERAL(4, 51, 12), // "readSettings"
QT_MOC_LITERAL(5, 64, 14), // "K3b::MovixDoc*"
QT_MOC_LITERAL(6, 79, 12), // "saveSettings"
QT_MOC_LITERAL(7, 92, 10), // "loadConfig"
QT_MOC_LITERAL(8, 103, 12), // "KConfigGroup"
QT_MOC_LITERAL(9, 116, 1), // "c"
QT_MOC_LITERAL(10, 118, 10) // "saveConfig"

    },
    "K3b::MovixOptionsWidget\0init\0\0"
    "const K3b::MovixBin*\0readSettings\0"
    "K3b::MovixDoc*\0saveSettings\0loadConfig\0"
    "KConfigGroup\0c\0saveConfig"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_K3b__MovixOptionsWidget[] = {

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
       1,    1,   39,    2, 0x0a /* Public */,
       4,    1,   42,    2, 0x0a /* Public */,
       6,    1,   45,    2, 0x0a /* Public */,
       7,    1,   48,    2, 0x0a /* Public */,
      10,    1,   51,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void K3b::MovixOptionsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MovixOptionsWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->init((*reinterpret_cast< const K3b::MovixBin*(*)>(_a[1]))); break;
        case 1: _t->readSettings((*reinterpret_cast< K3b::MovixDoc*(*)>(_a[1]))); break;
        case 2: _t->saveSettings((*reinterpret_cast< K3b::MovixDoc*(*)>(_a[1]))); break;
        case 3: _t->loadConfig((*reinterpret_cast< const KConfigGroup(*)>(_a[1]))); break;
        case 4: _t->saveConfig((*reinterpret_cast< KConfigGroup(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject K3b::MovixOptionsWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_K3b__MovixOptionsWidget.data,
    qt_meta_data_K3b__MovixOptionsWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *K3b::MovixOptionsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *K3b::MovixOptionsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_K3b__MovixOptionsWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::base_K3bMovixOptionsWidget"))
        return static_cast< Ui::base_K3bMovixOptionsWidget*>(this);
    return QWidget::qt_metacast(_clname);
}

int K3b::MovixOptionsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
