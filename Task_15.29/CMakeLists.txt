cmake_minimum_required(VERSION 3.12)
project(Task_15.29)

add_executable(Task_15.29 main.cpp)
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/first.txt ${CMAKE_CURRENT_BINARY_DIR}/first.txt)
