#include <iostream>
#include <vector>

using namespace std;

int main (){

    vector <int> vec {2,4,6,8};
    int result {0};

    if (vec.size() <= 1){
        result = 0;
    } else {

        for (int i {0}; i < vec.size(); i++){
            for (int j = i+1; j < vec.size(); j++){
                 cout << vec[i] << "," << vec[j] << " ";
                 result = result + (vec[i]*vec[j]);
            }
         }
    }

    cout <<"\n" << result;

    return 0;
}