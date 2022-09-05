/*
Name: Garrett Dodd
Course: CS 155 - Computer Science I
Description: This program will use the pythagorean theorem to determine the missing
            side length, and if numbers are inputted incorrectly, it will end.
Date: 6 June 2021
*/
#include <iostream>
#include <cmath>

using namespace std;
int main() {
    //displaying purpose of the program
    cout << "This program will use the pythagorean theorem to determine the missing side length not provided by the user" << endl;
    // declaring the variables
    float side1 = 0, side2, hypotenuse = 0;
    //asking for the inputs, and assigning the variables a value
    cout << "What is one of the side lengths?" << endl;
        cin >> side1;
    cout << "What is the length of the hypotenuse?" << endl;
        cin >> hypotenuse;


    //using pythagorean theorem
if(side1 > 0 && hypotenuse > side1){
    side1 = side1 * side1;
    hypotenuse = hypotenuse * hypotenuse;
    side2 = sqrt(hypotenuse - side1);

    // displays the missing side length
    cout << "The missing side length is: " << side2 << "." << endl;
} else{
    cout << "Invalid data";
}
    return 0;
}
