#include <iostream>

using namespace std; 

int main(){

    char letter_grade {};
    cout << "Enter the letter garde you expect on the exam:";
    cin >> letter_grade;

    switch(letter_grade){
        case 'a':
        case 'A': 
            cout << "You need 90 or +" << endl;
            break;
        case 'b':
        case 'B': 
            cout << "You need 80-89" << endl;
            break;
        case 'c':
        case 'C': 
            cout << "You need 70-79" << endl;
            break;
        case 'd':
        case 'D': 
            cout << "You need 60-69" << endl;
            break;
        case 'f':
        case 'F': 
            cout << ":(" << endl;
            break;
        default: 
            cout << "That's not a valid letter" << endl;
    } 

    return 0;
}