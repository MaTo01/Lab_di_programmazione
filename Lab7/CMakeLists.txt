cmake_minimum_required(VERSION 3.0.0)

project(MazeSolver LANGUAGES CXX)

include_directories(include)

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/maze.txt
    DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

add_executable(main 
    src/main.cpp)

