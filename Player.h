//
// Created by Sitansh Mehta on 2023-01-10.
//

#ifndef TICTACTOE_PLAYER_H
#define TICTACTOE_PLAYER_H

typedef struct player{
    char val;
    bool winner;
    bool playing;
};
class Player {
private:
    player playerX;
    player playerY;
    player dummy;
public:
    Player(char X, char O, char dummy_m);
    Player get_x();
    Player get_O();
    Player get_dummy();





};


#endif //TICTACTOE_PLAYER_H
