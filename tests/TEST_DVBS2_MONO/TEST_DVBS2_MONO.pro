CONFIG += console c++2a precompile_header

PRECOMPILED_HEADER = ../../stdafx/stdafx.h
HEADERS += ../../stdafx/stdafx.h \
    ../../random/random.hpp

INCLUDEPATH += "gtest-1.10/include"
INCLUDEPATH += "gtest-1.10/"
INCLUDEPATH += "../../"

SOURCES += \
    gtest-1.10/src/gtest-all.cc \
    gtest-1.10/src/gtest-death-test.cc \
    gtest-1.10/src/gtest-filepath.cc \
    gtest-1.10/src/gtest-matchers.cc \
    gtest-1.10/src/gtest-port.cc \
    gtest-1.10/src/gtest-printers.cc \
    gtest-1.10/src/gtest-test-part.cc \
    gtest-1.10/src/gtest-typed-test.cc \
    gtest-1.10/src/gtest.cc \
    main.cpp

HEADERS += \
    ../../bits_operations/bits_operations.hpp \
    ../../dvbs2_mono/dvbs2_mono.hpp \
    ../../idxs/idxs.hpp \
    ../../stdafx/stdafx.h
