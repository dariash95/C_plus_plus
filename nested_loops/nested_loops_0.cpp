#include <iostream>
#include <vector>

using namespace std;

int main (){

    vector <vector <int>> vector_2D 
    {
        {1,2,3},
        {10,20,30},
        {100,200,300}
    };
    
    for (auto vector : vector_2D){
        for (auto val : vector){
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}