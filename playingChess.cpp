/*
Name: Garrett Dodd
Description: This program determines the number of points in a chess game
Class: CS 155- Computer Science I
Date: 6/1/21
*/
#include <iostream>
using namespace std;
// function to determine the number of points
int main(){
   cout << "This program will determine the number of points in a chess game" << endl;
   //declaring variables
   double queen = 0, rook = 0, knight = 0, bishop = 0, pawn = 0, total = 0;
        //asking for the input values
        cout << "How many queens do you have? " << endl;
            cin >> queen;
        cout << "How many rooks do you have? " << endl;
            cin >> rook;
        cout << "How many knights do you have? " << endl;
            cin >> knight;
        cout << "How many bishops do you have? " << endl;
            cin >> bishop;
        cout << "How many pawns do you have? " << endl;
            cin >> pawn;
        // setting the variables to their point values
        queen = queen * 9;
        rook = rook * 5;
        knight = knight * 3;
        bishop = bishop * 3;
        //adding the total amount of points 
        total = queen + rook + knight + bishop + pawn;
        //displaying the output 
        cout << "Your total points is " << total << "." << endl;
        
    return 0;
}