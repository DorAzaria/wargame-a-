//
// Created by dor on 26/05/2020.
//
#include <iostream>
using namespace std;
#ifndef WARGAME_A_MASTER_PARAMEDICCOMMANDER_HPP
#define WARGAME_A_MASTER_PARAMEDICCOMMANDER_HPP
class ParamedicCommander : public Paramedic {

private:

public:
    uint heal;
    ParamedicCommander() {

    }

    ParamedicCommander(uint number) {
        player_number = number;
        hp = 100;
        heal = 0;
        types = "PC";
    }

    //destructor for the Object
    virtual ~ParamedicCommander(){}
};
#endif //WARGAME_A_MASTER_PARAMEDICCOMMANDER_HPP
