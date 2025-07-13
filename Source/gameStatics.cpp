//
// Created by kirby on 12.07.25.
//

#include "gameStatics.h"
#include <iostream>
#include "main.h"
#include "player.h"


int gameStatics::rng(const int inMinNumber, const int inMaxNumber)
{
    return rand() % (inMaxNumber - inMinNumber + 1) + inMinNumber;
}

int gameStatics::bet()
{
    using namespace std;
    int Bet;
    const int PlayerWallet = PlayerRef->getMoneyCount();

    if (PlayerWallet == 0)
    {
        cout << "\nYou don't have any money! You cannot play this game.\n";
        return 0;
    }
    bool isChoiceDone = false;
    while (!isChoiceDone) //Will always be true. Just a way to force you to make a valid bet.
    {
        cout << "Your current wallet holds $" << PlayerWallet << ". Place your bet: ";
        if (cin >> Bet)
        {
            if (Bet > PlayerWallet)
            {
                cout << "You cannot afford this bet. Betting maximum amount of $" << PlayerWallet << " instead.\n";
                return PlayerWallet;
            }
            else if (Bet < 0)
            {
                cout << "You cannot bet negative numbers, that's cheating.\n";
            }
            else if (Bet == 0)
            {
                cout << "Intent to back out acknowledged. Aborting...\n";
                return 0;
            }
            else
            {
                return Bet;
            }
        }
        else
        {
            cout << "This input is invalid. Please use a whole number.\n";
            cin.clear();
            cin.ignore(255, '\n');
        }
    }

}
