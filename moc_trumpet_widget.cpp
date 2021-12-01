/****************************************************************************
** Meta object code from reading C++ file 'trumpet_widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ChordBoard Final/trumpet_widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'trumpet_widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_trumpet_widget_t {
    QByteArrayData data[26];
    char stringdata0[481];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_trumpet_widget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_trumpet_widget_t qt_meta_stringdata_trumpet_widget = {
    {
QT_MOC_LITERAL(0, 0, 14), // "trumpet_widget"
QT_MOC_LITERAL(1, 15, 22), // "on_valve1_stateChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 4), // "arg1"
QT_MOC_LITERAL(4, 44, 22), // "on_valve2_stateChanged"
QT_MOC_LITERAL(5, 67, 22), // "on_valve3_stateChanged"
QT_MOC_LITERAL(6, 90, 21), // "on_playButton_clicked"
QT_MOC_LITERAL(7, 112, 24), // "on_checkBox_stateChanged"
QT_MOC_LITERAL(8, 137, 23), // "on_recordButton_toggled"
QT_MOC_LITERAL(9, 161, 7), // "checked"
QT_MOC_LITERAL(10, 169, 35), // "on_partialCombo_currentIndexC..."
QT_MOC_LITERAL(11, 205, 5), // "index"
QT_MOC_LITERAL(12, 211, 21), // "on_stopButton_clicked"
QT_MOC_LITERAL(13, 233, 22), // "on_clearButton_clicked"
QT_MOC_LITERAL(14, 256, 23), // "on_removeButton_clicked"
QT_MOC_LITERAL(15, 280, 24), // "on_inputList_itemClicked"
QT_MOC_LITERAL(16, 305, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(17, 322, 4), // "item"
QT_MOC_LITERAL(18, 327, 5), // "delay"
QT_MOC_LITERAL(19, 333, 5), // "msecs"
QT_MOC_LITERAL(20, 339, 20), // "on_metronome_toggled"
QT_MOC_LITERAL(21, 360, 24), // "on_sliderBpm_sliderMoved"
QT_MOC_LITERAL(22, 385, 8), // "position"
QT_MOC_LITERAL(23, 394, 26), // "on_inputHelpButton_clicked"
QT_MOC_LITERAL(24, 421, 33), // "on_scaleCombo_currentIndexCha..."
QT_MOC_LITERAL(25, 455, 25) // "on_outputList_itemClicked"

    },
    "trumpet_widget\0on_valve1_stateChanged\0"
    "\0arg1\0on_valve2_stateChanged\0"
    "on_valve3_stateChanged\0on_playButton_clicked\0"
    "on_checkBox_stateChanged\0"
    "on_recordButton_toggled\0checked\0"
    "on_partialCombo_currentIndexChanged\0"
    "index\0on_stopButton_clicked\0"
    "on_clearButton_clicked\0on_removeButton_clicked\0"
    "on_inputList_itemClicked\0QListWidgetItem*\0"
    "item\0delay\0msecs\0on_metronome_toggled\0"
    "on_sliderBpm_sliderMoved\0position\0"
    "on_inputHelpButton_clicked\0"
    "on_scaleCombo_currentIndexChanged\0"
    "on_outputList_itemClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_trumpet_widget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x08 /* Private */,
       4,    1,  102,    2, 0x08 /* Private */,
       5,    1,  105,    2, 0x08 /* Private */,
       6,    0,  108,    2, 0x08 /* Private */,
       7,    1,  109,    2, 0x08 /* Private */,
       8,    1,  112,    2, 0x08 /* Private */,
      10,    1,  115,    2, 0x08 /* Private */,
      12,    0,  118,    2, 0x08 /* Private */,
      13,    0,  119,    2, 0x08 /* Private */,
      14,    0,  120,    2, 0x08 /* Private */,
      15,    1,  121,    2, 0x08 /* Private */,
      18,    1,  124,    2, 0x08 /* Private */,
      20,    1,  127,    2, 0x08 /* Private */,
      21,    1,  130,    2, 0x08 /* Private */,
      23,    0,  133,    2, 0x08 /* Private */,
      24,    1,  134,    2, 0x08 /* Private */,
      25,    1,  137,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 16,   17,

       0        // eod
};

void trumpet_widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        trumpet_widget *_t = static_cast<trumpet_widget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_valve1_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_valve2_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_valve3_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_playButton_clicked(); break;
        case 4: _t->on_checkBox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_recordButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_partialCombo_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_stopButton_clicked(); break;
        case 8: _t->on_clearButton_clicked(); break;
        case 9: _t->on_removeButton_clicked(); break;
        case 10: _t->on_inputList_itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 11: _t->delay((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->on_metronome_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->on_sliderBpm_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->on_inputHelpButton_clicked(); break;
        case 15: _t->on_scaleCombo_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->on_outputList_itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject trumpet_widget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_trumpet_widget.data,
      qt_meta_data_trumpet_widget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *trumpet_widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *trumpet_widget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_trumpet_widget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int trumpet_widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
