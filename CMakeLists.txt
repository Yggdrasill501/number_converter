cmake_minimum_required(VERSION 3.26)
project(number_converter)

set(CMAKE_CXX_STANDARD 23)

add_executable(number_converter main.cpp
        converter/converter.h
        converter/read_input.cpp
        converter/user_interface.cpp
        converter/decimal_to_hexadecimal.cpp
        converter/hexadecimal_to_decimal.cpp
        converter/print_number.cpp)
