//
// Created by dor on 26/05/2020.
//
#include <iostream>
using namespace std;
#ifndef WARGAME_A_MASTER_SNIPER_HPP
#define WARGAME_A_MASTER_SNIPER_HPP
class Sniper : public Soldier {

private:

public:

    Sniper() {

    }

    Sniper(uint number) {
        player_number = number;
        hp = 100;
        damage = 50;
        types = " S";
    }

    //destructor for the Object
    virtual ~Sniper(){}
};
#endif //WARGAME_A_MASTER_SNIPER_HPP
