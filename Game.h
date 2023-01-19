//
// Created by Sitansh Mehta on 2023-01-10.
//

#ifndef TICTACTOE_GAME_H
#define TICTACTOE_GAME_H
#include "Square.h"
#include "Player.h"

const int SIZE = 3;

enum GameState{
    IN_PROGRESS;
    X_WON;
    O_WON;
    TIE;
};
class Game {
private:
    Square board[SIZE][SIZE];
    GameState state;
public:
    void play();
private:
    void printBoard();
    bool checkForWin();
    void switchPlayer();
    Square getValue();
    bool isBoardFull();
    void getPlayerMove(Player val);
    void getCoordinate(int &x, int &y);
    bool validMove(int x, int y);
    void restartGame();
};


#endif //TICTACTOE_GAME_H
