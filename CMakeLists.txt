cmake_minimum_required(VERSION 3.13)
project(FindDeterminant C)

set(CMAKE_C_STANDARD 99)

add_executable(FindDeterminant main.c matrix.c matrix.h)

target_compile_options(FindDeterminant PRIVATE -Wall -Werror)

set_target_properties(FindDeterminant PROPERTIES
OUTPUT_NAME "FindDeterminant"
SUFFIX ".out")