cmake_minimum_required(VERSION 3.5)
project(testArray)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES test.cpp SuperArray.cpp SuperArray.h)
add_executable(mytest ${SOURCE_FILES})
