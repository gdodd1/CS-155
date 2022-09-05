#include <iostream>
#include <fstream>

using namespace std;
const int max_input = 100;
int main(){
    int numbers = 0;
    string fileInput, fileOutput;
    double num1[MAX_INPUT], num2[MAX_INPUT];
    ifstream infile;
    ofstream outfile;
    cout << "What file will be used as input? ";
    getline(cin, fileInput);
    cout << "What file will be used as output? ";
    getline(cin, fileOutput);
    infile.open(fileInput.c_str());
    outfile.open(fileOutput.c_str());
    if(infile.fail()){
        cout << "ERROR opening input file" << endl;
        exit(1);
    }
    if(outfile.fail()){
        cout << "ERROR opening output file" << endl;
        exit(1);
    }
    infile >> ws;
    infile >> num1[numbers] >> num2[numbers];
    numbers++;
    while(!infile.eof()){
        infile >> num1[numbers] >> num2[numbers];
        numbers++;}
    
    for(int i = 0; i < numbers; i++){
        cout << num1[i] << " " << num2[i] << " " << num1[i]+num2[i] <<  " " << num1[i] - num2[i] << " " << num1[i]*num2[i] << " " << num1[i]/num2[i] << endl;
        outfile << "Number 1: " << num1[i] << endl << "Number 2: " << num2[i] << endl << "Sum: " << num1[i]+num2[i]
                << endl << "Difference: " << num1[i]-num2[i] << endl << "Product: " << num1[i]*num2[i] << endl << "Quotient: " << num1[i]/num2[i] << endl;
    }

    return 0;
}