#include <cstring>
#include <iostream>
#include "MyString.h"

// No args constructor. Allocates memory for a char and fill it with terminator char
MyString::MyString ()
    :p_str {nullptr} {
        p_str = new char[1];
        *p_str = '\0':
}

MyString::MyString(const char *s) 
    :p_str {nullptr} {
        if(s == nullptr){
            p_str = new char[1];
            *p_str = '\0':
        } else {
            p_str = new char[strlen(s)+1]; //An extra space for the terminator char
            sdt::strcpy(p_str,s);
        }
}

MyString::MyString(const MyString &source)
    : p_str {nullptr} {
        p_str = new char[strlen(source.p_str)+1];
        std::strcpy(p_str, source.p_str);
}

MyString::~MyString() {
    delete [] p_str;
}

MyString &MyString::operator=(const MyString &rhs){
    if(this == &rhs) {
        return *this;
    }

    delete [] this->p_str;
    this->p_str = new char[std::strlen(rhs.p_str)+1];
    std::strcpy(this->p_str, rhs.p_str);

    return *this;
}

MyString &MyString::operator=(MyString &&rhs){
    if(this == &rhs) {
        return *this;
    }

    delete [] this->p_str;

    this->p_str = rhs.p_str;

    rhs.p_str = nullptr;

    return *this;

}

void MyString:: display() const {
    std::cout << p_str << : << getLength() << std::endl;
}

int MyString::getLength() const {
    return std::strlen(p_str);
}

const char* MyString::getString() const {
    return p_str;
}