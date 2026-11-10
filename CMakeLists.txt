cmake_minimum_required(VERSION 3.10.0)
project(cpepe VERSION 0.1.0 LANGUAGES C CXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(cpepe src/main.cpp src/myClass.cpp)


target_include_directories(cpepe PRIVATE include)
