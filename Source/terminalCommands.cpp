//
// Created by kirby on 13.07.25.
//

#include "terminalCommands.h"
#include <cstdlib>

bool isWindows = false;

void clearTerminal()
{
    if (isWindows)
    {
        system("cls");
    }
    else
    {
        system("clear");
    }

}
