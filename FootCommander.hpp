//
// Created by dor on 25/05/2020.
//
#include <iostream>
using namespace std;
#include "Soldier.hpp"
#ifndef WARGAME_A_MASTER_FOOTCOMMANDER_HPP
#define WARGAME_A_MASTER_FOOTCOMMANDER_HPP

class FootCommander : public Soldier {
private:
    uint player_number;
public:
    FootCommander() {
    }

    FootCommander(uint player_number) {
        this->player_number = player_number;
    }

    //destructor for the Object
    virtual ~FootCommander() {
    }
};
#endif //WARGAME_A_MASTER_FOOTCOMMANDER_HPP
