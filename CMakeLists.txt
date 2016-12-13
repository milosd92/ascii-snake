cmake_minimum_required(VERSION 3.6)
project(ascii_snake)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.c snake.c snake.h map.h map.c keyboard.h keyboard.c)
add_executable(ascii_snake ${SOURCE_FILES})