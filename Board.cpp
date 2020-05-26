//
// Created by dor on 26/05/2020.
//
#include <string>
#include <vector>
#include <iostream>
#include "Board.hpp"
#include <cassert>
#include <stdexcept>
using namespace std;
using namespace WarGame;

Soldier*& Board::operator[](std::pair<int,int> location) {
    return board[location.first][location.second];
}

Soldier* Board::operator[](std::pair<int,int> location) const {
    return board[location.first][location.second];
}

void Board::print() {
    cout << endl;
    for(int i = 0; i<board.size(); i++) {
        for (int j = 0; j < board[i].size(); j++) {
            if (board[i][j] != nullptr) {
                cout << board[i][j]->types <<board[i][j]->player_number<< "  ";
            } else {
                cout << board[i][j] << "    ";
            }
        }
        cout << endl;
    }
}
bool Board::has_soldiers(uint player_number) const {
    for(int i = 0; i<board.size(); i++) {
        for(int j = 0 ; j < board[i].size() ; j++){
            if(board[i][j] != nullptr){
                    return true;
                }
            }
        }
    return false;
}
void Board::move(uint player_number, std::pair<int,int> source, Board::MoveDIR direction) {
}