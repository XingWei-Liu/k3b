/****************************************************************************
** Meta object code from reading C++ file 'k3baudiodatasourceeditwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "projects/k3baudiodatasourceeditwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'k3baudiodatasourceeditwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_K3b__AudioDataSourceEditWidget_t {
    QByteArrayData data[11];
    char stringdata0[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_K3b__AudioDataSourceEditWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_K3b__AudioDataSourceEditWidget_t qt_meta_stringdata_K3b__AudioDataSourceEditWidget = {
    {
QT_MOC_LITERAL(0, 0, 30), // "K3b::AudioDataSourceEditWidget"
QT_MOC_LITERAL(1, 31, 10), // "loadSource"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 21), // "K3b::AudioDataSource*"
QT_MOC_LITERAL(4, 65, 10), // "saveSource"
QT_MOC_LITERAL(5, 76, 14), // "setStartOffset"
QT_MOC_LITERAL(6, 91, 8), // "K3b::Msf"
QT_MOC_LITERAL(7, 100, 12), // "setEndOffset"
QT_MOC_LITERAL(8, 113, 17), // "slotRangeModified"
QT_MOC_LITERAL(9, 131, 21), // "slotStartOffsetEdited"
QT_MOC_LITERAL(10, 153, 19) // "slotEndOffsetEdited"

    },
    "K3b::AudioDataSourceEditWidget\0"
    "loadSource\0\0K3b::AudioDataSource*\0"
    "saveSource\0setStartOffset\0K3b::Msf\0"
    "setEndOffset\0slotRangeModified\0"
    "slotStartOffsetEdited\0slotEndOffsetEdited"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_K3b__AudioDataSourceEditWidget[] = {

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
       1,    1,   49,    2, 0x0a /* Public */,
       4,    0,   52,    2, 0x0a /* Public */,
       5,    1,   53,    2, 0x0a /* Public */,
       7,    1,   56,    2, 0x0a /* Public */,
       8,    3,   59,    2, 0x08 /* Private */,
       9,    1,   66,    2, 0x08 /* Private */,
      10,    1,   69,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 6, 0x80000000 | 6,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6,    2,

       0        // eod
};

void K3b::AudioDataSourceEditWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AudioDataSourceEditWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loadSource((*reinterpret_cast< K3b::AudioDataSource*(*)>(_a[1]))); break;
        case 1: _t->saveSource(); break;
        case 2: _t->setStartOffset((*reinterpret_cast< const K3b::Msf(*)>(_a[1]))); break;
        case 3: _t->setEndOffset((*reinterpret_cast< const K3b::Msf(*)>(_a[1]))); break;
        case 4: _t->slotRangeModified((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const K3b::Msf(*)>(_a[2])),(*reinterpret_cast< const K3b::Msf(*)>(_a[3]))); break;
        case 5: _t->slotStartOffsetEdited((*reinterpret_cast< const K3b::Msf(*)>(_a[1]))); break;
        case 6: _t->slotEndOffsetEdited((*reinterpret_cast< const K3b::Msf(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject K3b::AudioDataSourceEditWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_K3b__AudioDataSourceEditWidget.data,
    qt_meta_data_K3b__AudioDataSourceEditWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *K3b::AudioDataSourceEditWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *K3b::AudioDataSourceEditWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_K3b__AudioDataSourceEditWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int K3b::AudioDataSourceEditWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
