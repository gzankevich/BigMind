#################################################################################################
## File created by QxEntityEditor 1.1.9 (2016/07/23 21:31) : please, do NOT modify this file ! ##
#################################################################################################

include(/usr/local/lib/libQxOrm.so/QxOrm.pri)

TEMPLATE = lib
CONFIG += dll
DEFINES += _BUILDING_BIGMINDCLI
INCLUDEPATH += /usr/local/lib/libQxOrm.so/include
DESTDIR = $$PWD/bin/

CONFIG(debug, debug|release) {
TARGET = BigMindClid
} else {
TARGET = BigMindCli
} # CONFIG(debug, debug|release)

LIBS += -L"/usr/local/lib/libQxOrm.so/lib"

CONFIG(debug, debug|release) {
LIBS += -l"QxOrmd"
} else {
LIBS += -l"QxOrm"
} # CONFIG(debug, debug|release)

include($$PWD/BigMindCli.gen.pri)

SOURCES += $$PWD/src/BigMindCli_main.gen.cpp
