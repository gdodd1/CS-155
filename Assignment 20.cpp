/*
 Name: Garrett Dodd
 Course: CS 155 - Computer Science I
 Description: The program will calculate the highest and lowest exam grade using user inputs
 Date: 7 July 2021
 */

#include <iostream>
#include <iomanip>
using namespace std;
void score( double exam_1, double exam_2, double exam_3, double &maximum, double &minimum);
int main(){
    double exam1, exam2, exam3, max, min;
    cout << "What is the first exam score? ";
    cin >> exam1;
    cout << "What is the second exam score? ";
    cin >> exam2;
    cout << "What is the third exam score? ";
    cin >> exam3;
    score(exam1, exam2, exam3, max, min);
    cout << "The highest score is: " << max << "." << endl;
    cout << "The lowest score is: " << min << "." << endl;
    return 0;
}
/*
 Name:      score
 Purpose:   to calculate the highest and lowest score using the inputted test grades
 Input:     exam1 (double), exam2 (double), exam3 (double)
 Output:    maximum and minimum scores using reference parameters "max" and "min", linked
            to "&maximum" and "&minimum".
 Return:    No return, void function
 */
void score( double exam_1, double exam_2, double exam_3, double &maximum, double &minimum){
    if ((exam_1 > exam_2) && (exam_1 > exam_3)){
        maximum = exam_1;
    } else if((exam_2 > exam_1) && (exam_2 > exam_3)){
        maximum = exam_2;
    } else {
        maximum = exam_3;
    }
    
    if ((exam_1 < exam_2) && (exam_1 < exam_3)){
        minimum = exam_1;
    } else if((exam_2 < exam_1) && (exam_2 < exam_3)){
        minimum = exam_2;
    } else {
        minimum = exam_3;
    }
}
