cmake_minimum_required(VERSION 3.8)
project(testArray)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES testArray.cpp SuperArray.cpp SuperArray.h)
add_executable(testArray ${SOURCE_FILES})
