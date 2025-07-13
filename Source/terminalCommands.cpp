//
// Created by kirby on 13.07.25.
//

#include "terminalCommands.h"
#include <cstdio>



void clearTerminal()
{
    std::printf(
  "\033[2J" // clear the screen
  "\033[1;1H" );  // move cursor home

}
