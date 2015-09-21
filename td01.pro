TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    mathesi.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    mathesi.h

QMAKE_CXXFLAGS += -std=c++11 \
                  -pedantic-errors

