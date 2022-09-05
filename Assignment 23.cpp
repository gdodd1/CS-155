/*
 Name: Garrett Dodd
 Course: CS 155 - Computer Science I
 Description: Generate a random lotto number 000-999
 Date: 10 July 2021
 */
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;

int main(){
    ofstream outfile;
    outfile.open("lottery.rtf");
    double num, lotto;
    cout << "How many numbers do you want? ";
    cin >> num;
    srand( static_cast<unsigned int>(time(nullptr)));
    
    for (int i = 0; i < num; i++){
        lotto = 100 + rand()% 899;
        cout << lotto << endl;
        outfile << lotto << endl;
    }
    outfile.close();
    return 0;
}
