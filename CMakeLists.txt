cmake_minimum_required(VERSION 3.10)
project(LiteSeg VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(liteseg src/main.cpp)
