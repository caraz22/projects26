cmake_minimum_required(VERSION 3.20)

project(Room8)

set(CMAKE_CXX_STANDARD 17)

add_executable(Room8
    src/main.cpp
    src/Player.cpp
)

target_include_directories(Room8 
    PRIVATE 
        include
)