/*
 Name: Garrett Dodd
 Description: Show vacant room % after user inputs data
 Date: June 20, 2021
 Class: Computer Science I
 */
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    double floors = 0, rooms = 0, fullRooms = 0, temp = 0, floor = 1, percent = 0;
    
    cout << "How many floors are there in the hotel?" << endl;
        cin >> floors;
    do{
        cout << "How many rooms are in floor " << floor << endl;
        cin >> temp;
        rooms = rooms + temp;
        cout << "How many occupied rooms are on floor " << floor << endl;
        cin >> temp;
        fullRooms = fullRooms + temp;
        floor = floor + 1;
    } while ((floors >= 2) && (floor <= floors));
    
    cout << "Total Rooms        Total Occupied Rooms         % Occupied Rooms" << endl;
    percent = (fullRooms / rooms) * 100;
    cout << rooms << setw(25) << fullRooms << setw(25) << setprecision(2) << percent << "%" << endl;
    
    return 0;
    
    
    
}
