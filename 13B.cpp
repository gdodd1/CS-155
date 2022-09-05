/*
 Name: Garrett Dodd
 Date: June 21, 2021
 Course: Computer Science I
 Description: Prints out the amount of calories burned every 10 minutes
 */




#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    cout << "Minutes         Calories" << endl;
    for (double calories = 0, minutes = 0; minutes < 60; minutes += 10, calories = 3.7 * minutes){
        cout << minutes << setw(20) << calories << endl;
    }
    
    
    
    return 0;
}
