#include <iostream>
#include <vector>

using namespace std;

int main (){

    char selection {};
    vector <int> list {};
    int num {};
    int tot {};
    float avg {};

    do {

        cout << "\nP - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Mean of the numbers" << endl;
        cout << "S - Smallest number" << endl;
        cout << "L - Largest number" << endl;
        cout << "Q - Quit" << endl;
        cout <<"Please select an option from the menu" << endl;
        cin >> selection;
        
        if (selection == 'p' || selection == 'P'){
            cout << endl;
            if (list.size() == 0){
                cout << "[]" << endl;
            } else {
                for (int i {0}; i < list.size(); i++){
                    cout << list.at(i) << " ";
                }
                cout << endl;
            }
        } else if (selection == 'a' || selection == 'A'){
            cout << "\nType the number you would like to add" << endl;
            cin >> num;
            list.push_back(num);

        } else if (selection == 'm' || selection == 'm') {
            for (int i {0}; i < list.size(); i++){
                    tot = tot + list.at(i);
            }
            avg = tot/list.size();
            cout << "Mean: " << avg << endl;

        } else if (selection == 's' || selection == 'S'){
            cout << "Printing smallest number" << endl;
        } else if (selection == 'l' || selection == 'L'){
            cout << "Printing largest number"  << endl;
        } else if (selection == 'q' || selection == 'Q'){
            cout << "Quitting"  << endl;
        } else {
            cout << "Invalid selection. Please, try again"  << endl;
        }

    } while (selection != 'q' && selection != 'Q');

    return 0;
    
}