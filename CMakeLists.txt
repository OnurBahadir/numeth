cmake_minimum_required(VERSION 3.17)
project(numeth)

set(CMAKE_CXX_STANDARD 20)

add_executable(numeth main.cpp numeth.cpp numeth.h equations.h)