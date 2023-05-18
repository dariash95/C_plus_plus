#include <iostream>
#include <string>
#include <vector>

using namespace std;

Class Player () {
	private:
		string name;
		int health;
		int xp;
	public:
        string getName(){return name;}
        int getHealth(){return health;}
        int getXP(){return xp;}

	    // Constructor with default parameter values
	    Player(string name_val = "None",
			   int health_val = 0,
			   int xp_val = 0);
        // Copy constructor prototype
        Player(const Player &source);
        // Destructor
        ~Player(){
            cout<<"Destructor called for" << name << endl;
        }
};

Player::Player(string name_val, int helath_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val} {
        // Constructor body  
}

Player::Player (const Player &source)
	// We initialize the list based on the source object's attributes
	:name {source.name},
	 health {source.health},
     xp {source.xp} {
        cout << "Copy constructor was called of" << source.name << endl;
}

// OR

Player::Player (const Player &source)
    // With delegation
	:Player {source.name, source.health, source.xp} {
        cout << "Copy constructor was called of" << source.name << endl;
}

void displayPlayer (Player p){
    cout << "Name: " << p.getName() << endl;
    cout << "Health: " << p.getHealth() << endl;
    cout << "XP: " << p.getXP() << endl;
}


int main () {
    Player empty; // "None",0,0
    displayPlayer(empty);
    Player frank {"Frank"}; // "Frank",0,0
    displayPlayer(frank);
    Player vaillain {"Villain",100,55}; // "Villain", 100, 55
    displayPlayer(villain);
    Player my_new_player {vaillain};
    Player hero {"Hero", 100}; // "Hero, 100, 0"
    displayPlayer(hero);

    // All these use the same delegated constructor
}