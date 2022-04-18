cmake_minimum_required(VERSION 3.22)
project(StudentManagementSystem C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(StudentManagementSystem
        Base.h
        main.c
        Menu.h)
