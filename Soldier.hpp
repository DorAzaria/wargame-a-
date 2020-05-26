//
// Created by dor on 25/05/2020.
//
#include <iostream>
using namespace std;
#ifndef WARGAME_A_MASTER_SOLDIER_HPP
#define WARGAME_A_MASTER_SOLDIER_HPP

class Soldier {
public :
    int hp, damage, heal;

    virtual ~Soldier() { cout << "A Soldier destructor is called" << endl; }

};
#endif //WARGAME_A_MASTER_SOLDIER_HPP
