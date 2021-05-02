cmake_minimum_required(VERSION 3.10)
project(ClangTidyProject)

set(CMAKE_CXX_STANDARD 14)

# generate compile_commands.json
set(CMAKE_EXPORT_COMPILE_COMMANDS ON CACHE INTERNAL "")

add_subdirectory(lib/)

add_executable(ClangTidyProject main.cpp)
target_link_libraries(ClangTidyProject PUBLIC my_lib)