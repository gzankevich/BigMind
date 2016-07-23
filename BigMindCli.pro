QT += core
QT -= gui

TARGET = BigMindCli
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    custom/src/Thought.cpp \
    src/BigMindCli_main.gen.cpp \
    src/Thought.gen.cpp

HEADERS += \
    custom/include/BigMindCli_precompiled_header.h \
    custom/include/Thought.h \
    include/BigMindCli_all_include.gen.h \
    include/BigMindCli_export.gen.h \
    include/BigMindCli_precompiled_header.gen.h \
    include/Thought.gen.h


unix: LIBS += -lQxOrm
