//
// Created by kirby on 7/11/25.
//

#include "player.h"

//Initializes default values.
player::player()
{
    money = 200;


}

int player::getMoneyCount() const
{
    return money;
}

void player::earnMoney(int MoneyGain)
{
    money += MoneyGain;
}

void player::loseMoney(int MoneyLoss)
{
    money -= MoneyLoss;
    if (money < 0) {money = 0;}
}


