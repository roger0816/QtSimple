#-------------------------------------------------
#
# Project created by QtCreator 2016-07-25T17:05:56
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QtSimple
TEMPLATE = app


#!include(src/global/RpkLib.pri ) {error(" Couldn't find the RpkLib.pri file! ")}


win32{
OS=windows
}
unix:!macx{
OS=linux
}
mac:!macx{
OS=ios
}
macx{
OS=osx
}
android{
OS=android
}


DESTDIR = $$PWD/bin/$${OS}
OBJECTS_DIR = $$PWD/obj
MOC_DIR = $$PWD/obj
UI_DIR = $$PWD/obj/ui_header



SOURCES += main.cpp\
        widget.cpp \
    StageStart.cpp \
    Global.cpp \
    StageBase.cpp

HEADERS  += widget.h \
    StageStart.h \
    Global.h \
    StageBase.h

FORMS    += widget.ui \
    StageStart.ui


