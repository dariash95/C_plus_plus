#include <iostream>
#include <string>
#include <vector>

using namespace std;

Class Move () {
	private:
		int *p_data;
	public:
        void setDataValue(int d){
            *p_data = d;
        }

        void getDataValue (){
            return *p_data;
        }
	    // Constructor with default parameter values
	    Move(int d);
        // Copy constructor prototype
        Move(const Move &source);
        // Move constructor prototype
        Move(Move &&source);
        // Destructor
        ~Move();
};

Move::Move(int d) {
    p_data = new int; // Allocate memory to store new int
    *p_data = d;
}

Move:: ~Move(){
    if (p_data != nullptr){
        cout << "Destructor freeing data for " << *p_data << endl;
    } else {
        cout << "Destructor freeing data for nullptr" << endl;
    }

    delete p_data; // Free alllocated memory
}

Move::Move(Move &&source)
    : p_data {source.data} {
        source.data = nullptr;
}

int main (){
    vector <Move> vec;

    vec.push_back(Move{20});
}



