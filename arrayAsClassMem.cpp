
// File: arrayAsClassMem
// Created by Jaxon Greenwood on 10/3/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>
using namespace std;

// Constants
const int MAX = 10;
class Stack{
private:
    int st[MAX];    // stack: array of ints
    int top;        // number of top of stack

public:
    Stack(){        // constructor
        top = -1;
    }
    void push(int var){     // put member on the stack
        st[++top] = var;
    }
    int pop(){              //take member off stack
        return st[top--];
    }


};

// Prototypes

// Main Program Program

int main(void) {

    Stack s1;

    s1.push(2);
    s1.push(44);

    cout << "\nThe first member is now: " << s1.pop();
    cout << "\nThe first member is now: " << s1.pop();

    return 0;
}

// Function Definitions