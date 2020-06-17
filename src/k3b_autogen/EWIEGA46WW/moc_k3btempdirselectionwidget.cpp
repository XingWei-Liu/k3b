/****************************************************************************
** Meta object code from reading C++ file 'k3btempdirselectionwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "k3btempdirselectionwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'k3btempdirselectionwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_K3b__TempDirSelectionWidget_t {
    QByteArrayData data[16];
    char stringdata0[215];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_K3b__TempDirSelectionWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_K3b__TempDirSelectionWidget_t qt_meta_stringdata_K3b__TempDirSelectionWidget = {
    {
QT_MOC_LITERAL(0, 0, 27), // "K3b::TempDirSelectionWidget"
QT_MOC_LITERAL(1, 28, 11), // "setTempPath"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 16), // "setSelectionMode"
QT_MOC_LITERAL(4, 58, 4), // "mode"
QT_MOC_LITERAL(5, 63, 13), // "setNeededSize"
QT_MOC_LITERAL(6, 77, 15), // "KIO::filesize_t"
QT_MOC_LITERAL(7, 93, 5), // "bytes"
QT_MOC_LITERAL(8, 99, 23), // "setDefaultImageFileName"
QT_MOC_LITERAL(9, 123, 4), // "name"
QT_MOC_LITERAL(10, 128, 11), // "forceChange"
QT_MOC_LITERAL(11, 140, 10), // "saveConfig"
QT_MOC_LITERAL(12, 151, 10), // "readConfig"
QT_MOC_LITERAL(13, 162, 12), // "KConfigGroup"
QT_MOC_LITERAL(14, 175, 23), // "slotUpdateFreeTempSpace"
QT_MOC_LITERAL(15, 199, 15) // "slotFixTempPath"

    },
    "K3b::TempDirSelectionWidget\0setTempPath\0"
    "\0setSelectionMode\0mode\0setNeededSize\0"
    "KIO::filesize_t\0bytes\0setDefaultImageFileName\0"
    "name\0forceChange\0saveConfig\0readConfig\0"
    "KConfigGroup\0slotUpdateFreeTempSpace\0"
    "slotFixTempPath"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_K3b__TempDirSelectionWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x0a /* Public */,
       3,    1,   67,    2, 0x0a /* Public */,
       5,    1,   70,    2, 0x0a /* Public */,
       8,    2,   73,    2, 0x0a /* Public */,
       8,    1,   78,    2, 0x2a /* Public | MethodCloned */,
      11,    0,   81,    2, 0x0a /* Public */,
      12,    1,   82,    2, 0x0a /* Public */,
      11,    1,   85,    2, 0x0a /* Public */,
      14,    0,   88,    2, 0x08 /* Private */,
      15,    0,   89,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    9,   10,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,    2,
    QMetaType::Void, 0x80000000 | 13,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void K3b::TempDirSelectionWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TempDirSelectionWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setTempPath((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setSelectionMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setNeededSize((*reinterpret_cast< KIO::filesize_t(*)>(_a[1]))); break;
        case 3: _t->setDefaultImageFileName((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->setDefaultImageFileName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->saveConfig(); break;
        case 6: _t->readConfig((*reinterpret_cast< const KConfigGroup(*)>(_a[1]))); break;
        case 7: _t->saveConfig((*reinterpret_cast< KConfigGroup(*)>(_a[1]))); break;
        case 8: _t->slotUpdateFreeTempSpace(); break;
        case 9: _t->slotFixTempPath(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject K3b::TempDirSelectionWidget::staticMetaObject = { {
    &QGroupBox::staticMetaObject,
    qt_meta_stringdata_K3b__TempDirSelectionWidget.data,
    qt_meta_data_K3b__TempDirSelectionWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *K3b::TempDirSelectionWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *K3b::TempDirSelectionWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_K3b__TempDirSelectionWidget.stringdata0))
        return static_cast<void*>(this);
    return QGroupBox::qt_metacast(_clname);
}

int K3b::TempDirSelectionWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGroupBox::qt_metacall(_c, _id, _a);
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
