

#include "main.h"
#include "player.h"
#include <iostream>
#include "rps.h"

player Player0;


//Where you start
void mainMenu()
{
    std::cout << "This text should disappear.";
    rpsGame::playRPS();



}

void assignObjectReferences()
{
    PlayerRef = &Player0;
}



int main()
{
    srand(time(0));
    assignObjectReferences();
    mainMenu();

    return 0;
}