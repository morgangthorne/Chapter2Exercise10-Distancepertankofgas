/*
Program Name:Chapter2Exercise10-Distancepertankofgas.cpp
Programmer: Morgan Thorne
Date: February 2025
Requirements:
A car holds 15 gallons of gasoline and can travel 375 miles before refueling.
Write a program that calculates the number of miles per gallon the car gets.
Display the result on the screen.

Revisions:
Changed code to allow user to enter the amount of gallons in car and miles travelled.
*/


#include <iostream>
using namespace std;

int main()
{
    int Gallons;
    int MilesDriven;

    cout << "How many gallons of petrol does your car have? ";
    cin >> Gallons;
    cout << "How many miles can you drive before refueling? ";
    cin >> MilesDriven;
    
    int MPG = MilesDriven / Gallons;
    
    cout << "You can drive " << MPG << " miles per gallon of petrol.";
    
    
    
    
}
