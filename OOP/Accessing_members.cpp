#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player {
    public:
        // Attributes
        string name {"Player"};
        int health {100};
        int xp {3};

        // Methods
        void talk(string text_to_say);
        bool is_dead();
};

class Account {
    public:
        // Attributes
        string name {"Account"};
        double balance {0.0};

        // Methods
        bool deposit (double bal);
        bool withdraw(double bal);
};

int main (){
    // Creating objects statically
    Player frank;

    // Access members
    frank.name = "Frank";
    frank.health = 100;
    frank.xp = 12;
    frank.talk("Hellooooo");

    // Creating objects dynamically
    Player *enemy = new Player();

    // Access members
    enemy->name = "Mat"; // or (*enemy).name = "Mat"
    enemy->health = 98; // or (*enemy).health = 100
    enemy->xp = 4;
    enemy->talk("Boo");
    
    delete enemy;

    return 0;
}