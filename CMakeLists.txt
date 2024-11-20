cmake_minimum_required(VERSION 3.29)
project(c___dateAndTime_)

set(CMAKE_CXX_STANDARD 20)

add_executable(c___dateAndTime_ main.cpp
        Date.cpp
        Date.h
        Run.cpp
        Run.h)
