#include <iostream> 

using namespace std;

int main (){

    char selection {};

    do {
        cout << "\n----------------------" << endl;
        cout << "1. Do this" << endl;
        cout << "2. Do that" << endl;
        cout << "3. Do something else" << endl;
        cout << "Q. Quit" << endl;
        cout << "\nEnter your selection" << endl;

        cin >> selection;

        
        switch (selection)
        {
        case '1' : cout << "Doing this" << endl;
            break;
        case '2' : cout << "Doing that" << endl;
            break;
        case '3' : cout << "Doing something else" << endl;
            break;
        case 'Q' :
        case 'q' : 
            cout << "Quitting" << endl;
            break;
        default: cout << "Invalid character, try again";
            break;
        } 

    } while (selection != 'q' && selection != 'Q');

    return 0; 
}