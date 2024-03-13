cmake_minimum_required(VERSION 3.26)
project(laba7)

set(CMAKE_CXX_STANDARD 17)


add_executable(task1
        task1.cpp)
add_executable(task2
        task2.cpp)
add_library(library_task1
        library_task1.cpp
        library_task1.h)
add_executable(light_task1
        light_task1.cpp)
target_link_libraries( light_task1 PRIVATE library_task1)
add_executable(light_task2
        light_task2.cpp)
add_library(library_task2
        library_task2.cpp
        library_task2.h)
target_link_libraries(light_task2 PRIVATE library_task2)
add_library(library_struct
        library_struct.cpp
        library_struct.h)
target_link_libraries(light_task2 PRIVATE library_struct)
target_link_libraries(light_task1 PRIVATE library_struct)
target_link_libraries(library_task1 PRIVATE library_struct)
target_link_libraries(library_task2 PRIVATE library_struct)