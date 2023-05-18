#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Account {
    private:
        // Attributes
        string name {"Account"};
        double balance {0.0};

    public:
        // Constructors with no args passed
        Account (){
            name = "None";
            balance = 0.0;
        }

        // Methods
        bool deposit (double bal);
        bool withdraw(double bal);
};

class Account1 {
    private:
        // Attributes
        string name {"Account"};
        double balance {0.0};

    public:
        // Constructors with args passed
        Account1 (string name n, double amount){
            name = n;
            balance = amount:
        }

        // Methods
        bool deposit (double bal);
        bool withdraw(double bal);
};

class Player {
    private:
        string name;
        int health;
        int xp;

    public:
        //Overloaded constructors
        Player();
        Player(string name_val);
        Player(string name_val, int health_val, int xp_val);
}

Player::Player () {
    name = "None";
    health = 0;
    xp = 0;
}

Player::Player(string name_val){
    name = name_val;
    health = 0; // Must be initialized as well to avoid unknown values in these variables
    xp = 0;    
}

Player::Player(string name_val, int health_val, int xp_val){
    name = name_val;
    health = health_val;
    xp = xp_val;    
}