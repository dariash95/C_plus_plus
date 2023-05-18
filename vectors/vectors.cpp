#include <iostream>
#include <vector>

using namespace std;

int main (){

    vector <int> test_scores {100,98,99};

    cout << "The tests scores are:" << endl;
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    cout << "Thera are " << test_scores.size() << " elements in this vector" << endl;

    cout << "Entre three new scores to be replaced in the vector" << endl;
    cin >> test_scores.at(0);
    cin >> test_scores.at(1);
    cin >> test_scores.at(2);

    cout << "The new tests scores are:" << endl;
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;

    cout << "Entre a new score to be added to the array" << endl;
    int new_score {0};
    cin >> new_score;
    test_scores.push_back(new_score);

    cout << "The tests scores are:" << endl;
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    cout << test_scores.at(3) << endl;
    
    return 0;

}