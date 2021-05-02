cmake_minimum_required(VERSION 3.0)
project(SanitizerProject)

set(CMAKE_CXX_STANDARD 14)

add_executable(SanitizerProject main.cpp)
target_compile_options(SanitizerProject PRIVATE -fsanitize=address -fsanitize=undefined)
target_link_options(SanitizerProject PRIVATE -fsanitize=address -fsanitize=undefined)