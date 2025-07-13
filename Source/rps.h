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
    tied
};


class rps
{
private:
    //Runs RPS simulation with a player and opponent hand input.
    //Returns result from the player's perspective.
    static RPSResult rpsBattle(RPSHands inPlayerHand, RPSHands inOpponentHand);
public:
    static void playRPS();
};

