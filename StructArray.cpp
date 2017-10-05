
// File: StuctArray
// Created by Jaxon Greenwood on 10/3/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>
#include <string>
using namespace std;

// Constants
struct Part{
    int modelNum;
    int partNum;
    float cost;
    string partName;
};
const int SIZE = 4;
void partInput(struct Part pi[SIZE]);

// Prototypes

// Main Program Program

int main(void) {

    Part p[SIZE];

    partInput(p);



    return 0;
}

// Function Definitions
void partInput(struct Part pi[SIZE]){

    for(int i = 0; i < SIZE; i++){
        cout << "Enter part name: ";
        getline(cin, pi[i].partName);

        // I need to flush my input

        cout << "Enter model number: ";
        cin >> pi[i].modelNum;

        cout << "\nEnter part number: ";
        cin >> pi[i].partNum;

        cout << "\nEnter part cost: ";
        cin >> pi[i].cost;
        cout << endl;
    }



}