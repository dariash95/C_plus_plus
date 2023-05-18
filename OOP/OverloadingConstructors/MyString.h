#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class MyString {
    private:
        char* p_string;
    public:
        MyString();
        MyString(const char *s);
        MyString(cons MyString &source);
        ~MyString()

        void display() const;
        int getLength() const;
        const char* getString() const;
}

#endif