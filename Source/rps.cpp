//
// Created by kirby on 12.07.25.
//

#include "rps.h"
#include <iostream>


RPSResult rpsGame::rpsBattle(const enum RPSHands inPlayerHand, const enum RPSHands inOpponentHand)
{
    switch (inPlayerHand)
    {
        case (rock):
            switch (inOpponentHand)
            {
                case (rock): return tie;
                case (paper): return loss;
                case (scissors): return win;
                default:
                    std::cout << "Invalid opponent hand!\n";
                    return invalid;
            }

        case (paper):
            switch (inOpponentHand)
            {
                case (rock): return win;
                case (paper): return tie;
                case (scissors): return loss;
                default:
                    std::cout << "Invalid opponent hand!\n";
                    return invalid;
            }

        case (scissors):
            switch (inOpponentHand)
            {
                case (rock): return loss;
                case (paper): return win;
                case (scissors): return tie;
                default:
                    std::cout << "Invalid opponent hand!\n";
                    return invalid;
            }

    default:
        std::cout << "ERR: Invalid player hand!\n";
        return invalid;
    }

}



