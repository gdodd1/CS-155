#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    cout << "Minutes         Calories" << endl;
    double calories = 0, minutes = 0;
    while(minutes < 60){
        minutes = minutes + 10;
        calories = 3.7 * minutes;
        cout << minutes << setw(20) << calories << endl;
    }
    
    
    
    return 0;
}
