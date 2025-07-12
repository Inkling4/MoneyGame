

#include "main.h"
#include "player.h"
#include <iostream>
#include "rps.h"

    player Player0;
    rpsGame RockPaperScissors;


//Where you start
void mainMenu()
{
    enum RPSHands PlayerHand = rock;
    enum RPSHands OpponentHand = scissors;
    std::cout << RPS->rpsBattle(PlayerHand, OpponentHand);

}

void assignObjectReferences()
{
    RPS = &RockPaperScissors;
}



int main()
{
    srand(time(0));
    assignObjectReferences();
    mainMenu();

    return 0;
}