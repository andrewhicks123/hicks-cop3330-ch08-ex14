/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Andrew Hicks
 */

#include <iostream>

using namespace std;

void f(const int& c) { // must pass pointer in order to modify C, even though it's constant, can't modify regular int
    int& b = const_cast<int&>(c); // set B to C, using const_cast
    ++b; // increase b (c) by 1
}


int main()
{
    int a = 2;
    f(a);
    cout << a << endl;
}

