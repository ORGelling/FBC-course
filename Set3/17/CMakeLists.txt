cmake_minimum_required(VERSION 3.26)
project(Exercise 17)

# set C++ standard (C++26)
set(CMAKE_CXX_STANDARD 26)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Add compile options
add_compile_options(-Wall -Werror)

# Add your executable (replace main.cpp with your actual source file)
add_executable( main.cpp)
