/*
 Name: Garrett Dodd
 Course: CS 155 - Computer Science I
 Description: Rounds grades to the nearest multiple of 5 if the grade is higher than 40
 Date: 12 July 2021
 */
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int students, grade[30], roundGrade[30];
    do{
        cout << "how many students are there? ";
        cin >> students;
    } while((students < 1) || (students > 30));
    for(int i = 0; i < students; i ++){
        cout << "Enter grade #" << i +1 << " ";
        cin >> grade[i];
    }
    cout << endl << "ID     Grade       Rounded grade" << endl;
    for (int j = 0; j < students; j++){
        if(grade[j] > 40){
            switch(grade[j]%5){
                case 1: roundGrade[j] = grade[j] - 1;
                        cout << j << setw(13) << grade[j] << setw(13) << roundGrade[j] << endl;
                        break;
                case 2: roundGrade[j] = grade[j] - 2;
                        cout << j << setw(13) << grade[j] << setw(13) << roundGrade[j] << endl;
                        break;
                case 3: roundGrade[j] = grade[j] + 2;
                        cout << j << setw(13) << grade[j] << setw(13) << roundGrade[j] << endl;
                        break;
                case 4: roundGrade[j] = grade[j] + 1;
                        cout << j << setw(13) << grade[j] << setw(13) << roundGrade[j] << endl;
                        break;
                case 0: grade[j] = grade[j];
                    cout << j << setw(13) << grade[j] << setw(13) << grade[j] << endl;
                        break;
            }
                
        } else{
            cout << j << setw(13) << grade[j] << setw(13) << grade[j] << endl;
        }
}
}
