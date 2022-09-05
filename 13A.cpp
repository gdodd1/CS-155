/*
 Name: Garrett Dodd
 Description: Prints a table displaying the rising ocean level
 Date: June 21, 2021
 Course: CS 155 - Computer Science I
 */
#include <iomanip>
#include <cmath>
#include <iostream>

using namespace std;

int main(){
    double oceanLevel = 0;
    int year = 1;
    cout << "Year       Ocean Level" << endl;
    for (int year = 1, double oceanLevel = 0; year < 20; oceanLevel += 1.3, year++){
        cout << year << setw(15) << setprecision(4) << right << oceanLevel << endl;
    }
    return 0;
}
