cmake_minimum_required(VERSION 3.6)
project(taxi)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Car.h Car.cpp)
add_executable(taxi ${SOURCE_FILES})