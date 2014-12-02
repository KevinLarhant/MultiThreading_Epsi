cmake_minimum_required(VERSION 2.8.4)
project(MultiThreading_Epsi)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(MultiThreading_Epsi ${SOURCE_FILES})