cmake_minimum_required(VERSION 3.12)
project(Task_14.59)

add_executable(Task_14.59 main.cpp)
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/first.txt ${CMAKE_CURRENT_BINARY_DIR}/first.txt COPYONLY)
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/second.txt ${CMAKE_CURRENT_BINARY_DIR}/second.txt COPYONLY)

