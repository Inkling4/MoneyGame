//
// Created by kirby on 12.07.25.
//

#include "rps.h"
#include <iostream>

int rpsBattle(enum RPSHands inPlayerHand, enum RPSHands inOpponentHand)
{


    switch (inPlayerHand)
    {
        case (0):
            switch (inOpponentHand)
            {
                case (0): return 2;
                case (1): return 1;
                case(2): return 0;
                default:
                    std::cout << "Invalid opponent hand!\n";
                    return -1;
            }

        case (1):
            switch (inOpponentHand)
            {
                case (0): return 2;
                case (1): return 1;
                case(2): return 0;
                default:
                    std::cout << "Invalid opponent hand!\n";
                    return -1;
            }

        case (2):

    default:
        std::cout << "ERR: Invalid player hand!\n";
        return -1;
    }

}