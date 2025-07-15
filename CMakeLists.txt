cmake_minimum_required(VERSION 3.31)
project(MoneyGame)

set(CMAKE_CXX_STANDARD 20)

add_executable(MoneyGame Source/main.cpp
        Source/player.cpp
        "Source/player.h"
        Source/main.h
        Source/rps.cpp
        Source/rps.h
        Source/gameStatics.cpp
        Source/gameStatics.h
        Source/terminalCommands.cpp
        Source/terminalCommands.h
        Source/games.h
        Source/work.cpp
        Source/work.h
        Source/deathmatch.cpp
        Source/deathmatch.h)
