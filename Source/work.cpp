//
// Created by kirby on 13.07.25.
//

#include "work.h"
#include "player.h"
#include "terminalCommands.h"
#include <iostream>
#include <string>
#include "gameStatics.h"

int amountOfWords = 2; //Change this number to the amount of words in the array below
std::string wordsArray[amountOfWords] = {"hi", "po"};



bool work::inputWordsAndCompare(const std::string solution)
{
    using namespace std;

    //Amount of money you earn
    int MoneyReward = gameStatics::rng(5, 15);

    cin.ignore (255, '\n');
    clearTerminal();
    cout << "You currently have $" << PlayerRef->getMoneyCount() <<".\nIf you ever want to stop working, type \"quit\" to go back to the main menu.\n";
    cout << "Word to type: " << solution << "\nPlease type it here: ";

    string input;
    cin >> input;

    if (input == solution)
    {
        PlayerRef->earnMoney(MoneyReward);
        cout << "Correct!\nYou earned $" << MoneyReward << ", bringing your total wallet to $" << PlayerRef->getMoneyCount() << ".\n";
        return true;
    }
    if (input == "quit" || input == "exit" || input == "stop")
    {
        return false;
    }

    cout << "You typed it incorrectly!\nYou did not earn any money from that.\n";
    return true;


}



void work::playWork()
{
    using namespace std;

    clearTerminal();
    cout << "Welcome to your job! You will be tasked with typing whatever you are told to type.\nFor each word you type correctly, you will earn small amounts of money.\n";
    cin.ignore(255, '\n');

    bool alwaysTrue = true;
    while (alwaysTrue)
    {
        //Selects random word as int
        int wordSelection = gameStatics::rng(0, amountOfWords - 1);
        //Calls the game
        if (inputWordsAndCompare(wordsArray[wordSelection]) == false)
        {
            return; //If returned false, means player wants to quit.
        }

        cin.ignore(255, '\n');


    }
}
