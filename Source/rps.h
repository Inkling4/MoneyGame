//
// Created by kirby on 12.07.25.
//
#ifndef RPS_H
#define RPS_H

#endif //RPS_H



enum RPSHands
{
    rock,
    paper,
    scissors
};
enum RPSResult
{
    win,
    loss,
    tie,
    invalid
};


class rpsGame
{
private:


public:

    //Runs RPS simulation with a player and opponent hand input.
    //Returns result from the player's perspective.
    static enum RPSResult rpsBattle(enum RPSHands inPlayerHand, enum RPSHands inOpponentHand);


};

