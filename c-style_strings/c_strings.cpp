#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main (){

    char first_name[20]{};
    char last_name [20]{};
    char full_name [50]{};
    char temp [50]{};

    /*
    cout << "Please enter your first name: ";
    cin >> first_name;

    cout << "Please enter your last name: ";
    cin >> last_name;

    cout << "Your first name, " << first_name << " has " << strlen(first_name) << " characters";
    cout << "\nYour last name, " << last_name << " has " << strlen(last_name) << " characters" << endl;

    strcpy(full_name,first_name); //Copy first name to full name
    strcat(full_name, " "); // Concatenates full name with " "
    strcat(full_name, last_name); // Concatenates full name with last name
    
    cout << "You full name is " << full_name << endl;

    cout << "Enter your full name: ";
    cin >> full_name;
    cout << "Your full name is: " << full_name << endl; 
    // In this case, it will only dsiplay "Daniela" bc of the behavior of strings in C and a \0
    */

    cout << "Enter your full name: ";
    cin.getline(full_name,50); // The number means the characters that are going to be read
    cout << "Your full name is: " << full_name << endl; 

     strcpy(temp,full_name);

    for (size_t i{0}; i <strlen (full_name); i++){
        if (isalpha(full_name[i])){
            full_name[i] = toupper(full_name[i]);
        }
    }

    cout << "Your full name is: " << full_name << endl;

    if (strcmp(temp,full_name)==0){
        cout << "The strings are the same" << endl;
    } else {
        cout << "The strings are different" << endl;
    }


    return 0;
}