/****************************************************************************
** Meta object code from reading C++ file 'dcontrolbolastipos.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dcontrolbolastipos.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dcontrolbolastipos.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DControlBolasTipos_t {
    QByteArrayData data[8];
    char stringdata0[98];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DControlBolasTipos_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DControlBolasTipos_t qt_meta_stringdata_DControlBolasTipos = {
    {
QT_MOC_LITERAL(0, 0, 18), // "DControlBolasTipos"
QT_MOC_LITERAL(1, 19, 9), // "slotTipo1"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 9), // "slotTipo2"
QT_MOC_LITERAL(4, 40, 9), // "slotTipo3"
QT_MOC_LITERAL(5, 50, 17), // "slotListaImpactos"
QT_MOC_LITERAL(6, 68, 14), // "slotTablaTipos"
QT_MOC_LITERAL(7, 83, 14) // "slotActualizar"

    },
    "DControlBolasTipos\0slotTipo1\0\0slotTipo2\0"
    "slotTipo3\0slotListaImpactos\0slotTablaTipos\0"
    "slotActualizar"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DControlBolasTipos[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,
       3,    0,   45,    2, 0x0a /* Public */,
       4,    0,   46,    2, 0x0a /* Public */,
       5,    0,   47,    2, 0x0a /* Public */,
       6,    0,   48,    2, 0x0a /* Public */,
       7,    0,   49,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DControlBolasTipos::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DControlBolasTipos *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotTipo1(); break;
        case 1: _t->slotTipo2(); break;
        case 2: _t->slotTipo3(); break;
        case 3: _t->slotListaImpactos(); break;
        case 4: _t->slotTablaTipos(); break;
        case 5: _t->slotActualizar(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject DControlBolasTipos::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_DControlBolasTipos.data,
    qt_meta_data_DControlBolasTipos,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DControlBolasTipos::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DControlBolasTipos::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DControlBolasTipos.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::DControlBolasTipos"))
        return static_cast< Ui::DControlBolasTipos*>(this);
    return QDialog::qt_metacast(_clname);
}

int DControlBolasTipos::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
