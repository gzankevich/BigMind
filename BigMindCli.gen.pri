#################################################################################################
## File created by QxEntityEditor 1.1.9 (2016/07/23 21:31) : please, do NOT modify this file ! ##
#################################################################################################

!contains(DEFINES, _QX_NO_PRECOMPILED_HEADER) {
PRECOMPILED_HEADER += $$PWD/include/BigMindCli_precompiled_header.gen.h
} # !contains(DEFINES, _QX_NO_PRECOMPILED_HEADER)

HEADERS += $$PWD/include/BigMindCli_precompiled_header.gen.h
HEADERS += $$PWD/include/BigMindCli_export.gen.h

HEADERS += $$PWD/include/Thought.gen.h

HEADERS += $$PWD/custom/include/Thought.h

SOURCES += $$PWD/src/Thought.gen.cpp

SOURCES += $$PWD/custom/src/Thought.cpp

include($$PWD/custom/BigMindCli.pri)
