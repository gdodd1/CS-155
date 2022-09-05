/*
 Name: Garrett Dodd
 Description: Display the yearly membership rate of a country club
 Date: 22 June 2021
 Course: CS 155 - Computer Science 155
 */


#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double cost = 2750, finalCost = 0;
    for (int year = 1; year < 5; year++){
        cout << "Year " << year << setw(5) << " Cost: " << setprecision(6) << cost << endl;
        cost *= 1.03;
    }
    finalCost = cost;
    for (int year = 5; year <= 10; year++){
        cout << "Year " << year << setw(5) << " Cost: " << setprecision(6) << finalCost << endl;
    }
    
    return 0;
}
