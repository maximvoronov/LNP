QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Forms/applicationmodulewindow.cpp \
    Forms/diagnosticwindow.cpp \
    Forms/equipmentwindow.cpp \
    Forms/infowindow.cpp \
    Forms/lnprwin.cpp \
    Forms/passwordwindow.cpp \
    Forms/washmodulewindow.cpp \
    MechLIB/bearing/bearing.cpp \
    MechLIB/brake/brake.cpp \
    MechLIB/brush/brush.cpp \
    MechLIB/brush/ibrushproperty.cpp \
    MechLIB/engine/engine.cpp \
    MechLIB/pump/pump.cpp \
    MechLIB/sensor/sensor.cpp \
    MechLIB/sensor/sensormessages.cpp \
    MechLIB/servo/servo.cpp \
    MechLIB/valve/valve.cpp \
    Modules/ChemicalBlockModule/chemicalblock.cpp \
    Modules/HillShadeModule/hillshademodule.cpp \
    Modules/HillShadeModule/vacuumcontrol.cpp \
    Modules/PreparationModule/preparationmodule.cpp \
    Modules/PreparationModule/preparationmodulemessages.cpp \
    Modules/RobotModule/manipulatortraveldrive.cpp \
    Modules/RobotModule/robot.cpp \
    Modules/RobotModule/verticaldrive.cpp \
    Modules/RobotModule/swingdrive.cpp \
    Modules/RobotModule/robotmessages.cpp \
    Modules/ThermoBlockModule/thermoblock.cpp \
    Modules/ThermoBlockModule/mechmovepushers.cpp \
    messagebox.cpp \  
    net/ModBus/modbus.cpp \
    net/ModBus/modbus_tcp.cpp \
    exception.cpp \
    main.cpp \
    popup.cpp \
    progressbar.cpp \
    sharingframe.cpp \
    systemtray.cpp \
    techprocess/techmessages.cpp \
    techprocess/techprocess.cpp \

HEADERS += \
    Forms/applicationmodulewindow.h \
    Forms/diagnosticwindow.h \
    Forms/equipmentwindow.h \
    Forms/infowindow.h \
    Forms/lnprwin.h \
    Forms/passwordwindow.h \
    Forms/washmodulewindow.h \
    MechLIB/bearing/bearing.h \
    MechLIB/bearing/ibearingproperty.h \
    MechLIB/brake/brake.h \
    MechLIB/brush/brush.h \
    MechLIB/brush/ibrushproperty.h \
    MechLIB/engine/engine.h \
    MechLIB/engine/iengineproperty.h \
    MechLIB/object/icoil.h \
    MechLIB/object/igeometry.h \
    MechLIB/object/ikinematic.h \
    MechLIB/pump/ipumpproperty.h \
    MechLIB/pump/pump.h \
    MechLIB/sensor/ianglesensorproperty.h \
    MechLIB/sensor/iencoderproperty.h \
    MechLIB/sensor/iopticalsensorproperty.h \
    MechLIB/sensor/isensorproperty.h \
    MechLIB/sensor/sensor.h \
    MechLIB/sensor/sensormessages.h \
    MechLIB/servo/iservoproperty.h \
    MechLIB/servo/servo.h \
    MechLIB/valve/ivalveproperty.h \
    MechLIB/valve/valve.h \
    Modules/ChemicalBlockModule/chemicalblock.h \
    Modules/HillShadeModule/hillshademodule.h \
    Modules/HillShadeModule/vacuumcontrol.h \
    Modules/PreparationModule/preparationmodule.h \
    Modules/RobotModule/manipulatortraveldrive.h \
    Modules/RobotModule/robot.h \
    Modules/RobotModule/robotmessages.h \
    Modules/RobotModule/verticaldrive.h \
    Modules/RobotModule/swingdrive.h \
    Modules/ThermoBlockModule/thermoblock.h \
    Modules/ThermoBlockModule/mechmovepushers.h \
    techprocess/techmessages.h \
    techprocess/techprocess.h \
    messagebox.h \
    net/ModBus/Modbus_RTU.h \
    net/ModBus/modbus.h \
    net/ModBus/modbus_tcp.h \
    exception.h \
    popup.h \
    progressbar.h \
    rxcpp/operators/rx-all.hpp \
    rxcpp/operators/rx-amb.hpp \
    rxcpp/operators/rx-any.hpp \
    rxcpp/operators/rx-buffer_count.hpp \
    rxcpp/operators/rx-buffer_time.hpp \
    rxcpp/operators/rx-buffer_time_count.hpp \
    rxcpp/operators/rx-combine_latest.hpp \
    rxcpp/operators/rx-concat.hpp \
    rxcpp/operators/rx-concat_map.hpp \
    rxcpp/operators/rx-connect_forever.hpp \
    rxcpp/operators/rx-debounce.hpp \
    rxcpp/operators/rx-delay.hpp \
    rxcpp/operators/rx-distinct.hpp \
    rxcpp/operators/rx-distinct_until_changed.hpp \
    rxcpp/operators/rx-element_at.hpp \
    rxcpp/operators/rx-filter.hpp \
    rxcpp/operators/rx-finally.hpp \
    rxcpp/operators/rx-flat_map.hpp \
    rxcpp/operators/rx-group_by.hpp \
    rxcpp/operators/rx-ignore_elements.hpp \
    rxcpp/operators/rx-lift.hpp \
    rxcpp/operators/rx-map.hpp \
    rxcpp/operators/rx-merge.hpp \
    rxcpp/operators/rx-merge_delay_error.hpp \
    rxcpp/operators/rx-multicast.hpp \
    rxcpp/operators/rx-observe_on.hpp \
    rxcpp/operators/rx-on_error_resume_next.hpp \
    rxcpp/operators/rx-pairwise.hpp \
    rxcpp/operators/rx-publish.hpp \
    rxcpp/operators/rx-reduce.hpp \
    rxcpp/operators/rx-ref_count.hpp \
    rxcpp/operators/rx-repeat.hpp \
    rxcpp/operators/rx-replay.hpp \
    rxcpp/operators/rx-retry-repeat-common.hpp \
    rxcpp/operators/rx-retry.hpp \
    rxcpp/operators/rx-sample_time.hpp \
    rxcpp/operators/rx-scan.hpp \
    rxcpp/operators/rx-sequence_equal.hpp \
    rxcpp/operators/rx-skip.hpp \
    rxcpp/operators/rx-skip_last.hpp \
    rxcpp/operators/rx-skip_until.hpp \
    rxcpp/operators/rx-skip_while.hpp \
    rxcpp/operators/rx-start_with.hpp \
    rxcpp/operators/rx-subscribe.hpp \
    rxcpp/operators/rx-subscribe_on.hpp \
    rxcpp/operators/rx-switch_if_empty.hpp \
    rxcpp/operators/rx-switch_on_next.hpp \
    rxcpp/operators/rx-take.hpp \
    rxcpp/operators/rx-take_last.hpp \
    rxcpp/operators/rx-take_until.hpp \
    rxcpp/operators/rx-take_while.hpp \
    rxcpp/operators/rx-tap.hpp \
    rxcpp/operators/rx-time_interval.hpp \
    rxcpp/operators/rx-timeout.hpp \
    rxcpp/operators/rx-timestamp.hpp \
    rxcpp/operators/rx-window.hpp \
    rxcpp/operators/rx-window_time.hpp \
    rxcpp/operators/rx-window_time_count.hpp \
    rxcpp/operators/rx-window_toggle.hpp \
    rxcpp/operators/rx-with_latest_from.hpp \
    rxcpp/operators/rx-zip.hpp \
    rxcpp/rx-composite_exception.hpp \
    rxcpp/rx-connectable_observable.hpp \
    rxcpp/rx-coordination.hpp \
    rxcpp/rx-coroutine.hpp \
    rxcpp/rx-grouped_observable.hpp \
    rxcpp/rx-includes.hpp \
    rxcpp/rx-lite.hpp \
    rxcpp/rx-notification.hpp \
    rxcpp/rx-observable-fwd.hpp \
    rxcpp/rx-observable.hpp \
    rxcpp/rx-observer.hpp \
    rxcpp/rx-operators.hpp \
    rxcpp/rx-predef.hpp \
    rxcpp/rx-scheduler.hpp \
    rxcpp/rx-sources.hpp \
    rxcpp/rx-subjects.hpp \
    rxcpp/rx-subscriber.hpp \
    rxcpp/rx-subscription.hpp \
    rxcpp/rx-test.hpp \
    rxcpp/rx-trace.hpp \
    rxcpp/rx-util.hpp \
    rxcpp/rx.hpp \
    rxcpp/schedulers/rx-currentthread.hpp \
    rxcpp/schedulers/rx-eventloop.hpp \
    rxcpp/schedulers/rx-immediate.hpp \
    rxcpp/schedulers/rx-newthread.hpp \
    rxcpp/schedulers/rx-runloop.hpp \
    rxcpp/schedulers/rx-sameworker.hpp \
    rxcpp/schedulers/rx-test.hpp \
    rxcpp/schedulers/rx-virtualtime.hpp \
    rxcpp/sources/rx-create.hpp \
    rxcpp/sources/rx-defer.hpp \
    rxcpp/sources/rx-empty.hpp \
    rxcpp/sources/rx-error.hpp \
    rxcpp/sources/rx-interval.hpp \
    rxcpp/sources/rx-iterate.hpp \
    rxcpp/sources/rx-never.hpp \
    rxcpp/sources/rx-range.hpp \
    rxcpp/sources/rx-scope.hpp \
    rxcpp/sources/rx-timer.hpp \
    rxcpp/subjects/rx-behavior.hpp \
    rxcpp/subjects/rx-replaysubject.hpp \
    rxcpp/subjects/rx-subject.hpp \
    rxcpp/subjects/rx-synchronize.hpp \
    sharingframe.h \
    systemtray.h \
    vacuumcontrol.h \
TRANSLATIONS +=
    LNP_ru_RU.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc

DISTFILES += \
    equipment/encoder/pd30_08.xml \
    equipment/sensors/ise30a_01_n_m.xml \
    equipment/sensors/pic/ise30a.jpg \
    lnp_model.qmodel \
    resources/adg.png \
    resources/bearing.jpg \
    resources/bearing1.png \
    resources/bxw03_10.png \
    resources/ec.png \
    resources/ec2.png \
    resources/ec2.png.jfif \
    resources/gear2.png \
    resources/i.png \
    resources/mar140.png \
    resources/mar180.png \
    resources/profile.jpg \
    resources/profile1.png \
    resources/robot.png \
    resources/scheme.jpg \ \
    robot.qmodel

STATECHARTS += \
    ThermoBlock.scxml

FORMS +=
