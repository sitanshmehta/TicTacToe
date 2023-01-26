//
// Created by Sitansh Mehta on 2023-01-10.
//

#include "Player.h"

Player::Player() {
    player.val = ' ';
    player.playing = true;
    player.winner = false;
}

/*Player::Player(char val_m) {
    player.val = val_m;
    player.playing = true;
    player.winner = false;
} */ //Do i need this function?

void Player::set_val(char val_m) {
    player.val = val_m; //think about what could be wrong w this function
}

void Player::set_playing(bool playing_m) {
    player.playing = playing_m;
}

char Player::get_val() {
    return player.val;
}

bool Player::isPlaying() {
    return (player.playing);
}

bool Player::isWinner() {
    return player.winner == true;
}