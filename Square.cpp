//
// Created by Sitansh Mehta on 2023-01-10.
//

#include "Square.h"
#include "Player.h"

Square::Square() {
    val = ' ';
}
Square::Square(char val_m) { //use operator overloading
    val = val_m;
}

char Square::getVal() {
    return val;
}