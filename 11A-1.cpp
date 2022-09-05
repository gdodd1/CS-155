//
//  main.cpp
//  Assignment 11A
//
//  Created by Garrett  Dodd on 6/15/21.
//

#include <iomanip>
#include <cmath>
#include <iostream>

using namespace std;

int main(){
    double oceanLevel = 0;
    int year = 1;
    cout << "Year       Ocean Level" << endl;
    while (year < 20){
        oceanLevel = oceanLevel + 1.3;
        year = year + 1;
        cout << year << setw(15) << setprecision(4) << right << oceanLevel << endl;
    }
    return 0;
}
