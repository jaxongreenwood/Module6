
// File: copyString
// Created by Jaxon Greenwood on 10/5/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>
#include <cstring> // Support for array of chars or c "strings"
using namespace std;


// Constants
const int MAX = 80;
const int DAYS = 7;
// Prototypes

// Main Program Program

int main(void) {

    char str1[] = "Tiger, tiger, burning bright\n"
                  "in the forest of the night\n";

    char str2[MAX];

    //Copy two Strings
    strcpy(str2, str1);
    cout << "str1 is " << str1 << endl;
    cout << "str2 is " << str2 << endl;

    //an array of strings
    char days[DAYS][MAX] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    for(int i = 0; i < DAYS; i++){
        cout << i << " Day is " << days[i] << endl;
    }


    return 0;
}

// Function Definitions