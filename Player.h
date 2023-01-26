//
// Created by Sitansh Mehta on 2023-01-10.
//

#ifndef TICTACTOE_PLAYER_H
#define TICTACTOE_PLAYER_H
#include <string>
#include <iostream>
typedef struct player{
    //std::string name;
    char val;
    bool winner;
    bool playing;
};
class Player {
    friend class Square;
private:
    player player;
public:
    Player();
    //Player(char val_m);
    void set_val(char val_m);
    void set_playing(bool playing_m);
    char get_val();
    bool isPlaying();
    bool isWinner();

};


#endif //TICTACTOE_PLAYER_H
