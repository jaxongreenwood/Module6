
// File: string1
// Created by Jaxon Greenwood on 10/5/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>
#include <string>       //C++ String Class
using namespace std;

// Constants

// Prototypes

// Main Program Program

int main(void) {

    string s1;      // Define a string
    string s2 = "Waldo Weber"; // Define and initialize a string
    string s3 ("Waldo Weber University"); // Also Defining and initializeing a string

    s1 = s3;

    cout << "s1 " << s1 << endl;

    s1 += " " + s2;

    cout << "s1 " << s1 << endl;
    cout << "s2 " << s2 << endl;
    cout << "s3 " << s3 << endl;

    s2.swap(s1);

    return 0;
}

// Function Definitions