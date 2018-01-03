cmake_minimum_required(VERSION 3.8)
project(usaco)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp LeetCode.cpp LeetCode.h)
add_executable(usaco ${SOURCE_FILES})