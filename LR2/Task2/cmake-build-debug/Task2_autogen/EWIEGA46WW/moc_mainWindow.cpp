/****************************************************************************
** Meta object code from reading C++ file 'mainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../mainWindow.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainWindow.h' doesn't include <QObject>."
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
    "openDolphin",
    "",
    "onBtn_close_clicked",
    "saveToFile",
    "addToArray",
    "getListOfPmProjects",
    "getEmployeeTaskList",
    "getProjectStaffList",
    "getBanListForEmployee",
    "editSomeThing",
    "sortAll"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN10mainWindowE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   74,    2, 0x09,    1 /* Protected */,
       3,    0,   75,    2, 0x09,    2 /* Protected */,
       4,    0,   76,    2, 0x09,    3 /* Protected */,
       5,    0,   77,    2, 0x09,    4 /* Protected */,
       6,    0,   78,    2, 0x09,    5 /* Protected */,
       7,    0,   79,    2, 0x09,    6 /* Protected */,
       8,    0,   80,    2, 0x09,    7 /* Protected */,
       9,    0,   81,    2, 0x09,    8 /* Protected */,
      10,    0,   82,    2, 0x09,    9 /* Protected */,
      11,    0,   83,    2, 0x09,   10 /* Protected */,

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
        // method 'openDolphin'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onBtn_close_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'saveToFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addToArray'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'getListOfPmProjects'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'getEmployeeTaskList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'getProjectStaffList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'getBanListForEmployee'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'editSomeThing'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sortAll'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void mainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<mainWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->openDolphin(); break;
        case 1: _t->onBtn_close_clicked(); break;
        case 2: _t->saveToFile(); break;
        case 3: _t->addToArray(); break;
        case 4: _t->getListOfPmProjects(); break;
        case 5: _t->getEmployeeTaskList(); break;
        case 6: _t->getProjectStaffList(); break;
        case 7: _t->getBanListForEmployee(); break;
        case 8: _t->editSomeThing(); break;
        case 9: _t->sortAll(); break;
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
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
