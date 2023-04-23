cmake_minimum_required(VERSION 3.20.0)
project(Hello)
add_executable(hello hello.cpp)
add_compile_options(-fsanitize=undefined)

enable_testing()
add_test(NAME main COMMAND hello)
