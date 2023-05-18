#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player {
    private:
        // Attributes
        string name ;
        int health;
        int xp;

    public:
        // Methods
        void setName(string n) {
            name = n;
        };
        
        // Overloaded constructors
        Player(){
            cout << "No args constructor called" <<endl;
        }

        Player (string name) {
            cout << "String constructor called" <<endl;
        }

        Player (string name, int health, int xp) {
            cout << "Three args constructor called" <<endl;
        }

        // Destructor
        ~Player(){
            cout << "Destructor called for " << name <<endl;
        }
};

int main () {

    Player thomas; // No args constructor called
    Player frank {"Frank", 100, 4}; // Three args constructor called
    Player hero {"Hero"}; // String constructor called

    //... Destructor called automatically

    Player *enemy = new Player ("Enemy", 1000, 0); // Three args constructor called
    delete enemy; // Destructor called
    return 0;
}