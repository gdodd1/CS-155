/*
 Name: Garrett Dodd
 Course: CS 155 - Computer Science I
 Date: 2 July 2021
 Description: calculate the area of a triengle using Heron's Formula
 */
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double triangleArea(double firstInput, double secondInput, double thirdInput);

int main()
{
    double side1 = 0, side2 = 0, side3 = 0, area = 0;
    char choice = 'Y';
    do
    {
        cout << "What is the length of side 1? ";
        cin >> side1;
        cout << "What is thr length of side 2? ";
        cin >> side2;
        cout << "What is the length of side 3? ";
        cin >> side3;
        
        area = triangleArea(side1, side2, side3);
        
        cout << "The triangle's area is " << setprecision(2) << fixed << area << endl;
        
        cout << "Do you want to go again? (Y/N) ";
        cin >> choice;
    } while ((toupper(choice) == 'Y'));
    return 0;
}
// Name:    triangleArea
// Purpose: to calculate the area of a triangle using Heron's Formula
//          using the values the user will input
// Input:   side1, side2, and side3 (all doubles)
// Output:  finalArea(double)
// Return:  finalArea(double)
double triangleArea(double firstInput, double secondInput, double thirdInput){
    double finalArea = 0, semiPerimiter = 0;
    semiPerimiter = (firstInput + secondInput + thirdInput) /2;
    finalArea = sqrt(semiPerimiter * (semiPerimiter - firstInput) * (semiPerimiter - secondInput) * (semiPerimiter - thirdInput));
    return finalArea;
};
