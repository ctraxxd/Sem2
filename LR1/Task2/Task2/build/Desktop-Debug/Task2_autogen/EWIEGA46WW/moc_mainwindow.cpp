/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN10mainWindowE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN10mainWindowE = QtMocHelpers::stringData(
    "mainWindow",
    "selectFigure",
    "",
    "closeButtonClicked",
    "upSize",
    "downSize",
    "rotateLeft",
    "rotateRight",
    "star",
    "on_sizeP_pressed",
    "on_sizeP_released",
    "on_sizeM_pressed",
    "on_sizeM_released",
    "on_rotateL_pressed",
    "on_rotateL_released",
    "on_rotateR_pressed",
    "on_rotateR_released"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN10mainWindowE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  104,    2, 0x08,    1 /* Private */,
       3,    0,  105,    2, 0x08,    2 /* Private */,
       4,    0,  106,    2, 0x08,    3 /* Private */,
       5,    0,  107,    2, 0x08,    4 /* Private */,
       6,    0,  108,    2, 0x08,    5 /* Private */,
       7,    0,  109,    2, 0x08,    6 /* Private */,
       8,    0,  110,    2, 0x08,    7 /* Private */,
       9,    0,  111,    2, 0x08,    8 /* Private */,
      10,    0,  112,    2, 0x08,    9 /* Private */,
      11,    0,  113,    2, 0x08,   10 /* Private */,
      12,    0,  114,    2, 0x08,   11 /* Private */,
      13,    0,  115,    2, 0x08,   12 /* Private */,
      14,    0,  116,    2, 0x08,   13 /* Private */,
      15,    0,  117,    2, 0x08,   14 /* Private */,
      16,    0,  118,    2, 0x08,   15 /* Private */,

 // slots: parameters
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject mainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ZN10mainWindowE.offsetsAndSizes,
    qt_meta_data_ZN10mainWindowE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN10mainWindowE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<mainWindow, std::true_type>,
        // method 'selectFigure'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'closeButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'upSize'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'downSize'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'rotateLeft'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'rotateRight'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'star'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_sizeP_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_sizeP_released'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_sizeM_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_sizeM_released'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_rotateL_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_rotateL_released'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_rotateR_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_rotateR_released'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void mainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<mainWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->selectFigure(); break;
        case 1: _t->closeButtonClicked(); break;
        case 2: _t->upSize(); break;
        case 3: _t->downSize(); break;
        case 4: _t->rotateLeft(); break;
        case 5: _t->rotateRight(); break;
        case 6: _t->star(); break;
        case 7: _t->on_sizeP_pressed(); break;
        case 8: _t->on_sizeP_released(); break;
        case 9: _t->on_sizeM_pressed(); break;
        case 10: _t->on_sizeM_released(); break;
        case 11: _t->on_rotateL_pressed(); break;
        case 12: _t->on_rotateL_released(); break;
        case 13: _t->on_rotateR_pressed(); break;
        case 14: _t->on_rotateR_released(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *mainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN10mainWindowE.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int mainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
