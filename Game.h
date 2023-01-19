//
// Created by Sitansh Mehta on 2023-01-10.
//

#ifndef TICTACTOE_GAME_H
#define TICTACTOE_GAME_H
#include "Square.h"
#include "Player.h"

const int SIZE = 3;
class Game {
private:
    Square board[SIZE][SIZE];
public:
    void play();
private:
    void printBoard();
    bool checkForWin();
    void switchPlayer();
    bool isBoardFull();
    void getPlayerMove(Player val);
    void getCoordinate(int &x, int &y);
    bool validMove(int x, int y);
};


#endif //TICTACTOE_GAME_H
