cmake_minimum_required(VERSION 3.16)
project(main)

set(CMAKE_CXX_STANDARD 14)
set(ENV{TERM} "xterm-256color")

add_executable(main main.cpp)