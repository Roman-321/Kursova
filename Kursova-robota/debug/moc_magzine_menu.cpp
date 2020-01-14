/****************************************************************************
** Meta object code from reading C++ file 'magzine_menu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Kursova/magzine_menu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'magzine_menu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Magzine_menu_t {
    QByteArrayData data[13];
    char stringdata0[206];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Magzine_menu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Magzine_menu_t qt_meta_stringdata_Magzine_menu = {
    {
QT_MOC_LITERAL(0, 0, 12), // "Magzine_menu"
QT_MOC_LITERAL(1, 13, 22), // "on_tableView_activated"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 5), // "index"
QT_MOC_LITERAL(4, 43, 21), // "on_comboBox_activated"
QT_MOC_LITERAL(5, 65, 4), // "arg1"
QT_MOC_LITERAL(6, 70, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(7, 92, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(8, 116, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(9, 140, 24), // "on_label_4_linkActivated"
QT_MOC_LITERAL(10, 165, 4), // "link"
QT_MOC_LITERAL(11, 170, 29), // "on_label_4_windowTitleChanged"
QT_MOC_LITERAL(12, 200, 5) // "title"

    },
    "Magzine_menu\0on_tableView_activated\0"
    "\0index\0on_comboBox_activated\0arg1\0"
    "on_pushButton_clicked\0on_pushButton_2_clicked\0"
    "on_pushButton_3_clicked\0"
    "on_label_4_linkActivated\0link\0"
    "on_label_4_windowTitleChanged\0title"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Magzine_menu[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x08 /* Private */,
       4,    1,   52,    2, 0x08 /* Private */,
       6,    0,   55,    2, 0x08 /* Private */,
       7,    0,   56,    2, 0x08 /* Private */,
       8,    0,   57,    2, 0x08 /* Private */,
       9,    1,   58,    2, 0x08 /* Private */,
      11,    1,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   12,

       0        // eod
};

void Magzine_menu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Magzine_menu *_t = static_cast<Magzine_menu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_tableView_activated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->on_comboBox_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_pushButton_clicked(); break;
        case 3: _t->on_pushButton_2_clicked(); break;
        case 4: _t->on_pushButton_3_clicked(); break;
        case 5: _t->on_label_4_linkActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_label_4_windowTitleChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Magzine_menu::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Magzine_menu.data,
      qt_meta_data_Magzine_menu,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Magzine_menu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Magzine_menu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Magzine_menu.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Magzine_menu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
