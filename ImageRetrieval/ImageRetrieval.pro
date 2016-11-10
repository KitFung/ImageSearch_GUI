TEMPLATE = app
TARGET = ImageRetrieval
DESTDIR = ../Win32/Debug
QT += core widgets gui
CONFIG += release
DEFINES += WIN64 QT_DLL QT_WIDGETS_LIB
INCLUDEPATH += ./GeneratedFiles \
    . \
    ./GeneratedFiles/Debug
DEPENDPATH += .
MOC_DIR += ./GeneratedFiles/debug
OBJECTS_DIR += debug
UI_DIR += ./GeneratedFiles
RCC_DIR += ./GeneratedFiles
include(ImageRetrieval.pri)
