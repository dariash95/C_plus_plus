#include <iostream>
#include <string>
#include <vector>

using namespace std;

Player:Player () {
	private:
		string name;
		int health;
		int xp;
	public:
	// Constructor with default parameter values
	Player(string name_val = "None",
				 int health_val = 0,
				 int xp_val = 0);
};

Player::Player(string name_val, int helath_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val} {
        // Constructor body  
}

int main () {
    Player empty; // "None",0,0
    Player frank {"Frank"}; // "Frank",0,0
    Player vaillain {"Villain",100,55}; // "Villain", 100, 55
    Player hero {"Hero", 100}; // "Hero, 100, 0"

    // All these use the same delegated constructor
}