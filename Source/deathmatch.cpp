//
// Created by kirby on 15.07.25.
//

#include "deathmatch.h"
#include <iostream>
#include "terminalCommands.h"
#include "gameStatics.h"
#include "player.h"
#include "fighter.h"





bool deathmatch::doBattle()
{
    using namespace std;
    fighter playerFighter;
    fighter enemyFighter(130.f);
    fighter* pFighter;

    


    return true;

}

void deathmatch::playDeathmatch()
{
    using namespace std;

    clearTerminal();
    cout << "Welcome to the arena!\nHere you will place a bet on your warrior in the battle against the gladiator!\nYour warrior isn't the strongest, and the odds are not in your favor. The payout however, is very big.\n";
    bool doesPlayerQuit = false;
    while (!doesPlayerQuit) //Returns when player doesn't want to/cannot bet
    {
        int playerBet = gameStatics::bet();
        if (playerBet == 0)
        {
            doesPlayerQuit = true;
        }
        else
        {
            doBattle();
        }
    }






}


