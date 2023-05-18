#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class MyString {
    private:
        char* p_str;
    public:
        MyString();
        MyString(const char *s);
        MyString(const MyString &source);
        ~MyString();

        // Copy assignment. 
        // It returns a MyString object by ref (MyString &)
        // Left hand side = this -> the current object
        // Right hand side = &rhs -> what we are assigning
        MyString &operator=(const MyString &rhs);
        
        //Move constructor
        MyString &operator=(MyString &&rhs);

        void display() const;
        int getLength() const;
        const char* getString() const;
}

#endif