#include <iostream>
#include "MyString.h"

using namespace std;

int main (){
    MyString empty_string;
    MyString larry {"Larry"};
    MyString stooge {larry};

    empty_string.display();
    larry.display();
    stooge.display();
}