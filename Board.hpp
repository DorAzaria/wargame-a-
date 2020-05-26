//
// Created by dor on 25/05/2020.
//
#include <string>
#include <vector> // empty, front, back, size, push_back, capacity and more...
#include "Soldier.hpp"
#include <stdexcept>
using namespace std;
#ifndef WARGAME_A_MASTER_BOARD_HPP
#define WARGAME_A_MASTER_BOARD_HPP

namespace WarGame {
    class Board {
    private:
        // Initializing 2D vector "board" with
        // different soldiers of Soldier in each row.
        //it's like Soldier* board[][];
        vector<vector<Soldier*>> board;
    public:
        // Create a 2D vector containing numRows vectors of size numCols.
        // initial all the cells in the vector to null pointers.
        Board(uint numRows, uint numCols) :
                board(numRows, std::vector<Soldier*>(numCols, nullptr)) {}

        //by using an operator type [] as a reference

        //to a pointer of Soldier we'll initial soldiers into the game board
        Soldier*& operator[](std::pair<int,int> location);

        //by using an operator type [] as a pointer
        //of Soldier we'll get soldiers by the game board
        Soldier* operator[](std::pair<int,int> location) const;

        // a user-defined data type Of moves which can be assigned some limited values.
        enum MoveDIR { Up, Down, Right, Left };

        void move(uint player_number, std::pair<int,int> source, MoveDIR direction);

        // returns true iff the board contains one or more soldiers of the given player.
        bool has_soldiers(uint player_number) const;

        ~Board()
        {
            board.clear();
        }
    };
}
#endif //WARGAME_A_MASTER_BOARD_HPP