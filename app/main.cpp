/*
* @file main.cpp
* @author Vasista Ayyagari: Driver and Navigator
* @file This file runs the PID controller
* @copyright Vasista Ayyagari, 2020
*/
#include <iostream>
#include "../include/controller.hpp"

using std::cout;
using std::cin;
using std::endl;

/*
* @brief reads the controller parameters and runs a single iteration of the control law
* @param None
* @return None
*/
int main() {
    // initialize variables
    double kp, kd, ki, target, curVelocity;

    // Read the input data
    cout << "Enter the K values" << endl;
    cin >> kp >> kd >> ki;

    cout << "input the target and current velociy" << endl;
    cin>> target >> curVelocity;

    // create class object and call the contorl function
    Controller velController(kp, kd, ki);
    cout << velController.control(curVelocity, target) << endl;
    return 0;
}
