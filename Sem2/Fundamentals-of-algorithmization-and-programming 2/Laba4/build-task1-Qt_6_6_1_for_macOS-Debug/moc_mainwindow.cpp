/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../task1/mainwindow.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.1. It"
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

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "updateslot",
    "",
    "on_numberofelemspin_valueChanged",
    "arg1",
    "on_bubbesortbut_clicked",
    "on_heapsortbut_clicked",
    "on_mergesortbut_clicked",
    "on_quicksortbut_clicked",
    "on_searchbut_clicked",
    "on_spinBox_valueChanged",
    "on_stopsearchbut_clicked",
    "on_interpolationsortbut_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[11];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[33];
    char stringdata4[5];
    char stringdata5[24];
    char stringdata6[23];
    char stringdata7[24];
    char stringdata8[24];
    char stringdata9[21];
    char stringdata10[24];
    char stringdata11[25];
    char stringdata12[32];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 10),  // "updateslot"
        QT_MOC_LITERAL(22, 0),  // ""
        QT_MOC_LITERAL(23, 32),  // "on_numberofelemspin_valueChanged"
        QT_MOC_LITERAL(56, 4),  // "arg1"
        QT_MOC_LITERAL(61, 23),  // "on_bubbesortbut_clicked"
        QT_MOC_LITERAL(85, 22),  // "on_heapsortbut_clicked"
        QT_MOC_LITERAL(108, 23),  // "on_mergesortbut_clicked"
        QT_MOC_LITERAL(132, 23),  // "on_quicksortbut_clicked"
        QT_MOC_LITERAL(156, 20),  // "on_searchbut_clicked"
        QT_MOC_LITERAL(177, 23),  // "on_spinBox_valueChanged"
        QT_MOC_LITERAL(201, 24),  // "on_stopsearchbut_clicked"
        QT_MOC_LITERAL(226, 31)   // "on_interpolationsortbut_clicked"
    },
    "MainWindow",
    "updateslot",
    "",
    "on_numberofelemspin_valueChanged",
    "arg1",
    "on_bubbesortbut_clicked",
    "on_heapsortbut_clicked",
    "on_mergesortbut_clicked",
    "on_quicksortbut_clicked",
    "on_searchbut_clicked",
    "on_spinBox_valueChanged",
    "on_stopsearchbut_clicked",
    "on_interpolationsortbut_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

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
       1,    0,   74,    2, 0x08,    1 /* Private */,
       3,    1,   75,    2, 0x08,    2 /* Private */,
       5,    0,   78,    2, 0x08,    4 /* Private */,
       6,    0,   79,    2, 0x08,    5 /* Private */,
       7,    0,   80,    2, 0x08,    6 /* Private */,
       8,    0,   81,    2, 0x08,    7 /* Private */,
       9,    0,   82,    2, 0x08,    8 /* Private */,
      10,    1,   83,    2, 0x08,    9 /* Private */,
      11,    0,   86,    2, 0x08,   11 /* Private */,
      12,    0,   87,    2, 0x08,   12 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'updateslot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_numberofelemspin_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_bubbesortbut_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_heapsortbut_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_mergesortbut_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_quicksortbut_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_searchbut_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_spinBox_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_stopsearchbut_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_interpolationsortbut_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateslot(); break;
        case 1: _t->on_numberofelemspin_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->on_bubbesortbut_clicked(); break;
        case 3: _t->on_heapsortbut_clicked(); break;
        case 4: _t->on_mergesortbut_clicked(); break;
        case 5: _t->on_quicksortbut_clicked(); break;
        case 6: _t->on_searchbut_clicked(); break;
        case 7: _t->on_spinBox_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->on_stopsearchbut_clicked(); break;
        case 9: _t->on_interpolationsortbut_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
