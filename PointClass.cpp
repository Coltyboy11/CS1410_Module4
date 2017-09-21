// File: PointClass
// Created by Colten Arave on 9/21/17 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>

using namespace std;
// Constants, Structs, Classes
class Point
{
private:
    float x;
    float y;
public:
    //Constructor
    Point(): x(0.0), y(0.0)
    {}
    void showPoint()
    {
        cout << "X is: " << x << endl;
        cout << "Y is: " << y << endl;
    }
    void updatePoint(float xnew, float ynew)
    {
        x = xnew;
        y = ynew;
    }
};
// Prototypes

// Main Program Program
int main(void)
{
    Point p1;
    p1.showPoint();
    p1.updatePoint(5.9, 88.1);
    p1.showPoint();

    return 0;
}
// Function Definitions