/******************************************************************************
Name: Garrett Dodd
Description: Find final investment value with input values
Course: CS 155 - Computer Science I 
Date: 6/5/2021
*******************************************************************************/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    //declaring all variables
    string first = "", last = "";
    double interest = 0, compoundPeriod = 0, years = 0, deposit = 0, total = 0;
    
    // asking for the input values
    cout << "What is your first name: " << endl;
        cin >> first;
    cout << "What is your last name: " << endl;
        cin >> last;
    
    cout << "How much is your initial investment: " << endl; 
        cin >> deposit;
    cout << "How many times does it compound per year: " << endl;
        cin >> compoundPeriod;
    cout << "How many years will you leave it: " << endl;
        cin >> years;
    cout << "How much interest will you earn (percentage): " <<endl;
        cin >> interest;
        
    //making % into a decimal    
    interest = interest / 100;
    
    // doing math to get answer
    total = pow((1 + interest/ compoundPeriod), (compoundPeriod*years));
    total = total * deposit;
    
    //outputs the final value with the inputted name
    cout << "Alright " << first << " " << last << ", your total after " << years << "years will be $" << total << endl; 
    
    
    
    
    
    return 0;
}
