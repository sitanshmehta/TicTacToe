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
public:
    Player();




};


#endif //TICTACTOE_PLAYER_H
