/****************************************************************************
** Meta object code from reading C++ file 'k3baudiocdtextwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "projects/k3baudiocdtextwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'k3baudiocdtextwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_K3b__AudioCdTextWidget_t {
    QByteArrayData data[12];
    char stringdata0[160];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_K3b__AudioCdTextWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_K3b__AudioCdTextWidget_t qt_meta_stringdata_K3b__AudioCdTextWidget = {
    {
QT_MOC_LITERAL(0, 0, 22), // "K3b::AudioCdTextWidget"
QT_MOC_LITERAL(1, 23, 10), // "setChecked"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 4), // "load"
QT_MOC_LITERAL(4, 40, 14), // "K3b::AudioDoc*"
QT_MOC_LITERAL(5, 55, 4), // "save"
QT_MOC_LITERAL(6, 60, 13), // "slotCopyTitle"
QT_MOC_LITERAL(7, 74, 17), // "slotCopyPerformer"
QT_MOC_LITERAL(8, 92, 16), // "slotCopyArranger"
QT_MOC_LITERAL(9, 109, 18), // "slotCopySongwriter"
QT_MOC_LITERAL(10, 128, 16), // "slotCopyComposer"
QT_MOC_LITERAL(11, 145, 14) // "slotMoreFields"

    },
    "K3b::AudioCdTextWidget\0setChecked\0\0"
    "load\0K3b::AudioDoc*\0save\0slotCopyTitle\0"
    "slotCopyPerformer\0slotCopyArranger\0"
    "slotCopySongwriter\0slotCopyComposer\0"
    "slotMoreFields"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_K3b__AudioCdTextWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x0a /* Public */,
       3,    1,   62,    2, 0x0a /* Public */,
       5,    1,   65,    2, 0x0a /* Public */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    0,   73,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void K3b::AudioCdTextWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AudioCdTextWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->load((*reinterpret_cast< K3b::AudioDoc*(*)>(_a[1]))); break;
        case 2: _t->save((*reinterpret_cast< K3b::AudioDoc*(*)>(_a[1]))); break;
        case 3: _t->slotCopyTitle(); break;
        case 4: _t->slotCopyPerformer(); break;
        case 5: _t->slotCopyArranger(); break;
        case 6: _t->slotCopySongwriter(); break;
        case 7: _t->slotCopyComposer(); break;
        case 8: _t->slotMoreFields(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject K3b::AudioCdTextWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_K3b__AudioCdTextWidget.data,
    qt_meta_data_K3b__AudioCdTextWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *K3b::AudioCdTextWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *K3b::AudioCdTextWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_K3b__AudioCdTextWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::base_K3bAudioCdTextWidget"))
        return static_cast< Ui::base_K3bAudioCdTextWidget*>(this);
    return QWidget::qt_metacast(_clname);
}

int K3b::AudioCdTextWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
