/*
 Name: Garrett Dodd
 Description: A program that will output the patients' BMI based on weight and height input
 Course: CS 155 - Computer Science I
 Date: 25 June 2021
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>

using namespace std;

int main(){
    int patients = 0, weight = 0, height = 0;
    double BMI = 0;
    if (patients < 1){
    cout << "How many patients are there: ";
        cin >> patients;}
    for(int patient = 1; patient <= patients; patient++){
        cout << "How much does patient #" << patient << " weigh: ";
        cin >> weight;
        cout << "How tall is patient #" << patient << " in inches: ";
        cin >> height;
        BMI = (weight * 703) / pow(height, 2);
        if(BMI < 18.5){
            cout << "Patient #" << patient <<": Underweight" << endl;
        } else if (BMI > 25){
            cout << "Patient #" << patient <<": Overweight" << endl;
        } else{
            cout <<  "Patient #" << patient <<": Normal" << endl;
        }
    }
    
    return 0;
}
