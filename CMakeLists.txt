cmake_minimum_required(VERSION 3.12)
project(pc2)

set(CMAKE_CXX_STANDARD 17)

add_executable(pc2 main.cpp Defense.cpp Defense.h Attack.cpp Attack.h Fighter.cpp Fighter.h Fight.cpp Fight.h Arena.cpp Arena.h test.cpp)