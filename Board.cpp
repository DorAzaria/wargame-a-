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
    if(direction == Up) {
        if ((player_number == 1) && limit(source,1,0)) {
            swap(source,1,0);
        }
        if ((player_number == 2) && limit(source,-1,0)) {
            swap(source,-1,0);
        }
    }

    if(direction == Down) {
        if ((player_number == 1) && limit(source,-1,0)) {
            swap(source,-1,0);
        }
        else if ((player_number == 2) && limit(source,1,0)) {
            swap(source,1,0);
        }else {
            cout<< "Can't move player "<< "{" << source.first << "," << source.second << "}" << endl;
        }
    }
    if(direction == Right) {
        if ((player_number == 1) && limit(source,0,-1)) {
            swap(source,0,-1);
        }
        if ((player_number == 2) && limit(source,0,1)) {
            swap(source,0,1);
        }
    }

    if(direction == Left) {
        if ((player_number == 1) && limit(source,0,1)) {
            swap(source,0,1);
        }
        if ((player_number == 2) && limit(source,0,-1)) {
            swap(source,0,-1);
        }
    }
}

void Board::swap(std::pair<int,int> source,int i, int j) {
    Soldier *temp = board[source.first][source.second]; //{0,1}
    board[source.first][source.second] = nullptr;
    board[source.first + i][source.second + j] = temp; // {1,1}
}

bool Board::limit(std::pair<int,int> source,int i, int j) {
    if(source.first + i >= board.size() || source.second + j >= board[0].size())
        return false;

    if(board[source.first + i][source.second + j] != nullptr)
        return false;

    return true;
}
