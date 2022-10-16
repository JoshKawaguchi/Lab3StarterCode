cmake_minimum_required(VERSION 3.23)
project(Lab3StarterCode)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Lab3StarterCode
        Actor.cpp
        Actor.h
        lab3.cpp
        Movie.cpp
        Movie.h)
