

#include "main.h"
#include "player.h"
#include <iostream>
#include "rps.h"
#include <string>

player Player0;


//Where you start
void mainMenu()
{
    using namespace std;
    string Command = "Uninitialized";

    cout << "Pick a game to play!\nGame selection:\nRock, Paper, Scissors (rps)\nInput command: ";
    cin >> Command;
    //Makes input lowercase
    for (int i = 0; i < Command.length(); i++)
    {
        Command[i] = tolower(Command[i]);
    }

    if (Command == "rps")
    {
        rpsGame::playRPS();
    }
    else
    {
        cout << "Invalid Command. Make sure you input the names of the games written in parentheses.\n";
        cin.clear();
        cin.ignore(255, '\n');
        mainMenu();
    }


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