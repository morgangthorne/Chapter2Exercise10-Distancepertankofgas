/*
Program Name:Chapter2Exercise10-Distancepertankofgas.cpp
Programmer: Morgan Thorne
Date: February 2025
Requirements:
A car holds 15 gallons of gasoline and can travel 375 miles before refueling.
Write a program that calculates the number of miles per gallon the car gets.
Display the result on the screen.
*/


#include <iostream>
using namespace std;

int main()
{
    int Gallons = 15;
    int MilesDriven = 375;
    int MPG = MilesDriven / Gallons;

    cout << "Your car has " << Gallons << " gallons of petrol and can travel " << MilesDriven << " miles." << endl;
    cout << "You can drive " << MPG << " miles per gallon of petrol.";
    
    
    
    
}
