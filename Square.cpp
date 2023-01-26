//
// Created by Sitansh Mehta on 2023-01-10.
//

#include "Square.h"
#include "Player.h"

Square::Square() {
    val = ' ';
}
/*Square::Square(char val_m) { //use operator overloading? do i even need this constructor?
    val = val_m;
}*/

void Square::set_val(char player_val) {
    val = player_val;
}

char Square::getVal() {
    return val;
}