

#include "main.h"
#include "player.h"
#include <iostream>
#include "rps.h"


//Where you start
void mainMenu()
{
    enum RPSHands PlayerHand = rock;
    enum RPSHands OpponentHand = scissors;
    std::cout << rpsBattle(PlayerHand, OpponentHand);



}


int main()
{
    srand(time(0));
    //Initializes player
    player Player0;
    mainMenu();

    return 0;
}