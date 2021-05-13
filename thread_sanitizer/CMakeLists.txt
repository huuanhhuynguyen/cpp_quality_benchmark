cmake_minimum_required(VERSION 3.0)
project(ThreadSanitizerProject)

set(CMAKE_CXX_STANDARD 14)

add_executable(ThreadSanitizerProject main.cpp)
target_compile_options(ThreadSanitizerProject PRIVATE -fsanitize=thread)
target_link_options(ThreadSanitizerProject PRIVATE -fsanitize=thread)