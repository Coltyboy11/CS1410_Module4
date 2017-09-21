// File: distanceClass
// Created by Colten Arave on 9/21/17 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>

using namespace std;
//Task: Define a class called distance that stores feet and incehs
//Two methods. setDist > capture input from user.
//             showDist > Display values
// Constants, Structs, Classes

class Distance
{
private:
    int feet;
    float inches;
public:
    void setDist(int f, int i)
    {
        feet = f;
        inches = i;
    }
    void getDistance()
    {
        cout << "Please enter feet: " << endl;
        cin >> feet;
        cout << "Please enter inches: " << endl;
        cin >> inches;
    }
    void showDist()
    {
        cout << "The total distance is: " << feet << "\'" << inches << "\"" << endl;
    }
};
// Prototypes

// Main Program Program
int main()
{
    //create an instance "instantiate"
    Distance d1, d2;
    d1.getDistance();
    d1.showDist();
    d2.setDist(9, 8);
    d2.showDist();


    return 0;
}
// Function Definitions