//
// Created by Sitansh Mehta on 2023-01-10.
//

#include "Square.h"
#include "Player.h"

Square::Square() {
    //val =  get_dummy();
}
Square::Square(Player val_m) {
    val = val_m;
}

Player Square::getVal() {
    return val;
}