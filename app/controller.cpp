#include "../include/controller.hpp"
/*
* @file pidcontroller.cpp
* @author Vasista Ayyagari: Driver and Navigator
* @brief This file has all function definitions for PID control class
* @copyright Vasista Ayyagari, 2020
*/

/*
* @brief A constructor function for the PID controller
* @param kp: the proportional constant
* @param kd: the differential constant
* @param ki: the integral constant
* @return None
*/
Controller::Controller(double kp, double kd, double ki) {
}


/*
* @brief A destructor function for the PID controller
* @param None
* @return None
*/
Controller::~Controller() {
}


/*
* @brief A function to get the PID parameters
* @param None
* @return a vector of doubles with the PID parameters
*/
vector<double> Controller::getControlParam() {
    vector<double> controlParam = {0.0, 0.0, 0.0};
    return controlParam;
}

/*
* @brief A function to implement the PID control law and return the system input
* @param curValue: The current state of the system
* @param target: The target state the system needs to achieve
* @return an input for the system from the control law
*/
double Controller::control(double curValue, double target) {
    
    return 3.14;
}
