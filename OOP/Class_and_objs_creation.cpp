#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player {
    // Attributes with initialization
    string name {"Player"};
    int health {100};
    int xp {3};

    // Methods
    void talk(string);
    bool is_dead();
};

class Account {
    // Attributes with initialization
    string name {"Account"};
    double balance {0.0};

    // Methods
    bool deposit (double);
    bool withdraw(double);
};

int main (){
    // Creating objects statically
    Player frank;
    Player hero;

    Account frank_account;
    Account jim_account;

    // Create objects dynamically
    Player *enemy {nullptr};
    enemy = new Player();
    delete enemy;

    // Create vector of objects of class Player
    vector <Player> player_vector {frank};
    player_vector.push_back(hero);

    return 0;
}