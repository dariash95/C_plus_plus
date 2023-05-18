#include "player.h"

int Player::num_players {0};

Player::Player (string name_val = "None", int health_val = 0, int xp_val = 0) 
: name(name_val), health(health_val), xp(xp_val) {
    ++num_players;
}

Player::Player(const Player &source)
: Player (source.name, source.health, source.xp) {

}

Player::~Player(){
    --num_players;
}

int Player::getNumPlayer(){
    return num_players;
}