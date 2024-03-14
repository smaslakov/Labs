cmake_minimum_required(VERSION 3.26)
project(laba5)

set(CMAKE_CXX_STANDARD 17)

add_executable(task1 task1.cpp)
add_executable(task2
        task2.cpp)
add_executable(task3
        task3.cpp)
add_executable(task4
        task4.cpp)
add_executable(task5
        task5.cpp)
add_library(library
        library_static_stacik.cpp
        library_static_stacik.h)
target_link_libraries(task1 PRIVATE library)
add_library(dyn_library SHARED library_dyn_polyanochka.cpp
        library_dyn_polyanochka.h)
target_link_libraries(task2 PRIVATE dyn_library )

