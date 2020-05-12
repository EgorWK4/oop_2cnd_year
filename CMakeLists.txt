cmake_minimum_required(VERSION 3.16)
project(adapters)

set(CMAKE_CXX_STANDARD 20)

add_executable(adapters main.cpp computer_elems.h storage.h user.h)