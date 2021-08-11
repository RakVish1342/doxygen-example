set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

cmake_minimum_required(VERSION 3.7)

project(reference_planner)

set(sources
    src/reference_planner.cpp)

add_executable(reference_planner ${sources})


