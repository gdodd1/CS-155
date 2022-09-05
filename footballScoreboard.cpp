/*
Name: Garrett Dodd
Class: CS 155: Computer Science I
Description: This program will output the score of a football team based on the inputs given and the points that each of them have
Date: 6/1/2021
*/

#include <iostream>
using namespace std;
// function to determine the total amount of points and output the value
int main() {
    // declaring variables
    double PAT = 0, pat = 0, touchdown = 0, fieldGoal = 0, safety = 0, total = 0; 
    //asking the questions and recieving the input values
    cout << "This program will determine the score of a football team using the input values";
    
    cout << "How many touchdowns have they scored?";
        cin >> touchdown;
    cout << "How many 1-point PAT's have they scored?";
        cin >> PAT;
    cout << "How many 2-point PAT's have they scored?";
        cin >> pat;
    cout <<  "How many field goals have they scored?";
        cin >> fieldGoal;
    cout << "How many safeties have they scored?";
        cin >> safety;
        
    //multiplying the variables by their point values
    touchdown = touchdown * 6;
    pat = pat * 2;
    fieldGoal = fieldGoal * 3;
    safety = safety * 2;
    
    //adding the variables
    total = PAT + pat + touchdown + fieldGoal + safety;
    
    //outputting the total point value of the team
    cout << "The team's score is: " << total << endl;
    
    return 0;
}