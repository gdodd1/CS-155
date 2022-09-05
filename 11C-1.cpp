#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main (){
    double inputDays = 0, total = 0, pay = 1, day = 1, dailyPay = 0;
    cout << "How many days will you work?" << endl;
    cin >> inputDays;
    cout << "Day         Daily Pay" << endl;
    while(day <= inputDays){
        dailyPay = pay * 8;
        pay = pay * 2;
        cout << day << setw(10) << dailyPay << endl;
        day = day + 1;
        total = total + dailyPay;
    } cout << "Your total amount paid is: $" << total;
    return 0;
}
