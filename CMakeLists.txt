# cmake_minimum_required(VERSION <specify CMake version here>)
project(Task4)

set(CMAKE_CXX_STANDARD 14)

add_executable(Task4 main.cpp Guesser.h Chooser.h Chooser.cpp Guesser.cpp calculate.cpp calculate.h)