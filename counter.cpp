// File: counter
// Created by Colten Arave on 9/21/17 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>

using namespace std;
// Constants, Structs, Classes
class Counter
{
private:
    unsigned int count;
public:
    Counter(): count(0)
    {/*empty body*/}
    void incCount()
    {
        count++;
    }
    int getCount()
    {

        return count;
    }
};
// Prototypes

// Main Program Program
int main(void) {

    Counter c1, c2;
    cout << "\nc1 = " << c1.getCount();
    c1.incCount();
    cout << "\nc2 = " << c1.getCount();
    cout << "\nc3 = " << c2.getCount();
    c2.incCount();
    cout << "\nc4 = " << c2.getCount();

    return 0;
}
// Function Definitions