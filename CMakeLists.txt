cmake_minimum_required(VERSION 3.24)
project(physics)

set(CMAKE_CXX_STANDARD 17)

add_executable(physics main.cpp src/Object.cpp src/Object.h src/Space2D.cpp src/Space2D.h)
