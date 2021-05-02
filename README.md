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
$ run-clang-tidy.py -checks="*"  # or run-clang-tidy-<Version>.py
```
See: https://clang.llvm.org/extra/clang-tidy/ <br/>
See: https://www.kdab.com/clang-tidy-part-1-modernize-source-code-using-c11c14/