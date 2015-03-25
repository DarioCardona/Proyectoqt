#-------------------------------------------------
#
# Project created by QtCreator 2015-03-21T16:01:47
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = proyecto
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    carro.cpp \
    pickups.cpp \
    turismo.cpp \
    camioneta.cpp \
    agregarcarros.cpp \
    login.cpp \
    venta.cpp

HEADERS  += mainwindow.h \
    carro.h \
    pickups.h \
    turismo.h \
    camioneta.h \
    agregarcarros.h \
    login.h \
    venta.h

FORMS    += mainwindow.ui \
    agregarcarros.ui \
    login.ui \
    venta.ui
