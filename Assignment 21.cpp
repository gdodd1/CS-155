/*
 Name: Garrett Dodd
 Course: CS 155 - Computer Science I
 Description: Calculate the area of a triangle using the user input side lengths
 Date: 8 July 2021
 */
#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

double side1, side2, side3, area;

void get_sides (double &side_1, double &side_2, double &side_3);
double triangleArea(double side_1, double side_2, double side_3);

int main(){
    ofstream outfile;
    outfile.open("triangles.txt");
    if(outfile.fail()){
        cout << "Error opening output file";
        exit(1);
    }
    char choice = 'Y';
    do{
        get_sides(side1, side2, side3);
        area = triangleArea(side1, side2, side3);
        cout << "The triangle's area is " << area << endl;
        outfile << side1 << " " << side2 << " " << side3 << endl;
        outfile << "The triangle's area is " << area << endl;
        cout << "Would you like to continue? (Y/N)";
        cin >> choice;
        cout << endl;
    } while (toupper(choice) == 'Y');
    return 0;
}
/*
    Name:       get_sides
    Purpose:    ask the user to input the sides of a triagngle and store the data
    Input:      side_1, side_2, side_3 (doubles)
    Output:     reference variables side1, side2, side3
    Return:     no return, void function
*/
void get_sides (double &side_1, double &side_2, double &side_3){
    do{
        cout << "What is side 1? ";
        cin >> side_1;
    } while (side1 <= 0);
    do{
        cout << "What is side 2? ";
        cin >> side_2;
    } while (side_2 <= 0);
    do{
        cout << "What is side 3? ";
        cin >> side_3;
    } while (side_3 <= 0);
}
/*
    Name:    triangleArea
    Purpose: to calculate the area of a triangle using Heron's Formula
             using the values the user will input
    Input:   side1, side2, and side3 (all doubles)
    Output:  finalArea(double)
    Return:  finalArea(double)
*/
double triangleArea(double side_1, double side_2, double side_3){
    double finalArea = 0, semiPerimiter = 0;
    semiPerimiter = (side_1 + side_2 + side_3) /2;
    finalArea = sqrt(semiPerimiter * (semiPerimiter - side_1) * (semiPerimiter - side_2) * (semiPerimiter - side_3));
    
    return finalArea;
};
