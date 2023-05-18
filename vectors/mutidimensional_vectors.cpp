#include <iostream>
#include <vector>

using namespace std;

int main (){

    vector <vector <int>> movie_ratings
    {
        {2,4,5,4},
        {1,4,4,3},
        {2,5,5,4}
    };

    cout << "These are the movie ratings for reviewer 1:" <<endl;
    cout << movie_ratings.at(0).at(0) << endl;
    cout << movie_ratings.at(0).at(1) << endl;
    cout << movie_ratings.at(0).at(2) << endl;
    cout << movie_ratings.at(0).at(3) << endl;

    cout << "Enter new scores for reviewer 1:" <<endl;
    cin >> movie_ratings.at(0).at(0);
    cin >> movie_ratings.at(0).at(1);
    cin >> movie_ratings.at(0).at(2);
    cin >> movie_ratings.at(0).at(3);

    cout << "The new movie ratings for reviewer 1 are:" <<endl;
    cout << movie_ratings.at(0).at(0) << endl;
    cout << movie_ratings.at(0).at(1) << endl;
    cout << movie_ratings.at(0).at(2) << endl;
    cout << movie_ratings.at(0).at(3) << endl;




    return 0;

}