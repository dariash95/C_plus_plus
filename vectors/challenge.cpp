#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector <int> vector1;
    vector <int> vector2;

    int add1 {10};
    vector1.push_back(add1);
    int add2 {20};
    vector1.push_back(add2);

    cout << "The elements in vector 1 are:" << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << "Vector 1 contains " << vector1.size() << " elements." << endl;

    int add3 {100};
    vector2.push_back(add3);
    int add4 {200};
    vector2.push_back(add4);

    cout << "The elements in vector 2 are:" << endl;
    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;
    cout << "Vector 2 contains " << vector2.size() << " elements." << endl;

    vector <vector <int>> vector_2D;
    vector_2D.push_back(vector1);
    vector_2D.push_back(vector2);

    cout << "The elements in the vector 2D are" << endl;
    cout << vector_2D.at(0).at(0) << "  " << vector_2D.at(0).at(1) << endl;
    cout << vector_2D.at(1).at(0) << "  " << vector_2D.at(1).at(1) << endl; 

    vector1.at(0) = 1000; 

    cout << "The updated elements in the vector 2D are" << endl;
    cout << vector_2D.at(0).at(0) << "  " << vector_2D.at(0).at(1) << endl;
    cout << vector_2D.at(1).at(0) << "  " << vector_2D.at(1).at(1) << endl; 
    cout << "It keeps the data from before and doesn't update." << endl;


    cout << "The elements in vector 1 are:" << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << "Vector 1 contains " << vector1.size() << " elements." << endl;

    return 0;
}