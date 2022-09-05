/*
Garrett Dodd
This program finds the mean of four numbers in c++
CS 155
5/31/2021
*/
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int main ()
{
    //declares variables
  double num1 = 0, num2 = 0, num3 = 0, num4 = 0, total = 0, average = 0;
  
    //tells user what the program does
  cout << "This program will calculate the mean of four numbers." << endl;
  
    //asks the user for the inputs and assigns them to variables
  cout << "Enter the first number:";
    cin >> num1;
  cout << "Enter the second number:";
    cin >> num2;
  cout << "Enter the third number:";
    cin >> num3;
  cout << "Enter the fourth number:";
    cin >> num4;
   
    if(num1 >= 0 && num2 >= 0 && num3 >= 0 && num4 >= 0){
        //adds the inputs and assigns the values to the variable total
            total = num1 + num2 + num3 + num4;
        //calculates the mean of the four numbers
            average = total / 4;
        //displays the mean of the four numbers
            cout << "The mean of the four numbers is: " << average << endl;
    } else{
        cout << "Invalid data";
    }
  return 0;

}
