cmake_minimum_required(VERSION 3.24)
project(physics)

set(CMAKE_CXX_STANDARD 17)

add_executable(physics main.cpp Object.cpp Object.h Space2D.cpp Space2D.h)
