//
// Created by dor on 26/05/2020.
//
#include <iostream>
using namespace std;
#ifndef WARGAME_A_MASTER_SNIPERCOMMANDER_HPP
#define WARGAME_A_MASTER_SNIPERCOMMANDER_HPP
class SniperCommander : public Sniper {

private:

public:

    SniperCommander() {

    }

    SniperCommander(uint number) {
        player_number = number;
        hp = 120;
        damage = 100;
        types = "SC";
    }

    //destructor for the Object
    virtual ~SniperCommander(){}
};
#endif //WARGAME_A_MASTER_SNIPERCOMMANDER_HPP
