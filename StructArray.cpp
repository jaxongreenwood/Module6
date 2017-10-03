
// File: StuctArray
// Created by Jaxon Greenwood on 10/3/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>
using namespace std;

// Constants
struct Part{
    int modelNum;
    int partNum;
    float cost;
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
        cout << "Enter model number: ";
        cin >> pi[i].modelNum;

        cout << "Enter part number: ";
        cin >> pi[i].partNum;

        cout << "Enter part cost: ";
        cin >> pi[i].cost;
        cout << endl;
    }



}