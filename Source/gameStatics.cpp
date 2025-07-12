//
// Created by kirby on 12.07.25.
//

#include "gameStatics.h"
#include <iostream>



int gameStatics::rng(const int inMinNumber, const int inMaxNumber)
{
    return rand() % (inMaxNumber - inMinNumber + 1) + inMinNumber;
}
