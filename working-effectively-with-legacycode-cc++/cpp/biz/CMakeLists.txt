cmake_minimum_required(VERSION 3.17)
project(biz)

set(CMAKE_CXX_STANDARD 14)

FILE(GLOB SRC_LIST_CPP src/SproutClass/*.cpp
        src/EncapsulateGlobalReferences/*.cpp)
FILE(GLOB SRC_LIST_C src/seam/preprocessing_seams/*.c
        src/ReplaceFunctionWithFunctionPointer/*.c)

set(SOURCE_FILES
        src/seam/CAsyncSslRec.cpp
        src/seam/linked_seam/CrossPlaneFigure.cpp
        )

#add_library(biz STATIC ${SOURCE_FILES})
ADD_LIBRARY(biz SHARED
                ${SRC_LIST_CPP} ${SRC_LIST_C}
        ${SOURCE_FILES}
        )
#add_executable(biz main.cpp)