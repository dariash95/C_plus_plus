#include <iostream>

using namespace std;

int main (){

    char selection;

    do {
        double width {}, height {};
        cout << "Enter width and height separated by a space: " << endl;
        cin >> width >> height;

        double area = {width * height};
        cout << "The area is " << area << endl;

        cout << "Calculate another? (Y/N):" << endl;
        cin >> selection;     
    } while (selection == 'Y' || selection == 'y');
    
    cout << "Thanks";

    return 0; 
}