cmake_minimum_required(VERSION 3.20)

project(AccelBench)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(
    accelbench
    src/main.cpp
    src/benchmark.cpp
)