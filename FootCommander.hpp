//
// Created by dor on 25/05/2020.
//
#include <iostream>
using namespace std;
#include "Soldier.hpp"
#ifndef WARGAME_A_MASTER_FOOTCOMMANDER_HPP
#define WARGAME_A_MASTER_FOOTCOMMANDER_HPP

class FootCommander : public FootSoldier {
private:

public:
    FootCommander() {
    }

    FootCommander(uint number) {
        player_number = number;
        types = "FC";
    }

    //destructor for the Object
    virtual ~FootCommander() {
    }
};
#endif //WARGAME_A_MASTER_FOOTCOMMANDER_HPP
