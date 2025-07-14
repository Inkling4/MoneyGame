//
// Created by kirby on 7/11/25.
//

#ifndef PLAYER_H
#define PLAYER_H



class player
{
    int money;


public:
    //Constructor
    player();
    //Returns current amount of money of player
    [[nodiscard]] int getMoneyCount() const;
    //Adds money to player's wallet.
    void earnMoney(int MoneyGain);
    //Removes money from player. Cannot go below 0.
    void loseMoney(int MoneyLoss);

};

//Reference to the player object
inline player* PlayerRef;

#endif //PLAYER_H
