/****************************************************************************
** Meta object code from reading C++ file 'k3bcddbpatternwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "rip/k3bcddbpatternwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'k3bcddbpatternwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_K3b__CddbPatternWidget_t {
    QByteArrayData data[8];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_K3b__CddbPatternWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_K3b__CddbPatternWidget_t qt_meta_stringdata_K3b__CddbPatternWidget = {
    {
QT_MOC_LITERAL(0, 0, 22), // "K3b::CddbPatternWidget"
QT_MOC_LITERAL(1, 23, 7), // "changed"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 10), // "loadConfig"
QT_MOC_LITERAL(4, 43, 12), // "KConfigGroup"
QT_MOC_LITERAL(5, 56, 10), // "saveConfig"
QT_MOC_LITERAL(6, 67, 21), // "slotSeeSpecialStrings"
QT_MOC_LITERAL(7, 89, 27) // "slotSeeConditionalInclusion"

    },
    "K3b::CddbPatternWidget\0changed\0\0"
    "loadConfig\0KConfigGroup\0saveConfig\0"
    "slotSeeSpecialStrings\0slotSeeConditionalInclusion"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_K3b__CddbPatternWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   40,    2, 0x0a /* Public */,
       5,    1,   43,    2, 0x0a /* Public */,
       6,    0,   46,    2, 0x08 /* Private */,
       7,    0,   47,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void K3b::CddbPatternWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CddbPatternWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->loadConfig((*reinterpret_cast< const KConfigGroup(*)>(_a[1]))); break;
        case 2: _t->saveConfig((*reinterpret_cast< KConfigGroup(*)>(_a[1]))); break;
        case 3: _t->slotSeeSpecialStrings(); break;
        case 4: _t->slotSeeConditionalInclusion(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CddbPatternWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CddbPatternWidget::changed)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject K3b::CddbPatternWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_K3b__CddbPatternWidget.data,
    qt_meta_data_K3b__CddbPatternWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *K3b::CddbPatternWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *K3b::CddbPatternWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_K3b__CddbPatternWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::base_K3bCddbPatternWidget"))
        return static_cast< Ui::base_K3bCddbPatternWidget*>(this);
    return QWidget::qt_metacast(_clname);
}

int K3b::CddbPatternWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void K3b::CddbPatternWidget::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
