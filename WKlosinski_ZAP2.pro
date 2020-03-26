TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    rozgrywka_z_graczem.cpp \
    komputer_latwy.cpp \
    komputer_sredni.cpp \
    komputer_trudny.cpp \
    komputer_niemozliwy.cpp \
    menu.cpp \
    funkcje.cpp

HEADERS += \
    funkcje.h \
    komputer_latwy.h \
    komputer_sredni.h \
    komputer_trudny.h \
    komputer_niemozliwy.h \
    menu.h \
    rozgrywka_z_graczem.h

