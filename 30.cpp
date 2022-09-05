
/*
Name: Garrett Dodd
Description: This program will do selection sorting on an array of strings with fruit names
Course: CS 155 - Computer Science I
Date: 23 July 2021
*/
#include <iostream>
#include <iomanip>
#include <string>
int const MAX = 10;
using namespace std;
void selectionSort (string array[], int num);
void displayData(string array[], int num);
int main(){
    int num = 10;
    
    string fruitArray[MAX] = {"Bannana", "Orange", "Apple", "Lemon", "Lime", "Avacado", "Grape", "DragonFruit", "Peach", "Starfruit"};
    selectionSort(fruitArray, num);
    displayData(fruitArray, num);


    return 0;
}
/*
    Name: selectionSort
    Purpose: sort an array of strings using selection sorting
    Input: fruitArray(string array)
    Output: No literal output, output could be described as a sorted array
    Return: N/A
*/
void selectionSort (string array[], int num){  
        string temp;
        int minIndex=0;  
        for (int i=0; i<num-1; i++)  {    
            minIndex=i;    
            for (int j=i+1; j<num; j++)       
                if (array[j] < array[minIndex])         
                    minIndex=j;              // Swap positions i and minIndex  

                temp = array[i];    
                array[i] = array[minIndex];    
                array[minIndex] = temp;   
            }
        }
/*
    Name: displayData
    Purpose: show all elements of an array, used after being sorted
    Input: sorted fruitArray(string array)
    Output: prints an array
    Return: N/A
*/
void displayData(string array[], int num){
    for(int i = 0; i < num; i++){
        cout << array[i] << " ";
    }
}