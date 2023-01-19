//
// Created by Sitansh Mehta on 2023-01-10.
//

#include "Game.h"
#include "Square.h"
#include "Player.h"

#include<cstdlib>
#include<iostream>

void Game::printBoard() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << board[i][j].getVal() << " ";
        }
        std::cout << std::endl;
    }
}

bool Game::checkForWin() {

}

Square Game::getValue() {

}

void Game::switchPlayer() {

}

bool Game::isBoardFull() {
    /*for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            if(board[i][j].getVal() == ' '){
                return false;
            }
        }
    }*/
}

void Game::getPlayerMove(Player val) {

}

void Game::getCoordinate(int &x, int &y) {

}

bool Game::validMove(int x, int y) {
    if(x >= 0 && y <= 2) return true;
    else return false;
}

