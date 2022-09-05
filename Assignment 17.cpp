/*
 Name: Garrett Dodd
 Due Date: 1 July 2021
 Course: CS 155 - Computer Science 1
 Description: Calculate kinetic energy using user inputs
 */
#include <iostream>
#include <cmath>

using namespace std;

double calculateEnergy(double mass, double velocity);

int main(){
    double userMass = 0, userVelocity = 0;
    cout << "What is the mass? (kilograms) ";
    cin >> userMass;
    cout << endl << "What is the velocity? (meters per second) ";
    cin >> userVelocity;
    cout << endl << "The object's kinetic energy is " << calculateEnergy(userMass, userVelocity) << " joules" << endl;
    return 0;
}
// Name:        calculateEnergy
// Purpose:     Calculate the kinetic energy of an object using input data
// Incoming:    Mass of the object (double) and velocity of the object (double)
// Outgoing:    Kinetic energy (double)
// Return:      Kinetic energy (double
double calculateEnergy(double mass, double velocity){
    double energy = 0;
    energy = 0.5 * mass * pow(velocity, 2);
    return energy;
    
}
