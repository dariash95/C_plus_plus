#include <iostream>
#include "MyString.h"

using namespace std;

int main (){

    MyString a {"Hello"};
    MyString b;

    b = a;
    b = "This is a test"; // A temp object is created and its contents copied afterward

}