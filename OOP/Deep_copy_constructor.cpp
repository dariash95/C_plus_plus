#include <iostream>
#include <string>
#include <vector>

using namespace std;

Class Deep () {
	private:
		int *p_data;
	public:
	    // Constructor with default parameter values
	    Deep(int d);
        // Copy constructor prototype
        Deep(const Deep &source);
        // Destructor
        ~Deep();
};

Deep::Deep(int d) {
    p_data = new int; // Allocate memory to store new int
    *p_data = d;
}

Deep:: ~Deep(){
    delete p_data; // Free alllocated memory
    cout <<"Destructor freeing data" << endl;
}

Deep::Deep (const Deep &source){
    p_data = new int; // Allocate storage for the copy
    *p_data = *source.p_data;
    cout <<"Copy constructor - Deep" << endl;
}

// OR

Deep::Deep (const Deep &source) 
    : Deep{*source.p_data} {
    cout <<"Copy constructor - Deep" << endl;
}
