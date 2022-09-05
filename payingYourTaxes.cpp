#include <iomanip>
#include <cmath>
#include <iostream>

using namespace std;

int main(){
    double income = 0, tax = 0;
    char marriageStatus;
    
    cout << "How much do you make per year?" << endl;
        cin >> income;
    cout << "Are you filing single (S) or married (M)" << endl;
        cin >> marriageStatus;
        

    switch (marriageStatus){
    case 'S':     if(income < 28000){
                    tax = income * 0.08;
                    cout << "Filing single, you will be paying $" << tax << " in taxes this year";
                    break;
                    } else if (income > 28000){
                        tax = 2500 + (income - 28000) * 0.18;
                        cout << "Filing single, you will be paying $" << tax << " in taxes this year";
                        break;
                    }
                    
    case 'M':     if(income < 56000){
                    tax = income * 0.08;
                    cout << "Filing married, you will pay $" << tax << " in taxes this year";
                    break;
                    } else if (income > 56000){
                        tax = 5000 + (income - 5600) * 0.18;
                        cout << "Filing married, you wil pay $" << tax << " in taxes this year";
                        break;
                    }    
    default:        cout << "ERROR: Invalid Data";                
    }
    return 0;
}
