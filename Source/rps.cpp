//
// Created by kirby on 12.07.25.
//

#include "rps.h"
#include <iostream>
#include "terminalCommands.h"


RPSResult rpsGame::rpsBattle(const RPSHands inPlayerHand, const RPSHands inOpponentHand)
{
    switch (inPlayerHand)
    {
        case (rock):
            switch (inOpponentHand)
            {
                case (rock): return tie;
                case (paper): return loss;
                case (scissors): return win;
                default: return tie;
            }

        case (paper):
            switch (inOpponentHand)
            {
                case (rock): return win;
                case (paper): return tie;
                case (scissors): return loss;
                default: return tie;
            }

        case (scissors):
            switch (inOpponentHand)
            {
                case (rock): return loss;
                case (paper): return win;
                case (scissors): return tie;
                default: return tie;
            }
        default:
            return tie;
    }


}



void rpsGame::playRPS()
{
    using namespace std;


    RPSHands PlayerHand;


    clearTerminal();

    cout << "Welcome to the Rock, Paper, Scissors game!\n";
    cout << "You will play against a blind toddler. Let's go gambling!\n";
    cout << "Input hand (r/p/s): ";

    char PlayerHandInput;
    if (cin >> PlayerHandInput)
    {
        PlayerHandInput = tolower(PlayerHandInput);
        switch (PlayerHandInput)
        {
            case ('r'):
                PlayerHand = rock;
                break;
            case ('p'):
                PlayerHand = paper;
                break;
            case ('s'):
                PlayerHand = scissors;
                break;
            case ('g'):
                cout << "\nNo, a gun is not allowed, dummy.\n";
                break;
            default:
                cout << "\nERR: Invalid input! Make sure to only input r, p, or s.\n";
                break;
        }
    }
    //This else statement is triggered if the char input is invalid
    else
    {
        cout << "\nERR: Invalid input! Make sure to only input r, p, or s.\n";
    }

}


