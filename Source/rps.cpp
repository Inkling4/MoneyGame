//
// Created by kirby on 12.07.25.
//

#include "rps.h"
#include <iostream>
#include "terminalCommands.h"
#include "gameStatics.h"
#include <string>
//For money reasons, access to player object reference
#include "player.h"

RPSResult rpsGame::rpsBattle(const RPSHands inPlayerHand, const RPSHands inOpponentHand)
{
    switch (inPlayerHand)
    {
        case (rock):
            switch (inOpponentHand)
            {
                case (rock): return tied;
                case (paper): return loss;
                case (scissors): return win;
                default: return tied;
            }

        case (paper):
            switch (inOpponentHand)
            {
                case (rock): return win;
                case (paper): return tied;
                case (scissors): return loss;
                default: return tied;
            }

        case (scissors):
            switch (inOpponentHand)
            {
                case (rock): return loss;
                case (paper): return win;
                case (scissors): return tied;
                default: return tied;
            }
        default:
            return tied;
    }


}



void rpsGame::playRPS()
{
    using namespace std;


    RPSHands PlayerHand;
    RPSHands OpponentHand;
    string OpponentHandString;


    clearTerminal();

    cout << "Welcome to the Rock, Paper, Scissors game!\n";
    cout << "You will play against a blind toddler. Let's go gambling!\n";
    int Bet = gameStatics::bet();
    if (Bet == 0) {return;}


    bool isSelectionDone = false;
    while (!isSelectionDone)
    {
        cout << "Input hand (r/p/s): ";
        if (char PlayerHandInput; cin >> PlayerHandInput)
        {
            PlayerHandInput = tolower(PlayerHandInput);
            switch (PlayerHandInput)
            {
                case ('r'):
                    PlayerHand = rock;
                    isSelectionDone = true;
                    break;
                case ('p'):
                    PlayerHand = paper;
                    isSelectionDone = true;
                    break;
                case ('s'):
                    PlayerHand = scissors;
                    isSelectionDone = true;
                    break;
                case ('g'):
                    cout << "\nNo, a gun is not allowed, dummy.\n";
                    cin.ignore(255, '\n');
                    break;
                default:
                    cout << "\nERR: Invalid input! Make sure to only input r, p, or s.\n";
                    cin.ignore(255, '\n');
                    break;
            }
        }
        //This else statement is triggered if the char input is invalid
        else
        {
            cout << "\nERR: Invalid input! Make sure to only input r, p, or s.\n";
        }
    }

    cin.clear();
    cin.ignore(255, '\n');
    //Randomizes opponent hand
    switch (gameStatics::rng(0,2))
    {
        case (0):
            OpponentHand = rock;
            OpponentHandString = "rock";
            break;
        case (1):
            OpponentHand = paper;
            OpponentHandString = "paper";
            break;
        case (2):
            OpponentHand = scissors;
            OpponentHandString = "scissors";
            break;
        default:
            cout << "The opponent selected an invalid hand, check the code in rps.cpp or gameStatics.cpp\n";
            return;
    }


    cout << "The enemy picked " << OpponentHandString << ". ";
    //Runs the RPS simulation
    switch (rpsBattle(PlayerHand, OpponentHand))
    {
        case (win):
            cout << "You win!\nYou profited $" << Bet << ".\n";
            PlayerRef->earnMoney(Bet);
            break;
        case (loss):
            cout << "You lose!\nYou lost your bet ($" << Bet << ").\n";
            PlayerRef->loseMoney(Bet);
            break;
        case (tied):
            cout << "It's a tie!\nYour bet has been returned to you.\n";
            break;
    }
    cout << "You now have $" << PlayerRef->getMoneyCount() << ".\nDo you want to play again? (y/n): ";
    if (char PlayerInput; cin >> PlayerInput)
    {
        PlayerInput = tolower(PlayerInput);
        if (PlayerInput == 'y')
        {
            cin.ignore(255, '\n');
            playRPS();
        }
        else
        {
            cout << "Press enter to go back to the main menu.";
            cin.ignore(255, '\n');
        }
    }

}


