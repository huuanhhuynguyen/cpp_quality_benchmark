# Free/Open-Source C++ Quality Tools Benchmark

## Compiler warnings
```
# CMakeLists.txt
target_compile_options(CompilerWarningsProject
                       PRIVATE -Werror -Wall -Wextra -Werror=sign-conversion)
```
See: https://gcc.gnu.org/onlinedocs/gcc/Warning-Options.html

## CppCheck
```
$ sudo apt install cppcheck
$ cd <ProjectFolder>
$ cppcheck --enable=all --output-file=cppcheck_output.txt .
```
See: http://cppcheck.sourceforge.net/manual.pdf

## Clang-format
```
$ sudo apt install clang-format
$ clang-format -style=google -dump-config > .clang-format
$ clang-format main.cpp > main_formatted.cpp
```
See: https://clang.llvm.org/docs/ClangFormat.html <br/>
See: https://leimao.github.io/blog/Clang-Format-Quick-Tutorial/

## Clang-tidy
```
$ sudo apt-get install clang-tidy
$ cd <ProjectFolder>  # cd clang_tidy/
$ mkdir build && cd build
$ cmake ..
$ run-clang-tidy.py -checks="*" > ../clang_tidy_output.txt # or run-clang-tidy-<Version>.py
```
See: https://clang.llvm.org/extra/clang-tidy/ <br/>
See: https://www.kdab.com/clang-tidy-part-1-modernize-source-code-using-c11c14/

## Address (ASAN) and Undefined Behavior (UBSAN) Sanitizers
Enable ASAN and UBSAN (for Clang/GCC) by adding these flags to compiling and linking options
```
# CMakeLists.txt
target_compile_options(SanitizerProject PRIVATE -fsanitize=address -fsanitize=undefined)
target_link_options(SanitizerProject PRIVATE -fsanitize=address -fsanitize=undefined)
```
Get UBSAN (runtime error) and ASAN output
```
$ mkdir build && cd build
$ cmake .. && make
$ ./SanitizerProject 2> ../sanitizer_err.txt
```
Switch macro on and off for either seeing ASAN or UBSAN errors
```
// main.cpp:8
#if 1
```

## Thread Sanitizer
Similar to ASAN and UBSAN, just add a compiling and linking option
```
# CMakeLists.txt
target_compile_options(SanitizerProject PRIVATE -fsanitize=thread)
target_link_options(SanitizerProject PRIVATE -fsanitize=thread)
```
Get thread sanitizer output
```
$ mkdir build && cd build
$ cmake .. && make
$ ./ThreadSanitizerProject 2> ../sanitizer_err.txt
```




