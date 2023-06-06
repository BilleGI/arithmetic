cmake_minimum_required(VERSION 3.5)

add_executable(arithmetic main.cpp ${MY_INCLUDE_DIR}/math_lib.h)

target_include_directories(arithmetic PRIVATE ${MY_INCLUDE_DIR})
