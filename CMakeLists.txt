cmake_minimum_required(VERSION 3.20.0)

project(hello)
add_compile_options(-fsanitize=address)
add_link_options(-fsanitize=address)
add_executable(hello hello.cpp)

enable_testing()
add_test(NAME main COMMAND hello)
