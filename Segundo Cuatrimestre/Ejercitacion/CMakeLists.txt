cmake_minimum_required(VERSION 3.17)
project(Ejercitacion)

set(CMAKE_CXX_STANDARD 14)

include_directories(lib)

add_executable(Ejercitacion
        lib/IO.h
        lib/list.h
        src/main.cpp)
