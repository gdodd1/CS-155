/*
    Name: Garrett Dodd
    Description: Read the inventory file of a car dealership and change it, then output to the terminal and a file
    Course: CS 155 - Computer Science
    Date: 18 July 2021
*/
#include <iostream>
#include <fstream>

using namespace std;
const int MAX_CARS = 50;
void menu();
void removeCars(int storage[], int numStores);
void addCars(int storage[], int numStores);
void displayInventory(int numStores, int storage[]);
int main(){
    int numStores;
    fstream infile;
    ofstream outfile;
    infile.open("inventory.txt");
    outfile.open("invout.txt");
    int menuChoice;
    int storage[MAX_CARS];
    numStores++;
    infile >>ws;
    infile >> numStores;
    for(int i = 0; i < numStores;i++){
            infile >> storage[i];
            numStores++;
           
    }

    do{
    menu();
    cin >> menuChoice;
    switch(menuChoice){
        case 1: displayInventory(numStores, storage);
                break;
        case 2: addCars(storage, numStores);
                break;
        case 3: removeCars(storage, numStores);
                break;
        case 4: for (int i = 0; i < numStores; i++){
                    outfile << "Store #" << i+1 << ": " << storage[i] << endl;
                }
                infile.close();
                outfile.close();
                exit(1);
                break;
        default: cout << "ERROR: Invalid input";
                 break;
    }
    }while(menuChoice != 4);
    infile.close();
    outfile.close();
    return 0;
}
/*
Name:      menu
Purpose:   display the menu options of the program
Input:     1-4 to do the menu options
Output:    the function outputs the menu for the program
Return:    no return
*/
void menu(){
    cout << endl << "MENU OPTIONS:" << endl;
    cout << "1. Display Inventory" << endl;
    cout << "2. Add some cars" << endl;
    cout << "3. Remove some cars" << endl;
    cout << "4. Quit program" << endl;
}
/*
Name:      displayInventory
Purpose:   displays the inventory of all the stores, adding 1 to the index in the loop so that the user's store numbers start at 1
Input:     no input
Output:    no output
Return:    no return
*/
void displayInventory(int numStores, int storage[]){
    cout << endl;
    for (int i = 0; i < numStores; i++){
        cout << "Store #" << i+1 << ": " << storage[i] << endl;
    }
}
/*
Name:     addCars
Purpose:  add cars to the selected store number 
Input:    store number(int) and number of cars to be added(int)
Output:   asks the user to input data
Return:   no return
*/
void addCars(int storage[], int numStores){
    int num;
    int place;
    cout << "Which store number and how many cars would you like to add? (seperate with one space)" << endl;
    cin >> place >> num;
    if(place > 0 && place < numStores){
            storage[place - 1] += num;
    } else{
        cout << "Invalid data entry";
    }
    
}
/*
Name:     removeCars
Purpose:  subtract the input number at the chosen index of the storage array
Input:    storage array (int array) and number of stores(int)
Output:   "invalid data entry" if input number is not between 1 and numStores and if it would make the array value less than one
Return:   no return
*/
void removeCars(int storage[], int numStores){
    int storeNum, num;
    cout << "Which store number and how many cars would you like to remove? (seperate with one space)" << endl;
    cin >> storeNum >> num;
    if(storeNum > 0 && storeNum < numStores){
        if((storage[storeNum - 1] - num ) >= 0){
        storage[storeNum - 1] -= num;
        } else{
            cout << "Invalid data entry";
        }
    }
}