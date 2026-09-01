cmake_minimum_required(VERSION 3.20)
project(cpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(hello_world apps/hello_world.cpp)
add_executable(initialization_way apps/ch1/6_initialization_way.cpp)
add_executable(see_different_type_cin apps/ch1/iostream_cout_cin_endl.cpp)