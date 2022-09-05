/*
 Name: Garett Dodd
 Course: CS 155 -Computer Science I
 Description : Prints the amount they'll get paid per days worked
 Date: June 21, 2021
 */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main (){
    double inputDays = 0, total = 0, pay = 1, day = 1, dailyPay = 0;
    cout << "How many days will you work?" << endl;
    cin >> inputDays;
    cout << "Day         Daily Pay" << endl;
    for (double inputDays = 0, total = 0, pay = 1, day = 1, dailyPay = 0; day <= inputDays, day++){
        dailyPay = pay * 8;
        pay = pay * 2;
        cout << day << setw(10) << dailyPay << endl;
        total = total + dailyPay;
    } cout << "Your total amount paid is: $" << total;
    return 0;
}
