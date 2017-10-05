
// File: inputOutputString
// Created by Jaxon Greenwood on 10/5/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>
#include <string>
using namespace std;

// Constants

// Prototypes

// Main Program Program

int main(void) {

    string full_name, nickname, address;
    cout << "Enter your full name: ";
    getline(cin, full_name);        // takes embedded blacks

    cout << "Enter your nickname: ";
    cin >> nickname;                // takes one string object

    cout << "Enter you addresss on separate lines\n"
            "Terminate input with '$'\n";
    getline(cin, address, '$');

    cout << full_name << endl;
    cout << nickname << endl;
    cout << address << endl;


    return 0;
}

// Function Definitions