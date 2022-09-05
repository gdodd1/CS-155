/*
Name: Garrett Dodd
Course: CS 155 - Computer Science I
Description: Use 2-D arrays to alter and display data
Date: 25 July 2021
*/
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;
const int ROW = 10, COL = 10;
void menu();
void fillMatrix(int data[][COL], int &numRows, int &numCols);
void printMatrix(int data[][COL], int numRows, int numCols);
void printColumn(int data[][COL], int numRows, int numCols);
int rowProduct(int data[][COL], int numRows, int numCols, int row);
void columnSums(int data[][COL], int numRows, int numCols);
bool filled = false;
int main(){
    int data[ROW][COL] = {0};
    int numRows = 0, numCols = 0, menuChoice, row;
    do{
    menu();
    cin >> menuChoice;
    switch(menuChoice){
    case 1: fillMatrix(data, numRows, numCols);
            menu();
            break;
    case 2: printMatrix(data, numRows, numCols);
            menu();
            break;
    case 3: printColumn(data, numRows, numCols);
            menu();
            break;
    case 4: columnSums(data, numRows, numCols);
            menu();
            break;
    case 5: cout << "Which row do you want to be multiplied? ";
            cin >> row;
            cout << "The product of multiplying row #" << row << " is " << rowProduct(data, numRows, numCols, row) << endl;
            menu();
            break;
    case 0: cout << "Goodbye" << endl;
            exit(1);
            break;
    default: cout << "Invalid entry" << endl;
            menu();
            break;
    }
    } while(menuChoice != 0);
    return 0; 
}
/*
Name: menu
Purpose: display the menu
Input: N/A
Output: outputs the menu
return: N/A
*/
void menu(){
    cout    << "MENU OPTIONS:" << endl 
            << "1. Fill the matrix" << endl
            << "2. Print the matrix(row major)" << endl
            << "3. Print the matrix(column major)" << endl
            << "4. Print column sums" << endl
            << "5. Calculate the product of a row" << endl
            << "0. Quit program" << endl;
            
}
/*
Name: fillMatrix
Purpose: fill the matrix using the input file
Input: N/a
Output: N/a
Return: N/A
*/
void fillMatrix(int data[][COL], int &numRows, int &numCols){
    const char FILENAME[] = "assign31in.txt";
    ifstream datafile;
    datafile.open(FILENAME);
    filled = true;
    if(datafile.fail()){
        cout << "Error opening file" << endl;
        exit(1);
    }
    datafile >> numRows >> numCols;
    for(int row = 0; row < numRows; row++)
            for(int col = 0; col<numCols; col++)
                datafile >> data[row][col];
    datafile.close();
    
}
/*
Name: printMatrix
Purpose: prints the matrix
Input:N/A
output: outputs the matrix in a table
Return: N/A
*/
void printMatrix(int data[][COL], int numRows, int numCols){
    if(filled == true){
    for(int row = 0; row < numRows; row++){
            for(int col = 0; col<numCols; col++)
                cout << data[row][col] << " ";
            cout << endl;
    }} else{
        cout << "Array has not been filled" << endl;
    }
}
/*
Name: printMatrix
Purpose: prints the matrix while focusing on columns
Input:N/A
output: outputs the matrix in a table
Return: N/A
*/
void printColumn(int data[][COL], int numRows, int numCols){
    if(filled == true){
    for(int col = 0; col < numCols; col++){
        for(int row = 0; row < numRows; row++)
            cout << data[col][row] << " ";
        cout << endl;
    }} else{
        cout << "Array has not been filled." << endl;
    }
}
/*
Name: ColumnSums
Purpose: adds the columns together
Input: N/A
Output: outputs the sums of the columns
Return: N/A
*/
void columnSums(int data[][COL], int numRows, int numCols){
    int sum;
    if(filled == true){
    for(int row = 0; row < numRows; row++){
            for(int col = 0; col<numCols; col++)
                sum += data[row][col];
    cout << "Row #: " << row << setw(5) << "Sum: " << sum << endl;
    sum = 0;
    }} else{
        cout << "Array has not been filled." << endl;
    }
}
/*
Name: rowProduct
Purpose: calculates the product of a row
Input:N row number wanted to be multiplied
output: N/A
Return: returns the product of the row
*/
int rowProduct(int data[][COL], int numRows, int numCols, int row){
    int product = 1;
    if(filled == true){
        for (int i = 0; i < numRows; i++)
        {
            product *= data[row][i];
        }
    }else{
        cout << "Array has not been filled." << endl;
    }

    return product;
}