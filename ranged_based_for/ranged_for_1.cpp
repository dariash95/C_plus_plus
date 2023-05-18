#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main (){

    vector <double> temps {87.2, 77.1, 80.0, 72.5};

    double avg_temp {};
    double running_sum {};

    for ( auto temp : temps){
        running_sum += temp;
    }

    avg_temp = running_sum / temps.size();

    cout << fixed << setprecision(1);
    cout << "The average temp is " << avg_temp << endl;
    cout << endl;


    return 0; 
}