#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player {
    private:
        // Attributes
        string name;
        int health;
        int xp;

    public:
        // Constructors with no args passed
        Player();
        Player(string name_val);
        Player(string name_val, int helath_val, int xp_val);

        // Methods
        bool deposit (double bal);
        bool withdraw(double bal);
};

Player::Player()
    : name{"None"}, health{0}, xp {0} {
        // Constructor body
}

Player::Player(string name_val)
    : name {name_val}, health {0}, xp {0} {
        // Constructor body
}

Player::Player(string name_val, int helath_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val} {
        // Constructor body  
}