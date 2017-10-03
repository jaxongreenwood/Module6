
// File: FuncArray
// Created by Jaxon Greenwood on 10/3/2017 for CS1410.
// Copyright (c) 2017 WSU

#include <iostream>
using namespace std;

// Constants
const SIZE = 3;

// Prototypes
// Arrays are passed by reference
void AgeInput(int age[SIZE]); // if array is a 2d array then it'll be: void AgeInput(int age[ROW][COL]);
void showAge(int age[SIZE]);
// void AgeInput(int age[]); // another notation

// Main Program Program

int main(void) {

        int age[SIZE];

    AgeInput(age);
    showAge(age);


    return 0;
}

// Function Definitions
void AgeInput(int iage[SIZE]){

    for(int i = 0; i < SIZE; i++){
        cout << "Please enter your age: ";
        cin >> iage[i];
    }

void showAge(int iage[SIZE]){
    for(int i = 0; i < SIZE; i++){
        cout << "\nAge " << i << " is " << iage[i];
    }
}


}