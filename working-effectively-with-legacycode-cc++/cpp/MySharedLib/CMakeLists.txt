cmake_minimum_required(VERSION 3.16)
project(MySharedLib)
# C++11 编译
set(CMAKE_CXX_STANDARD 14)
#创建共享库
add_library(MySharedLib SHARED library.cpp library.h)