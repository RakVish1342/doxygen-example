set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

cmake_minimum_required(VERSION 3.7)

project(path_planner)

set(sources
    src/path_planner.cpp)

add_executable(path_planner ${sources})


