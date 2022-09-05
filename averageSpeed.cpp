/*
Name: Garrett Dodd
Description: This program determines the average speed driven during a trip
Class: CS 155- Computer Science I
Date: 6/1/21
*/
#include <iostream>
using namespace std;

int main(){
    //declaring variables
    double startOdo = 0, endOdo = 0, hours = 0, total = 0, speed = 0;
     // asking for each input
    cout << "This program will determine the average speed during a trip." << endl;
    cout << "Please input the starting odometer value: " << endl;
        cin>> startOdo;
    cout << "Please input the ending odometer value: " << endl;
        cin >> endOdo;
    cout << "Please input the number of hours driven" << endl;
        cin >> hours;
    // calculating the average speed
    total = endOdo - startOdo;
    speed = total / hours;
    // displays output
    cout << "The average speed for the trip was: " << speed << " mph" << endl;
        
    return 0;
}