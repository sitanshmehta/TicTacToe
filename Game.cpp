//
// Created by Sitansh Mehta on 2023-01-10.
//

#include "Game.h"
#include "Square.h"
#include "Player.h"

#include<cstdlib>
#include<iostream>
Game::Game() {
    state = IN_PROGRESS;
    player_X.set_val('x');
    player_O.set_val('O');

}
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
    if(!isBoardFull()){
        //If X just played, set X's playing to false and then O's playing to true so that O can play.
        if(player_X.isPlaying()){
            player_O.set_playing(true);
            player_X.set_playing(false);
        }
        else if(player_O.isPlaying()){
            player_X.set_playing(true);
            player_O.set_playing(false);
        }
    }
    else std::cout << "Game over" << std::endl;
}

bool Game::isBoardFull() {
    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            if(board[i][j].getVal() == ' '){
                return false;
            }
        }
    }
}

void Game::getPlayerMove(Player val) {

}

void Game::getCoordinate(int &x, int &y) {
    std::cout << "Enter Row and Col" << std::endl;
    std::cin >> x >> y;
    if(validMove(x,y)){
        //board[x][y] = player
    }
}

bool Game::validMove(int x, int y) {
    if(x >= 0 && y <= 2) return true;
    else return false;
}

