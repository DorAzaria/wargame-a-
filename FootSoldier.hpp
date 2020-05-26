//
// Created by dor on 25/05/2020.
//
#include <iostream>
using namespace std;
#include "Soldier.hpp"

#ifndef WARGAME_A_MASTER_FOOTSOLDIER_HPP
#define WARGAME_A_MASTER_FOOTSOLDIER_HPP

class FootSoldier : public Soldier {

private:
    uint player_number;
public:

    FootSoldier() {

    }

    FootSoldier(uint player_number) {
        cout<< " hi " << endl;
        this->player_number = player_number;
        hp = 150;
        damage = 10;
    }

     //destructor for the Object
     virtual ~FootSoldier(){}
};
#endif //WARGAME_A_MASTER_FOOTSOLDIER_HPP
