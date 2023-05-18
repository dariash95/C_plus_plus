#include <iostream>
#include <string>
#include <vector>


int array[] {1,2,3,4,5};
int *p_array {array};

array[i] = *(array + i);
p_array[i] = *(p_array + i);


int scores [] {100,95,89};
cout << "Value of scores: " << scores << endl;
// "Value of scores: 0x61fecb8 -> Address of the array 

int *p_scores {scores}; 
cout << "Value of p_scores: " << p_scores << endl;
// "Value of p_ scores: 0x61fecb8 -> Address of the array 


// Array suscription notation:
cout << scores[0] << endl; // 100
cout << scores[1] << endl; // 95
cout << scores[0] << endl; // 89

// Pointer suscription notation:
cout << p_scores[0] << endl; // 100
cout << p_scores[1] << endl; // 95
cout << p_scores[2] << endl; // 89

// Array offset notation:
cout << *scores << endl; // 100
cout << *(scores + 1) << endl; // 95
cout << *(scores + 2) << endl; // 89

cout << scores << endl; // 0x61ff10
cout << scores + 1 << endl; // 0x61ff14
cout << scores + 2 << endl; // 0x61ff18

// Pointer offset notation
cout << *p_scores << endl; // 100
cout << *(p_scores + 1) << endl; // 95
cout << *(p_scores + 2) << endl; // 89

cout << p_scores << endl; // 0x61ff10
cout << p_scores + 1 << endl; // 0x61ff14
cout << p_scores + 2 << endl; // 0x61ff18