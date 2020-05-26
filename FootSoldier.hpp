//
// Created by dor on 25/05/2020.
//
#include <iostream>
using namespace std;

#ifndef WARGAME_A_MASTER_FOOTSOLDIER_HPP
#define WARGAME_A_MASTER_FOOTSOLDIER_HPP

class FootSoldier : public Soldier {

private:

public:

    FootSoldier() {

    }

    FootSoldier(uint number) {
        player_number = number;
        hp = 150;
        damage = 10;
        types = "FS";
    }

     //destructor for the Object
     virtual ~FootSoldier(){}
};
#endif //WARGAME_A_MASTER_FOOTSOLDIER_HPP
