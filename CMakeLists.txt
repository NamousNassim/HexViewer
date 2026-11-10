cmake_minimum_required(VERSION 3.10.0)
project(cpepe VERSION 0.1.0 LANGUAGES C CXX)

add_executable(cpepe src/main.cpp)

configure_file(src/test.txt test.txt COPYONLY)

