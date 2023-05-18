#include <iostream>
#include "player.h"

using namespace std;

void displayActivePlayers(){
    cout << "Number of players: " << Player::getNumPlayer() << endl;
}

int main (void){
    displayActivePlayers();
    return 0;
}