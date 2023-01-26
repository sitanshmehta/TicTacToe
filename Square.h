//
// Created by Sitansh Mehta on 2023-01-10.
//

#ifndef TICTACTOE_SQUARE_H
#define TICTACTOE_SQUARE_H
#include "Player.h"


class Square {
    friend class Player;
private:
    char val;
public:
    Square();
    //Square(char val_m); //should i pass a player char through this function?
    void set_val(char player_val);
    char getVal();
};


#endif //TICTACTOE_SQUARE_H
