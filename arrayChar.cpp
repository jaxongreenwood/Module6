
// File: arrayChar
// Created by Jaxon Greenwood on 10/5/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>
using namespace std;

// Constants
const int MAX = 10;

// Prototypes

// Main Program Program

int main(void) {

    char st[MAX];       // this will support 79 characters because the last is taken by null character or \o

   // cout << "Enter your name: ";
   // cin >> st;
   // cout << "Hello " << st << endl;

    char hi[] = "Hello Weber State University Students!";   // Lets the Compiler calculate the space, also known as
                                                            // String Coknstants
    cout << hi << endl;

    // To support embedded blanks (Spaces), use cin.get function
    cout << "Enter you name: ";
    cin.get(st, MAX);
    cout << "Hello " << st << endl;

    return 0;
}

// Function Definitions