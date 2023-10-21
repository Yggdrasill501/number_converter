cmake_minimum_required(VERSION 3.26)
project(number_converter)

set(CMAKE_CXX_STANDARD 23)

add_executable(number_converter main.cpp
        converter.cpp
        converter.h)
