cmake_minimum_required(VERSION 3.31)
project(MoneyGame)

set(CMAKE_CXX_STANDARD 20)

add_executable(MoneyGame main.cpp
        player.cpp
        player.h)
