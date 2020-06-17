/****************************************************************************
** Meta object code from reading C++ file 'k3bdirview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "k3bdirview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'k3bdirview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_K3b__DirView_t {
    QByteArrayData data[19];
    char stringdata0[218];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_K3b__DirView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_K3b__DirView_t qt_meta_stringdata_K3b__DirView = {
    {
QT_MOC_LITERAL(0, 0, 12), // "K3b::DirView"
QT_MOC_LITERAL(1, 13, 10), // "urlEntered"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 14), // "deviceSelected"
QT_MOC_LITERAL(4, 40, 20), // "K3b::Device::Device*"
QT_MOC_LITERAL(5, 61, 10), // "saveConfig"
QT_MOC_LITERAL(6, 72, 12), // "KConfigGroup"
QT_MOC_LITERAL(7, 85, 3), // "grp"
QT_MOC_LITERAL(8, 89, 10), // "readConfig"
QT_MOC_LITERAL(9, 100, 7), // "showUrl"
QT_MOC_LITERAL(10, 108, 10), // "showDevice"
QT_MOC_LITERAL(11, 119, 12), // "showDiskInfo"
QT_MOC_LITERAL(12, 132, 16), // "slotDirActivated"
QT_MOC_LITERAL(13, 149, 3), // "url"
QT_MOC_LITERAL(14, 153, 17), // "slotMountFinished"
QT_MOC_LITERAL(15, 171, 19), // "slotUnmountFinished"
QT_MOC_LITERAL(16, 191, 14), // "showMediumInfo"
QT_MOC_LITERAL(17, 206, 6), // "Medium"
QT_MOC_LITERAL(18, 213, 4) // "home"

    },
    "K3b::DirView\0urlEntered\0\0deviceSelected\0"
    "K3b::Device::Device*\0saveConfig\0"
    "KConfigGroup\0grp\0readConfig\0showUrl\0"
    "showDevice\0showDiskInfo\0slotDirActivated\0"
    "url\0slotMountFinished\0slotUnmountFinished\0"
    "showMediumInfo\0Medium\0home"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_K3b__DirView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       3,    1,   77,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   80,    2, 0x0a /* Public */,
       8,    1,   83,    2, 0x0a /* Public */,
       9,    1,   86,    2, 0x0a /* Public */,
      10,    1,   89,    2, 0x0a /* Public */,
      11,    1,   92,    2, 0x0a /* Public */,
      12,    1,   95,    2, 0x09 /* Protected */,
      14,    1,   98,    2, 0x09 /* Protected */,
      15,    1,  101,    2, 0x09 /* Protected */,
      16,    1,  104,    2, 0x09 /* Protected */,
      18,    0,  107,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QUrl,    2,
    QMetaType::Void, 0x80000000 | 4,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::QUrl,    2,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, QMetaType::QUrl,   13,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 17,    2,
    QMetaType::Void,

       0        // eod
};

void K3b::DirView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DirView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->urlEntered((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 1: _t->deviceSelected((*reinterpret_cast< K3b::Device::Device*(*)>(_a[1]))); break;
        case 2: _t->saveConfig((*reinterpret_cast< KConfigGroup(*)>(_a[1]))); break;
        case 3: _t->readConfig((*reinterpret_cast< const KConfigGroup(*)>(_a[1]))); break;
        case 4: _t->showUrl((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 5: _t->showDevice((*reinterpret_cast< K3b::Device::Device*(*)>(_a[1]))); break;
        case 6: _t->showDiskInfo((*reinterpret_cast< K3b::Device::Device*(*)>(_a[1]))); break;
        case 7: _t->slotDirActivated((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 8: _t->slotMountFinished((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->slotUnmountFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->showMediumInfo((*reinterpret_cast< const Medium(*)>(_a[1]))); break;
        case 11: _t->home(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DirView::*)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DirView::urlEntered)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DirView::*)(K3b::Device::Device * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DirView::deviceSelected)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject K3b::DirView::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_K3b__DirView.data,
    qt_meta_data_K3b__DirView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *K3b::DirView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *K3b::DirView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_K3b__DirView.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int K3b::DirView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void K3b::DirView::urlEntered(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void K3b::DirView::deviceSelected(K3b::Device::Device * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
