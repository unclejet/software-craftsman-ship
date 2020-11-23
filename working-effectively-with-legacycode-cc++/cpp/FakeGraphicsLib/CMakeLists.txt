project(fake-graphics-lib)

#include_directories(./)

set(SOURCE_FILES
        FakeGraphics.cpp
        )

add_library(fake-graphics-lib SHARED ${SOURCE_FILES} Graphics.h GraphicsAction.h)