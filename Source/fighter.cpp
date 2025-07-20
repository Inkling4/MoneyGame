//
// Created by kirby on 20.07.25.
//

#include "fighter.h"

fighter::fighter(float health)
{
    mHealth = health;

}
fighter::fighter()
{
    mHealth = 100.f;
}

fighter::~fighter() = default;


float fighter::getHealth() const
{
    return mHealth;
}

bool fighter::takeDamage(float Damage)
{
    bool isStillAlive = true;
    mHealth -= Damage;
    if (mHealth <= 0)
    {
        mHealth = 0;
        isStillAlive = false;
    }
    return isStillAlive;
}

