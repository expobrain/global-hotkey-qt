#-------------------------------------------------
#
# Project created by QtCreator 2012-04-14T18:21:02
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = global_hotkey
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    globaleventfilter.cpp \
    myapplication.cpp

HEADERS  += mainwindow.h \
    globaleventfilter.h \
    myapplication.h

FORMS    += mainwindow.ui
