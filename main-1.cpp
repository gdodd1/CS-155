#include <iostream>
#include <cmath>
#include <string>
#include <fstream>
using namespace std;

int main()
{
ifstream infile;
ofstream outfile;



    //declaring variables
    double regularRate = 0, doubleRate = 0, tripleRate = 0, hours = 0, total = 0, regularPay = 0, doublePay = 0, triplePay = 0;
    string name = "";
    infile.open("pay-in-dodd.txt");
    outfile.open("pay-out-dodd.txt");

    if(infile.fail()){
        cout << "Error opening input file";
        exit(1);
    }
    if(outfile.fail()){
        cout << "Error opening output file";
        exit(1);
    }
    infile >> ws;
    getline(infile, name);
    infile >> hours >> regularRate;
    // conditional statement to determine if the user worked enough hours to qualify for double or triple pay, then outputs their wages in a table sorted by the rates.
    while(!infile.eof()) {
        if (hours >= 0 && regularRate >= 0) {
            if (0 < hours && hours <= 6) {
                doubleRate = 2 * regularRate;
                tripleRate = 3 * regularRate;

                regularPay = hours * regularRate;
                total = regularPay;
                cout << "Name: " << name;
                cout << "Regular Pay: $" << regularPay << endl;
                cout << "Total Pay: $" << total << endl;
                for(int i=0; i<30; i++){
                    cout << "=";}
                
                outfile << "Name: " << name;
                outfile << "Regular Pay: $" << regularPay << endl;
                outfile << "Total Pay: $" << total << endl;
                for(int i=0; i<30; i++){
                    outfile << "=";}
                    
                
            } else if (hours > 6 && hours < 14) {
                doubleRate = 2 * regularRate;
                tripleRate = 3 * regularRate;

                regularPay = (6 * regularRate);
                doublePay = ((hours - 6) * doubleRate);
                total = regularPay + doublePay;
                cout << "Name: " << name << endl;
                cout << "Regular Pay: $" << regularPay << endl;
                cout << "Double Pay: $" << doublePay << endl;
                for(int i=0; i<30; i++){
                    cout << "=";}
                
                    
                outfile << "Name: " << name << endl;
                outfile << "Regular Pay: $" << regularPay << endl;
                outfile << "Double Pay: $" << doublePay << endl;
                for(int i=0; i<30; i++){
                    outfile << "=";}
                
                
            } else if (hours > 14) {
                doubleRate = 2 * regularRate;
                tripleRate = 3 * regularRate;

                regularPay = 6 * regularRate;
                doublePay = 8 * doubleRate;
                triplePay = (hours - 14) * tripleRate;

                total = regularPay + doublePay + triplePay;

                cout << "Name: " << name << endl;
                cout << "Regular Pay: " << regularPay << endl;
                cout << "Double Pay: $" << doublePay << endl;
                cout << "Triple Pay: $" << triplePay << endl;
                cout << "Total: $" << total << endl;
                for(int i=0; i<30; i++){
                    cout << "=";}
                cout << endl;
                
                outfile << "Name: " << name << endl;
                outfile << "Regular Pay: " << regularPay << endl;
                outfile << "Double Pay: $" << doublePay << endl;
                outfile << "Triple Pay: $" << triplePay << endl;
                outfile << "Total: $" << total << endl;
                for(int i=0; i<30; i++){
                    outfile << "=";}
                outfile << endl;
            }
        } else {
            cout << "ERROR: Invalid Data";
        }
        infile >> ws;
        getline(infile, name);
        infile >> hours >> regularRate;
    }
        infile.close();
        outfile.close();
    return 0;
}
