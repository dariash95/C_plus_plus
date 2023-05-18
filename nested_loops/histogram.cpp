#include <iostream>
#include <vector>

using namespace std;

int main (){

    int items {};
    cout << "How many items do you have?" << endl;
    cin >> items;

    vector <int> data {};

    for (int i {1}; i <= items; i++){
        int data_item{};
        cout << "Enter data item " << i << ":";
        cin >> data_item;
        data.push_back(data_item);
    }

    cout <<"\nDisplaying histogram" << endl;
    for (auto val : data){
        for (int i {1}; i<= val; i++){
            cout << "*";
        }
        cout << endl; 
    }

    return 0;
}