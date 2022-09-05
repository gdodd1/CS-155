#include <iostream>
//found on c++ reference for toupper
#include <stdio.h>
#include <ctype.h>
//found on c++ reference for toupper
using namespace std;
int maxNum = 200;

void fillInOrder(int number, int numArray[]);
void fillReverseOrder(int number, int numArray[]);
void fillRandomOrder(int number, int numArray[]);
void displayArray(int number, int numArray[]);

int main(){
    int numArray[maxNum];
    int number = 0, arrayChoice;
    char choice = 'Y';
    cout << "How many values do you want?" << endl;
    cin >> number;
    cout << "Would you like to: " << endl << "1. Fill in order" << endl << "2. Fill in reverse order" << endl << "3. Fill in random order" << endl << "4. Display Array";
    cin >> arrayChoice;
do{
    cout << "Would you like to: " << endl << "1. Fill in order" << endl << "2. Fill in reverse order" << endl << "3. Fill in random order" << endl << "4. Display Array";
    switch(arrayChoice){
        case 1: fillInOrder(number, numArray);
                cout << "Would you like to continue? (Y/N)";
                cin >> choice;
                break;
        case 2: fillReverseOrder(number, numArray);
                cout << "Would you like to continue? (Y/N)";
                cin >> choice;
                break;
        case 3: fillRandomOrder(number, numArray);
                cout << "Would you like to continue? (Y/N)";
                cin >> choice;
                break;
        case 4: displayArray(number, numArray);
                cout << "Would you like to continue? (Y/N)";
                cin >> choice;
                break;
        default: cout << "Invalid input";
                cout << "Would you like to continue? (Y/N)";
                cin >> choice;
                break;

    }
}while(choice =='Y');
if(choice == 'N'){
    exit(1);
}
    return 0;
}
void fillInOrder(int number, int numArray[]){
    for(int i = 0; i <number; i++){
        numArray[i] = (i+1) * 10;
    }
}
void fillReverseOrder(int number, int numArray[]){
    for(int i = 0; i < number; i++){
        numArray[i] = (number - i) * 10;
    }
}
void fillRandomOrder(int number, int numArray[]){
    for(int i = 0; i< number; i++){
        numArray[i] = 1 + rand()%10000;
    }
}
void displayArray(int number, int numArray[]){
    for (int i = 0; i < number; i++){
        cout << "Value #" << i+1 << numArray[i];
    }
}