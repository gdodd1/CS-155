/*
 Name:          Garrett Dodd
 Course:        CS 155 - Computer Science I
 Description:   The program will calculate the cost of paint and carpet needed for rooms
                with the user inputting the dimensions and names of the rooms
 Date:          3 July 2021
 */
#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstring>
#include <string>
using namespace std;

double calculatePaint(double wallLength, double wallHeight);
double calculateCarpet(double floorLength, double floorWidth);
int main(){
    char choice = 'Y';
    char name[20];
    double length = 0, height = 0, width = 0;
    // carpet and paint cost are average per square foot
    do
    {
        cout << "What is the name of the room? " << endl;
        cin >> name;
        cout << endl << "What is the width of the room in feet? " << endl;
        cin >> width;
        cout << endl << "What is the length of the room in feet? " << endl;
        cin >> length;
        cout << endl << "What is the height of the room in feet? " << endl;
        cin >> height;
        
        cout << "The cost of the paint in the " << name << " is $" << setprecision(2) << fixed << calculatePaint(length, height) << endl;
        cout << "The cost of the carpet in the " << name << " is $" << setprecision(2) << fixed << calculateCarpet(length, width) << endl;
        cout << "Would you like to do another room? (Y/N) ";
        cin >> choice;
    } while (toupper(choice) == 'Y');
}
/*
 Name:      calculatePaint
 Purpose:   To calculate the cost of paint using the wall length and width
 Input:     The length (double) and width (double) of the walls
 Output:    The cost of the paint (double)
 Return:    The cost of the paint (double)
 */
double calculatePaint(double wallLength, double wallHeight){
    double cost = 0, paintCost = 2.75;
    cost = wallLength * wallHeight * paintCost * 4;
    return cost;
}
/*
 Name:      calculateCarpet
 Purpose:   To calculate the cost of carpet using the length and width of the floor
 Input:     the length(double) and width (double) of the floor
 Output:    the cost of the carpet (double)
 Return:    the cost of the carpet (double)
 */
double calculateCarpet(double floorLength, double floorWidth){
    double cost = 0, carpetCost = 5;
    cost = floorLength * floorWidth * carpetCost;
    return cost;
}
