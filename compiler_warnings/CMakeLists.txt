cmake_minimum_required(VERSION 3.0)
project(CompilerWarningsProject)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_COMPILER "/usr/bin/g++")  # choose g++ compiler

add_executable(CompilerWarningsProject main.cpp)

# enable compiler warnings as errors
# See: https://gcc.gnu.org/onlinedocs/gcc/Warning-Options.html
target_compile_options(CompilerWarningsProject
                       PRIVATE -Werror -Wall -Wextra -Werror=sign-conversion)