/*
Name: Garrett Dodd
Description: This program uses if statements to determine what grade a student is in based off their earned credit hours
Course: CS 155 - Computer Science I
Date: June 11, 2021
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    //declaring a variable for the student's credit hours
    int credit = 0;
    //Asking for user input and assigning it to the new variable
    cout << "How many credits do you have?" << endl;
        cin >> credit;
     //Determines what grade the student is in based off their earned credit hours   
    if(credit >= 0){
        if(credit < 29){
            cout << endl << "You're a freshman";
        } else if(credit > 28 && credit < 57){
            cout << endl << "You're a sophomore";
        } else if(credit > 58 && credit < 85){
            cout << endl << "You're a junior";
        } else if(credit > 84){
            cout << endl << "You're a senior";
        }
    }    else {
        cout << "ERROR: Invalid Data";
    }
}
