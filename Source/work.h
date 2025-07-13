//
// Created by kirby on 13.07.25.
//
#pragma once
#include <string>
#ifndef WORK_H
#define WORK_H

//Game about doing simple tasks for money. No risk.

class work
{
private:
    //Asks user to input word, and compares it to input parameter.
    //Returns true if the input matches the solution.
    static bool inputWordsAndCompare(std::string solution);

public:
    static void playWork();


};



#endif //WORK_H
