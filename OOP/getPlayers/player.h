#include <iostream>
#include <string>

#ifndef PLAYER_H_
#define PLAYER_H_

using namespace std;

class Player {
    private:
        // Attributes
        // Belongs to the class
        static int num_players; // Cannot be initialiazed here
        string name ;
        int health;
        int xp;

    public:
        // Methods
        string getName() {
            return name;
        }

        int getHealth() {
            return health;
        }

        int getXP() {
            return xp;
        }
        // Overloaded constructors
        Player (string name_val = "None", int health_val = 0, int xp_val = 0);

        // Copy constructor
        Player(const Player &source);
        // Destructor
        ~Player();

        static int getNumPlayer(); // This function only has access to static variables
};

#endif
