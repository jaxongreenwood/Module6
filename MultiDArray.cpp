
// File: MultiDArray
// Created by Jaxon Greenwood on 10/3/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>

using namespace std;

// Constants
const int ROWS = 3;
const int COL = 3;

// Prototypes

// Main Program Program

int main(void) {

    int age[ROWS][COL];
    int age2[ROWS][COL] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COL; j++) {
            cout << "Enter your age ";
            cin >> age[i][j];
        }
        cout<<endl;
    }

    for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COL; j++) {
            cout << "\nAge is " << age2[i][j];
            cout << "\nAge2 is " << age2[i][j];
        }
        cout<<endl;
    }


    return 0;
}

// Function Definitions