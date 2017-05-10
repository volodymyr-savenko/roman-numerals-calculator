/****************************************************************************
** Meta object code from reading C++ file 'RomanNumeralsCalculator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stdafx.h"
#include "../../RomanNumeralsCalculator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RomanNumeralsCalculator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_RomanNumeralsCalculator_t {
    QByteArrayData data[3];
    char stringdata0[40];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RomanNumeralsCalculator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RomanNumeralsCalculator_t qt_meta_stringdata_RomanNumeralsCalculator = {
    {
QT_MOC_LITERAL(0, 0, 23), // "RomanNumeralsCalculator"
QT_MOC_LITERAL(1, 24, 14), // "IButtonClicked"
QT_MOC_LITERAL(2, 39, 0) // ""

    },
    "RomanNumeralsCalculator\0IButtonClicked\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RomanNumeralsCalculator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void RomanNumeralsCalculator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RomanNumeralsCalculator *_t = static_cast<RomanNumeralsCalculator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->IButtonClicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject RomanNumeralsCalculator::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_RomanNumeralsCalculator.data,
      qt_meta_data_RomanNumeralsCalculator,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *RomanNumeralsCalculator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RomanNumeralsCalculator::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_RomanNumeralsCalculator.stringdata0))
        return static_cast<void*>(const_cast< RomanNumeralsCalculator*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int RomanNumeralsCalculator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
