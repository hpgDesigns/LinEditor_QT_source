/****************************************************************************
** Meta object code from reading C++ file 'lineditor.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../lineditor/lineditor.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lineditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.0. It"
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
struct qt_meta_stringdata_CLASSlineditorENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlineditorENDCLASS = QtMocHelpers::stringData(
    "lineditor",
    "on_actionNew_triggered",
    "",
    "on_actionOpen_triggered",
    "on_actionSave_As_triggered",
    "on_actionSave_triggered",
    "on_actionHTML_triggered",
    "on_actionText_triggered",
    "on_actionPDF_triggered",
    "on_actionPrint_triggered",
    "on_actionUndo_triggered",
    "on_actionExit_triggered",
    "on_actionRedo_triggered",
    "on_actionCut_triggered",
    "on_actionCopy_triggered",
    "on_actionPaste_triggered",
    "on_actionDelete_triggered",
    "on_actionSelect_All_triggered",
    "on_actionFind_triggered",
    "on_actionBold_triggered",
    "on_actionItalic_triggered",
    "on_actionUnderline_triggered",
    "on_actionDate_triggered",
    "on_actionBullet_List_triggered",
    "on_actionNumbered_List_triggered",
    "on_actionCheck_Box_triggered",
    "on_actionImage_triggered",
    "on_actionText_from_File_triggered",
    "on_actionTable_triggered",
    "on_actionContents_triggered",
    "on_actionAbout_triggered",
    "on_actionFAQ_triggered",
    "on_actionAlign_Left_triggered",
    "on_actionAlign_Right_triggered",
    "on_actionCentered_triggered",
    "on_actionJustified_triggered",
    "on_actionBackground_triggered",
    "on_actionText_Color_triggered",
    "on_actionHighlight_triggered",
    "on_actionFont_triggered",
    "on_actionStrike_Through_triggered",
    "on_actionZoom_In_triggered",
    "on_actionZoom_Out_triggered"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlineditorENDCLASS_t {
    uint offsetsAndSizes[86];
    char stringdata0[10];
    char stringdata1[23];
    char stringdata2[1];
    char stringdata3[24];
    char stringdata4[27];
    char stringdata5[24];
    char stringdata6[24];
    char stringdata7[24];
    char stringdata8[23];
    char stringdata9[25];
    char stringdata10[24];
    char stringdata11[24];
    char stringdata12[24];
    char stringdata13[23];
    char stringdata14[24];
    char stringdata15[25];
    char stringdata16[26];
    char stringdata17[30];
    char stringdata18[24];
    char stringdata19[24];
    char stringdata20[26];
    char stringdata21[29];
    char stringdata22[24];
    char stringdata23[31];
    char stringdata24[33];
    char stringdata25[29];
    char stringdata26[25];
    char stringdata27[34];
    char stringdata28[25];
    char stringdata29[28];
    char stringdata30[25];
    char stringdata31[23];
    char stringdata32[30];
    char stringdata33[31];
    char stringdata34[28];
    char stringdata35[29];
    char stringdata36[30];
    char stringdata37[30];
    char stringdata38[29];
    char stringdata39[24];
    char stringdata40[34];
    char stringdata41[27];
    char stringdata42[28];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlineditorENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlineditorENDCLASS_t qt_meta_stringdata_CLASSlineditorENDCLASS = {
    {
        QT_MOC_LITERAL(0, 9),  // "lineditor"
        QT_MOC_LITERAL(10, 22),  // "on_actionNew_triggered"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 23),  // "on_actionOpen_triggered"
        QT_MOC_LITERAL(58, 26),  // "on_actionSave_As_triggered"
        QT_MOC_LITERAL(85, 23),  // "on_actionSave_triggered"
        QT_MOC_LITERAL(109, 23),  // "on_actionHTML_triggered"
        QT_MOC_LITERAL(133, 23),  // "on_actionText_triggered"
        QT_MOC_LITERAL(157, 22),  // "on_actionPDF_triggered"
        QT_MOC_LITERAL(180, 24),  // "on_actionPrint_triggered"
        QT_MOC_LITERAL(205, 23),  // "on_actionUndo_triggered"
        QT_MOC_LITERAL(229, 23),  // "on_actionExit_triggered"
        QT_MOC_LITERAL(253, 23),  // "on_actionRedo_triggered"
        QT_MOC_LITERAL(277, 22),  // "on_actionCut_triggered"
        QT_MOC_LITERAL(300, 23),  // "on_actionCopy_triggered"
        QT_MOC_LITERAL(324, 24),  // "on_actionPaste_triggered"
        QT_MOC_LITERAL(349, 25),  // "on_actionDelete_triggered"
        QT_MOC_LITERAL(375, 29),  // "on_actionSelect_All_triggered"
        QT_MOC_LITERAL(405, 23),  // "on_actionFind_triggered"
        QT_MOC_LITERAL(429, 23),  // "on_actionBold_triggered"
        QT_MOC_LITERAL(453, 25),  // "on_actionItalic_triggered"
        QT_MOC_LITERAL(479, 28),  // "on_actionUnderline_triggered"
        QT_MOC_LITERAL(508, 23),  // "on_actionDate_triggered"
        QT_MOC_LITERAL(532, 30),  // "on_actionBullet_List_triggered"
        QT_MOC_LITERAL(563, 32),  // "on_actionNumbered_List_triggered"
        QT_MOC_LITERAL(596, 28),  // "on_actionCheck_Box_triggered"
        QT_MOC_LITERAL(625, 24),  // "on_actionImage_triggered"
        QT_MOC_LITERAL(650, 33),  // "on_actionText_from_File_trigg..."
        QT_MOC_LITERAL(684, 24),  // "on_actionTable_triggered"
        QT_MOC_LITERAL(709, 27),  // "on_actionContents_triggered"
        QT_MOC_LITERAL(737, 24),  // "on_actionAbout_triggered"
        QT_MOC_LITERAL(762, 22),  // "on_actionFAQ_triggered"
        QT_MOC_LITERAL(785, 29),  // "on_actionAlign_Left_triggered"
        QT_MOC_LITERAL(815, 30),  // "on_actionAlign_Right_triggered"
        QT_MOC_LITERAL(846, 27),  // "on_actionCentered_triggered"
        QT_MOC_LITERAL(874, 28),  // "on_actionJustified_triggered"
        QT_MOC_LITERAL(903, 29),  // "on_actionBackground_triggered"
        QT_MOC_LITERAL(933, 29),  // "on_actionText_Color_triggered"
        QT_MOC_LITERAL(963, 28),  // "on_actionHighlight_triggered"
        QT_MOC_LITERAL(992, 23),  // "on_actionFont_triggered"
        QT_MOC_LITERAL(1016, 33),  // "on_actionStrike_Through_trigg..."
        QT_MOC_LITERAL(1050, 26),  // "on_actionZoom_In_triggered"
        QT_MOC_LITERAL(1077, 27)   // "on_actionZoom_Out_triggered"
    },
    "lineditor",
    "on_actionNew_triggered",
    "",
    "on_actionOpen_triggered",
    "on_actionSave_As_triggered",
    "on_actionSave_triggered",
    "on_actionHTML_triggered",
    "on_actionText_triggered",
    "on_actionPDF_triggered",
    "on_actionPrint_triggered",
    "on_actionUndo_triggered",
    "on_actionExit_triggered",
    "on_actionRedo_triggered",
    "on_actionCut_triggered",
    "on_actionCopy_triggered",
    "on_actionPaste_triggered",
    "on_actionDelete_triggered",
    "on_actionSelect_All_triggered",
    "on_actionFind_triggered",
    "on_actionBold_triggered",
    "on_actionItalic_triggered",
    "on_actionUnderline_triggered",
    "on_actionDate_triggered",
    "on_actionBullet_List_triggered",
    "on_actionNumbered_List_triggered",
    "on_actionCheck_Box_triggered",
    "on_actionImage_triggered",
    "on_actionText_from_File_triggered",
    "on_actionTable_triggered",
    "on_actionContents_triggered",
    "on_actionAbout_triggered",
    "on_actionFAQ_triggered",
    "on_actionAlign_Left_triggered",
    "on_actionAlign_Right_triggered",
    "on_actionCentered_triggered",
    "on_actionJustified_triggered",
    "on_actionBackground_triggered",
    "on_actionText_Color_triggered",
    "on_actionHighlight_triggered",
    "on_actionFont_triggered",
    "on_actionStrike_Through_triggered",
    "on_actionZoom_In_triggered",
    "on_actionZoom_Out_triggered"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlineditorENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      41,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  260,    2, 0x08,    1 /* Private */,
       3,    0,  261,    2, 0x08,    2 /* Private */,
       4,    0,  262,    2, 0x08,    3 /* Private */,
       5,    0,  263,    2, 0x08,    4 /* Private */,
       6,    0,  264,    2, 0x08,    5 /* Private */,
       7,    0,  265,    2, 0x08,    6 /* Private */,
       8,    0,  266,    2, 0x08,    7 /* Private */,
       9,    0,  267,    2, 0x08,    8 /* Private */,
      10,    0,  268,    2, 0x08,    9 /* Private */,
      11,    0,  269,    2, 0x08,   10 /* Private */,
      12,    0,  270,    2, 0x08,   11 /* Private */,
      13,    0,  271,    2, 0x08,   12 /* Private */,
      14,    0,  272,    2, 0x08,   13 /* Private */,
      15,    0,  273,    2, 0x08,   14 /* Private */,
      16,    0,  274,    2, 0x08,   15 /* Private */,
      17,    0,  275,    2, 0x08,   16 /* Private */,
      18,    0,  276,    2, 0x08,   17 /* Private */,
      19,    0,  277,    2, 0x08,   18 /* Private */,
      20,    0,  278,    2, 0x08,   19 /* Private */,
      21,    0,  279,    2, 0x08,   20 /* Private */,
      22,    0,  280,    2, 0x08,   21 /* Private */,
      23,    0,  281,    2, 0x08,   22 /* Private */,
      24,    0,  282,    2, 0x08,   23 /* Private */,
      25,    0,  283,    2, 0x08,   24 /* Private */,
      26,    0,  284,    2, 0x08,   25 /* Private */,
      27,    0,  285,    2, 0x08,   26 /* Private */,
      28,    0,  286,    2, 0x08,   27 /* Private */,
      29,    0,  287,    2, 0x08,   28 /* Private */,
      30,    0,  288,    2, 0x08,   29 /* Private */,
      31,    0,  289,    2, 0x08,   30 /* Private */,
      32,    0,  290,    2, 0x08,   31 /* Private */,
      33,    0,  291,    2, 0x08,   32 /* Private */,
      34,    0,  292,    2, 0x08,   33 /* Private */,
      35,    0,  293,    2, 0x08,   34 /* Private */,
      36,    0,  294,    2, 0x08,   35 /* Private */,
      37,    0,  295,    2, 0x08,   36 /* Private */,
      38,    0,  296,    2, 0x08,   37 /* Private */,
      39,    0,  297,    2, 0x08,   38 /* Private */,
      40,    0,  298,    2, 0x08,   39 /* Private */,
      41,    0,  299,    2, 0x08,   40 /* Private */,
      42,    0,  300,    2, 0x08,   41 /* Private */,

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

Q_CONSTINIT const QMetaObject lineditor::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSlineditorENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlineditorENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlineditorENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<lineditor, std::true_type>,
        // method 'on_actionNew_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionOpen_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionSave_As_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionSave_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionHTML_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionText_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionPDF_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionPrint_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionUndo_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionExit_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionRedo_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionCut_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionCopy_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionPaste_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionDelete_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionSelect_All_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionFind_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionBold_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionItalic_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionUnderline_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionDate_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionBullet_List_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionNumbered_List_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionCheck_Box_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionImage_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionText_from_File_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionTable_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionContents_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionAbout_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionFAQ_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionAlign_Left_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionAlign_Right_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionCentered_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionJustified_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionBackground_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionText_Color_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionHighlight_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionFont_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionStrike_Through_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionZoom_In_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionZoom_Out_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void lineditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<lineditor *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_actionNew_triggered(); break;
        case 1: _t->on_actionOpen_triggered(); break;
        case 2: _t->on_actionSave_As_triggered(); break;
        case 3: _t->on_actionSave_triggered(); break;
        case 4: _t->on_actionHTML_triggered(); break;
        case 5: _t->on_actionText_triggered(); break;
        case 6: _t->on_actionPDF_triggered(); break;
        case 7: _t->on_actionPrint_triggered(); break;
        case 8: _t->on_actionUndo_triggered(); break;
        case 9: _t->on_actionExit_triggered(); break;
        case 10: _t->on_actionRedo_triggered(); break;
        case 11: _t->on_actionCut_triggered(); break;
        case 12: _t->on_actionCopy_triggered(); break;
        case 13: _t->on_actionPaste_triggered(); break;
        case 14: _t->on_actionDelete_triggered(); break;
        case 15: _t->on_actionSelect_All_triggered(); break;
        case 16: _t->on_actionFind_triggered(); break;
        case 17: _t->on_actionBold_triggered(); break;
        case 18: _t->on_actionItalic_triggered(); break;
        case 19: _t->on_actionUnderline_triggered(); break;
        case 20: _t->on_actionDate_triggered(); break;
        case 21: _t->on_actionBullet_List_triggered(); break;
        case 22: _t->on_actionNumbered_List_triggered(); break;
        case 23: _t->on_actionCheck_Box_triggered(); break;
        case 24: _t->on_actionImage_triggered(); break;
        case 25: _t->on_actionText_from_File_triggered(); break;
        case 26: _t->on_actionTable_triggered(); break;
        case 27: _t->on_actionContents_triggered(); break;
        case 28: _t->on_actionAbout_triggered(); break;
        case 29: _t->on_actionFAQ_triggered(); break;
        case 30: _t->on_actionAlign_Left_triggered(); break;
        case 31: _t->on_actionAlign_Right_triggered(); break;
        case 32: _t->on_actionCentered_triggered(); break;
        case 33: _t->on_actionJustified_triggered(); break;
        case 34: _t->on_actionBackground_triggered(); break;
        case 35: _t->on_actionText_Color_triggered(); break;
        case 36: _t->on_actionHighlight_triggered(); break;
        case 37: _t->on_actionFont_triggered(); break;
        case 38: _t->on_actionStrike_Through_triggered(); break;
        case 39: _t->on_actionZoom_In_triggered(); break;
        case 40: _t->on_actionZoom_Out_triggered(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *lineditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lineditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlineditorENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int lineditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 41)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 41;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 41)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 41;
    }
    return _id;
}
QT_WARNING_POP
