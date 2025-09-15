/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../gui/MainWindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.2. It"
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
struct qt_meta_tag_ZN10MainWindowE_t {};
} // unnamed namespace

template <> constexpr inline auto MainWindow::qt_create_metaobjectdata<qt_meta_tag_ZN10MainWindowE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MainWindow",
        "on_actionDialogConf_triggered",
        "",
        "on_actionDialogEnvr_triggered",
        "on_actionDialogInit_triggered",
        "on_actionDialogMass_triggered",
        "on_actionDockAuto_toggled",
        "checked",
        "on_actionDockCtrl_toggled",
        "on_actionDockData_toggled",
        "on_actionDockEFIS_toggled",
        "on_actionDockMain_toggled",
        "on_actionDockMap_toggled",
        "on_actionDockProp_toggled",
        "on_actionShowPFD_triggered",
        "on_actionFlightOpen_triggered",
        "on_actionFlightSave_triggered",
        "on_actionStateInpIdle_triggered",
        "on_actionStateInpInit_triggered",
        "on_actionStateInpWork_triggered",
        "on_actionStateInpPause_triggered",
        "on_actionStateInpStop_triggered",
        "on_actionQuit_triggered",
        "on_actionViewChase_triggered",
        "on_actionViewOrbit_triggered",
        "on_actionViewPilot_triggered",
        "on_actionViewWorld_triggered",
        "on_actionShowHUD_triggered",
        "on_actionShowTraces_triggered",
        "on_actionShowRotorBlur_triggered",
        "on_actionShowBladesDatum_triggered",
        "on_actionShowBladesPaths_triggered",
        "on_actionTimeFaster_triggered",
        "on_actionTimeSlower_triggered",
        "on_actionTimeNormal_triggered",
        "on_actionAbout_triggered",
        "shortcutCycleViews_activated",
        "shortcutToggleHud_activated",
        "shortcutFullScreen_activated",
        "dialogInit_typeIndexChanged",
        "typeIndex",
        "dockMain_stateInpChanged",
        "fdm::DataInp::StateInp",
        "stateInp",
        "dockAuto_closed",
        "dockCtrl_closed",
        "dockData_closed",
        "dockEFIS_closed",
        "dockMain_closed",
        "dockMap_closed",
        "dockProp_closed",
        "widgetPFD_closed"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'on_actionDialogConf_triggered'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionDialogEnvr_triggered'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionDialogInit_triggered'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionDialogMass_triggered'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionDockAuto_toggled'
        QtMocHelpers::SlotData<void(bool)>(6, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 7 },
        }}),
        // Slot 'on_actionDockCtrl_toggled'
        QtMocHelpers::SlotData<void(bool)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 7 },
        }}),
        // Slot 'on_actionDockData_toggled'
        QtMocHelpers::SlotData<void(bool)>(9, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 7 },
        }}),
        // Slot 'on_actionDockEFIS_toggled'
        QtMocHelpers::SlotData<void(bool)>(10, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 7 },
        }}),
        // Slot 'on_actionDockMain_toggled'
        QtMocHelpers::SlotData<void(bool)>(11, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 7 },
        }}),
        // Slot 'on_actionDockMap_toggled'
        QtMocHelpers::SlotData<void(bool)>(12, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 7 },
        }}),
        // Slot 'on_actionDockProp_toggled'
        QtMocHelpers::SlotData<void(bool)>(13, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 7 },
        }}),
        // Slot 'on_actionShowPFD_triggered'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionFlightOpen_triggered'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionFlightSave_triggered'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionStateInpIdle_triggered'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionStateInpInit_triggered'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionStateInpWork_triggered'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionStateInpPause_triggered'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionStateInpStop_triggered'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionQuit_triggered'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionViewChase_triggered'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionViewOrbit_triggered'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionViewPilot_triggered'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionViewWorld_triggered'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionShowHUD_triggered'
        QtMocHelpers::SlotData<void(bool)>(27, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 7 },
        }}),
        // Slot 'on_actionShowTraces_triggered'
        QtMocHelpers::SlotData<void(bool)>(28, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 7 },
        }}),
        // Slot 'on_actionShowRotorBlur_triggered'
        QtMocHelpers::SlotData<void(bool)>(29, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 7 },
        }}),
        // Slot 'on_actionShowBladesDatum_triggered'
        QtMocHelpers::SlotData<void(bool)>(30, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 7 },
        }}),
        // Slot 'on_actionShowBladesPaths_triggered'
        QtMocHelpers::SlotData<void(bool)>(31, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 7 },
        }}),
        // Slot 'on_actionTimeFaster_triggered'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionTimeSlower_triggered'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionTimeNormal_triggered'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionAbout_triggered'
        QtMocHelpers::SlotData<void()>(35, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'shortcutCycleViews_activated'
        QtMocHelpers::SlotData<void()>(36, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'shortcutToggleHud_activated'
        QtMocHelpers::SlotData<void()>(37, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'shortcutFullScreen_activated'
        QtMocHelpers::SlotData<void()>(38, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'dialogInit_typeIndexChanged'
        QtMocHelpers::SlotData<void(int)>(39, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 40 },
        }}),
        // Slot 'dockMain_stateInpChanged'
        QtMocHelpers::SlotData<void(fdm::DataInp::StateInp)>(41, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 42, 43 },
        }}),
        // Slot 'dockAuto_closed'
        QtMocHelpers::SlotData<void()>(44, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'dockCtrl_closed'
        QtMocHelpers::SlotData<void()>(45, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'dockData_closed'
        QtMocHelpers::SlotData<void()>(46, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'dockEFIS_closed'
        QtMocHelpers::SlotData<void()>(47, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'dockMain_closed'
        QtMocHelpers::SlotData<void()>(48, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'dockMap_closed'
        QtMocHelpers::SlotData<void()>(49, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'dockProp_closed'
        QtMocHelpers::SlotData<void()>(50, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'widgetPFD_closed'
        QtMocHelpers::SlotData<void()>(51, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MainWindow, qt_meta_tag_ZN10MainWindowE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10MainWindowE_t>.metaTypes,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MainWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->on_actionDialogConf_triggered(); break;
        case 1: _t->on_actionDialogEnvr_triggered(); break;
        case 2: _t->on_actionDialogInit_triggered(); break;
        case 3: _t->on_actionDialogMass_triggered(); break;
        case 4: _t->on_actionDockAuto_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->on_actionDockCtrl_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->on_actionDockData_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->on_actionDockEFIS_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->on_actionDockMain_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->on_actionDockMap_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->on_actionDockProp_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->on_actionShowPFD_triggered(); break;
        case 12: _t->on_actionFlightOpen_triggered(); break;
        case 13: _t->on_actionFlightSave_triggered(); break;
        case 14: _t->on_actionStateInpIdle_triggered(); break;
        case 15: _t->on_actionStateInpInit_triggered(); break;
        case 16: _t->on_actionStateInpWork_triggered(); break;
        case 17: _t->on_actionStateInpPause_triggered(); break;
        case 18: _t->on_actionStateInpStop_triggered(); break;
        case 19: _t->on_actionQuit_triggered(); break;
        case 20: _t->on_actionViewChase_triggered(); break;
        case 21: _t->on_actionViewOrbit_triggered(); break;
        case 22: _t->on_actionViewPilot_triggered(); break;
        case 23: _t->on_actionViewWorld_triggered(); break;
        case 24: _t->on_actionShowHUD_triggered((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 25: _t->on_actionShowTraces_triggered((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 26: _t->on_actionShowRotorBlur_triggered((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 27: _t->on_actionShowBladesDatum_triggered((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 28: _t->on_actionShowBladesPaths_triggered((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 29: _t->on_actionTimeFaster_triggered(); break;
        case 30: _t->on_actionTimeSlower_triggered(); break;
        case 31: _t->on_actionTimeNormal_triggered(); break;
        case 32: _t->on_actionAbout_triggered(); break;
        case 33: _t->shortcutCycleViews_activated(); break;
        case 34: _t->shortcutToggleHud_activated(); break;
        case 35: _t->shortcutFullScreen_activated(); break;
        case 36: _t->dialogInit_typeIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 37: _t->dockMain_stateInpChanged((*reinterpret_cast< std::add_pointer_t<fdm::DataInp::StateInp>>(_a[1]))); break;
        case 38: _t->dockAuto_closed(); break;
        case 39: _t->dockCtrl_closed(); break;
        case 40: _t->dockData_closed(); break;
        case 41: _t->dockEFIS_closed(); break;
        case 42: _t->dockMain_closed(); break;
        case 43: _t->dockMap_closed(); break;
        case 44: _t->dockProp_closed(); break;
        case 45: _t->widgetPFD_closed(); break;
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
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.strings))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 46)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 46;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 46)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 46;
    }
    return _id;
}
QT_WARNING_POP
