# cmake_minimum_required(VERSION <specify CMake version here>)
project(untitled C)

set(CMAKE_C_STANDARD 99)

add_library(untitled library.c library_wscallop.h ws_sort_inputs.c main.c ws_earlestjobfirst.c)