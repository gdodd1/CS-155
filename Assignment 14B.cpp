/*
 Name: Garrett Dodd
 Course: CS 155 - Computer Science I
 Description: Shows the yearly payments with a growing payment all input by the user
 Date: June 22, 2021
 */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    double inputCost = 0, years = 0, percent = 0;
    cout << "How much does the membership cost? " << endl;
    cin >> inputCost;
    cout << "What percentage will it increase by: (ex. 4.0, 2.8) " << endl;
    cin >> percent;
    cout << "How many years will you pay? " << endl;
    cin >> years;
    percent /= 100;
    for (int year = 1; year <= years; year++){
        cout << "Year " << year << " Cost: " << inputCost << endl;
        inputCost =  inputCost * (1 + percent);
    }
    return 0;
}
