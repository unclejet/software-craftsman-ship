cmake_minimum_required(VERSION 3.14)
project(cpp)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp)
add_executable(LegacyCode_run ${SOURCE_FILES})

#here include headers will be used for all biz and test sub directories.
include_directories(includes/HelloWorld)
include_directories(includes/Counter)

#add all biz sub directories which contains cpp files.
add_subdirectory(HelloWorld)
add_subdirectory(Counter)

#add unit test sub directories which use google-test.
add_subdirectory(tests)

