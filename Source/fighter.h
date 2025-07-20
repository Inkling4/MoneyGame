//
// Created by kirby on 20.07.25.
//

#ifndef FIGHTER_H
#define FIGHTER_H


//Class used for the deathmatch game.
//Make sure to insert the start health! otherwise default is 100
class fighter {
    float mHealth;


public:
    explicit fighter(float Health);
    explicit fighter();
    [[nodiscard]] float getHealth() const;
    //Loses health specified. Returns false if the fighter dies.
    bool takeDamage(float Damage);
    //Destructor. Currently empty.
    ~fighter();
};



#endif //FIGHTER_H
