//
// Created by Sitansh Mehta on 2023-01-10.
//

#ifndef TICTACTOE_SQUARE_H
#define TICTACTOE_SQUARE_H
#include "Player.h"


class Square {
private:
    Player val;
public:
    Square();
    Square(Player val_m); //should i pass a player char through this function?
    Player getVal();
};


#endif //TICTACTOE_SQUARE_H
