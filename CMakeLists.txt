cmake_minimum_required(VERSION 3.20.0)
set(CMAKE_VERBOSE_MAKEFILE ON)

project(hello)
add_executable(hello hello.cpp)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=undefined")


enable_testing()
add_test(NAME main COMMAND hello)
