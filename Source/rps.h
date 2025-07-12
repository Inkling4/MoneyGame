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
public:




    //Runs RPS simulation with a player and opponent hand input.
    //Returns 0 if player wins, 1 if opponent wins, 2 if it's a tie, and -1 if an input is invalid.
    static enum RPSResult rpsBattle(enum RPSHands inPlayerHand, enum RPSHands inOpponentHand);

};

