

#include "main.h"
#include "player.h"
#include <iostream>
//Collection of game headers
#include "games.h"
#include <string>
#include "terminalCommands.h"

player Player0;


/*
 *Game list:
 *Rock Paper Scissors (rps)
 *Work (work)
 *Epic battle of awesome? (dm)
 */


bool firstTimeOpeningMenu = true;
//Where you start
void mainMenu()
{
    using namespace std;

    if (!firstTimeOpeningMenu) {clearTerminal();} //Clears terminal if it's not the first time opening the menu.
    else {firstTimeOpeningMenu = false;}

    //String used for menu selection
    string Command = "Uninitialized";

    cout << "You currently have $" << PlayerRef->getMoneyCount() << ".\nPick a game to play! Type \"quit\" to exit the program. \nGame selection:\nWork (work)\nRock, Paper, Scissors (rps)\nInput command: ";
    cin >> Command;
    //Makes input lowercase
    for (int i = 0; i < Command.length(); i++)
    {
        Command[i] = tolower(Command[i]);
    }

    if (Command == "rps")
    {
        rps::playRPS();
    }
    else if (Command == "work")
    {
        work::playWork();
    }
    else if (Command == "exit" || Command == "quit" || Command == "stop")
    {
        cout << "You ended the game with $" << PlayerRef->getMoneyCount() << ".\n";
        return;
    }
    else
    {
        cout << "Invalid Command. Make sure you input the names of the games written in parentheses.\n";
        cin.clear();
        cin.ignore(255, '\n');
        mainMenu();
        return;
    }

    mainMenu();
}

void assignObjectReferences()
{
    PlayerRef = &Player0;
}



int main()
{
    srand(time(0));
    assignObjectReferences();
    clearTerminal();
    std::cout << "Welcome to the money making game!\nYou start with $" << PlayerRef->getMoneyCount() << ", which you can use to WIN MORE MONEY!\n\n";
    mainMenu();

    return 0;
}