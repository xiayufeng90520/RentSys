#-------------------------------------------------
#
# Project created by QtCreator 2016-08-03T23:26:41
#
#-------------------------------------------------

QT       += core gui
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = RentSys
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    login.cpp \
    owner.cpp \
    addowner.cpp \
    delowner.cpp \
    showhouse.cpp \
    addnewhouse.cpp \
    delhouse.cpp \
    houserenter.cpp \
    searchhouse.cpp \
    searchrenter.cpp \
    databaseconnection.cpp

HEADERS  += mainwindow.h \
    login.h \
    owner.h \
    addowner.h \
    delowner.h \
    showhouse.h \
    addnewhouse.h \
    delhouse.h \
    houserenter.h \
    searchhouse.h \
    searchrenter.h \
    databaseconnection.h

FORMS    += mainwindow.ui \
    login.ui \
    owner.ui \
    addowner.ui \
    delowner.ui \
    showhouse.ui \
    addnewhouse.ui \
    delhouse.ui \
    houserenter.ui \
    searchhouse.ui \
    searchrenter.ui
