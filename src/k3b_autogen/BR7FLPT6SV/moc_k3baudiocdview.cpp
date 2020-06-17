/****************************************************************************
** Meta object code from reading C++ file 'k3baudiocdview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "rip/k3baudiocdview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'k3baudiocdview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_K3b__AudioCdView_t {
    QByteArrayData data[19];
    char stringdata0[275];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_K3b__AudioCdView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_K3b__AudioCdView_t qt_meta_stringdata_K3b__AudioCdView = {
    {
QT_MOC_LITERAL(0, 0, 16), // "K3b::AudioCdView"
QT_MOC_LITERAL(1, 17, 10), // "loadCdInfo"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 9), // "queryCddb"
QT_MOC_LITERAL(4, 39, 10), // "readCdText"
QT_MOC_LITERAL(5, 50, 15), // "slotContextMenu"
QT_MOC_LITERAL(6, 66, 26), // "slotContextMenuAboutToShow"
QT_MOC_LITERAL(7, 93, 25), // "slotTrackSelectionChanged"
QT_MOC_LITERAL(8, 119, 19), // "slotSaveCddbLocally"
QT_MOC_LITERAL(9, 139, 17), // "slotEditTrackCddb"
QT_MOC_LITERAL(10, 157, 17), // "slotEditAlbumCddb"
QT_MOC_LITERAL(11, 175, 8), // "startRip"
QT_MOC_LITERAL(12, 184, 9), // "slotCheck"
QT_MOC_LITERAL(13, 194, 11), // "slotUncheck"
QT_MOC_LITERAL(14, 206, 10), // "slotToggle"
QT_MOC_LITERAL(15, 217, 16), // "slotShowDataPart"
QT_MOC_LITERAL(16, 234, 15), // "slotCddbChanged"
QT_MOC_LITERAL(17, 250, 20), // "K3b::Device::Device*"
QT_MOC_LITERAL(18, 271, 3) // "dev"

    },
    "K3b::AudioCdView\0loadCdInfo\0\0queryCddb\0"
    "readCdText\0slotContextMenu\0"
    "slotContextMenuAboutToShow\0"
    "slotTrackSelectionChanged\0slotSaveCddbLocally\0"
    "slotEditTrackCddb\0slotEditAlbumCddb\0"
    "startRip\0slotCheck\0slotUncheck\0"
    "slotToggle\0slotShowDataPart\0slotCddbChanged\0"
    "K3b::Device::Device*\0dev"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_K3b__AudioCdView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x0a /* Public */,
       3,    0,   90,    2, 0x0a /* Public */,
       4,    0,   91,    2, 0x0a /* Public */,
       5,    1,   92,    2, 0x08 /* Private */,
       6,    0,   95,    2, 0x08 /* Private */,
       7,    0,   96,    2, 0x08 /* Private */,
       8,    0,   97,    2, 0x08 /* Private */,
       9,    0,   98,    2, 0x08 /* Private */,
      10,    0,   99,    2, 0x08 /* Private */,
      11,    0,  100,    2, 0x08 /* Private */,
      12,    0,  101,    2, 0x08 /* Private */,
      13,    0,  102,    2, 0x08 /* Private */,
      14,    0,  103,    2, 0x08 /* Private */,
      15,    0,  104,    2, 0x08 /* Private */,
      16,    1,  105,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17,   18,

       0        // eod
};

void K3b::AudioCdView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AudioCdView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loadCdInfo(); break;
        case 1: _t->queryCddb(); break;
        case 2: _t->readCdText(); break;
        case 3: _t->slotContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 4: _t->slotContextMenuAboutToShow(); break;
        case 5: _t->slotTrackSelectionChanged(); break;
        case 6: _t->slotSaveCddbLocally(); break;
        case 7: _t->slotEditTrackCddb(); break;
        case 8: _t->slotEditAlbumCddb(); break;
        case 9: _t->startRip(); break;
        case 10: _t->slotCheck(); break;
        case 11: _t->slotUncheck(); break;
        case 12: _t->slotToggle(); break;
        case 13: _t->slotShowDataPart(); break;
        case 14: _t->slotCddbChanged((*reinterpret_cast< K3b::Device::Device*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject K3b::AudioCdView::staticMetaObject = { {
    &MediaContentsView::staticMetaObject,
    qt_meta_stringdata_K3b__AudioCdView.data,
    qt_meta_data_K3b__AudioCdView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *K3b::AudioCdView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *K3b::AudioCdView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_K3b__AudioCdView.stringdata0))
        return static_cast<void*>(this);
    return MediaContentsView::qt_metacast(_clname);
}

int K3b::AudioCdView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MediaContentsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
