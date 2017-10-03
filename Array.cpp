#include <iostream>
using namespace std;
const int SIZE = 3;




int main() {
    // define a array of three integers
    int age[SIZE];


    // take input
    for(int i = 0; i < SIZE; i++){
        cout << "Enter you age: ";
        cin >> age[i];
    }

    for(int i = 0; i < SIZE; i++){
        cout << "\nAge of i is: " << age[i];
    }

    cout << "\nDone!" << endl;
    return 0;
}