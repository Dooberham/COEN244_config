cmake_minimum_required(VERSION 3.30)
project(COEN244_config)

set(CMAKE_CXX_STANDARD 20)

add_executable(COEN244_config main.cpp
        DataStorage.cpp
        DataStorage.h)
