
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    //declaring variables
    double regularRate = 0, doubleRate = 0, tripleRate = 0, hours = 0, total = 0, regularPay = 0, doublePay = 0, triplePay = 0, tempHours = 0;
    string name = "";
    //asking for the inputs to assign variable values
    cout << "What is your name?" << endl;
        getline(cin, name);
    cout << "What is your hourly rate?";
        cin >> regularRate;
    cout << "How many hours did you work?";
        cin >> hours;
    // conditional statement to determine if the user worked enough hours to qualify for double or triple pay, then outputs their wages in a table sorted by the rates.
        if (hours >= 0 && regularRate >= 0){
            if(0 < hours  && hours <= 6){
            doubleRate = 2 * regularRate;
            tripleRate = 3 * regularRate;
            
            regularPay = hours * regularRate;
            total = regularPay;
                cout << name << ", you worked " << hours << " and will be payed $ " << total << endl << endl;
                cout << "regularPay" << setw(10) << regularPay;
        
        } else if(hours > 6 && hours < 14 ){
            doubleRate = 2 * regularRate;
            tripleRate = 3 * regularRate;
            
            regularPay = (6 * regularRate);
            doublePay = ((hours - 6) * doubleRate);
            total = regularPay + doublePay;
                 cout << name << ", you worked " << hours << " and will be payed $ " << total << endl << endl;
                 cout << "regularPay" << setw(10) << regularPay << endl;
                 cout << "doublePay" << setw(10) << doublePay << endl;
    
        } else if (hours > 14){
            doubleRate = 2 * regularRate;
            tripleRate = 3 * regularRate;
            
            regularPay = 6 * regularRate;
            doublePay = 8 * doubleRate;
            triplePay = (hours - 14) * tripleRate;
            
            total = regularPay + doublePay + triplePay;
            
                cout << name << ", you worked " << hours << " hours and will be payed $" << total << endl << endl;
                cout << "regularPay" << setw(10) << regularPay << endl;
                cout << "doublePay" << setw(10) << doublePay << endl;
                cout << "triplePay" << setw(10) << triplePay << endl;
        } }else {
            cout << "ERROR: Invalid Data";
        }
    return 0;
}
