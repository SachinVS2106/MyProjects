TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        DeviceLayer/ECGSensor.cpp \
        DeviceLayer/ecghardware.cpp \
        address.cpp \
        ecgdisplay.cpp \
        ecglead.cpp \
        ecgsystem.cpp \
        main.cpp \
        mydate.cpp \
        patientmonitoringsystem.cpp \
        person.cpp

HEADERS += \
    DeviceLayer/ECGSensor.h \
    DeviceLayer/ecghardware.h \
    address.h \
    ecgdisplay.h \
    ecglead.h \
    ecgsystem.h \
    mydate.h \
    patientmonitoringsystem.h \
    person.h
