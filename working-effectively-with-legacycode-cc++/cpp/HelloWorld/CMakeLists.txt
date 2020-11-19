project(HelloWorld)

#no need the following head include, because root CMakeLists already included.
#include_directories(../includes/HelloWorld)

#set(HEADER_FILES
#        Gregorian.h
#        Julian.h
#        )


set(SOURCE_FILES
        Gregorian.cpp
        Julian.cpp
        )

add_library(HelloWorld STATIC ${SOURCE_FILES})