//
// Created by kirby on 12.07.25.
//

#ifndef GAMESTATICS_H
#define GAMESTATICS_H

#endif //GAMESTATICS_H


/*
 *Common game logic static functions
 */

class gameStatics
{
public:
    //Returns a random value between the minimum and max number specified.
    static int rng(int inMinNumber, int inMaxNumber);

    //Makes user input a bet. Returns the bet in question, and clears the cin buffer.
    //Makes sure player can afford the bet.
    //Returns 0 if the player chooses to quit to menu instead.
    static int bet();

};