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

    side1 = side1 * side1;
    hypotenuse = hypotenuse * hypotenuse;
    side2 = sqrt(hypotenuse - side1);

    // displays the missing side length
    cout << "The missing side length is: " << side2 << "." << endl;

    return 0;
}
