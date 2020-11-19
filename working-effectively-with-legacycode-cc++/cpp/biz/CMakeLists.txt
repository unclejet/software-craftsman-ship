cmake_minimum_required(VERSION 3.17)
project(biz)

set(CMAKE_CXX_STANDARD 14)

#FILE(GLOB SRC_LIST_CPP src/seam/*.cpp)
FILE(GLOB SRC_LIST_PREPROCESSING_SEAM_C src/seam/preprocessing_seams/*.c)

set(SOURCE_FILES
        src/seam/CAsyncSslRec.cpp
        )

#add_library(biz STATIC ${SOURCE_FILES})
ADD_LIBRARY(biz SHARED
#        ${SRC_LIST_CPP} ${SRC_LIST_C}
        ${SRC_LIST_PREPROCESSING_SEAM_C}
        ${SOURCE_FILES}
        )
#add_executable(biz main.cpp)