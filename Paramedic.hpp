//
// Created by dor on 26/05/2020.
//

#ifndef WARGAME_A_MASTER_PARAMEDIC_HPP
#define WARGAME_A_MASTER_PARAMEDIC_HPP
class Paramedic : public Soldier {

private:

public:
    uint heal;
    Paramedic() {

    }

    Paramedic(uint number) {
        player_number = number;
        hp = 100;
        heal = 100;
        types = "P";
    }

    //destructor for the Object
    virtual ~Paramedic(){}
};
#endif //WARGAME_A_MASTER_PARAMEDIC_HPP
