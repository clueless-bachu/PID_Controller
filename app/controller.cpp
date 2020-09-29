#include "../include/controller.hpp"
/**
* @file pidcontroller.cpp
* @authors Part 1 - Vasista Ayyagari: Driver and Navigator
*          Part 2 - Mahmoud Dahmani (Navigator), Ajinkya Parwekar (Driver)
* @brief This file has all function definitions for PID control class
* @copyright Vasista Ayyagari, 2020
*/

/**
* @brief A constructor function for the PID controller
* @param kp: the proportional constant
* @param kd: the differential constant
* @param ki: the integral constant
* @return None
*/
Controller::Controller(double kp, double kd, double ki)
    :kp{kp}, kd{kd}, ki{ki}, errSum{0.0}, prevValue{0.0} {}


/**
* @brief A destructor function for the PID controller
* @param None
* @return None
*/
Controller::~Controller() {
}

/**
* @brief sets the value of kp
* @param kp: the value for Kp parameter
* @return  none
*/
void Controller::setKp(double kp) {
    this->kp = kp;
}

/**
* @brief sets the value of kd
* @param kd: the value for Kd parameter
* @return  none
*/

void Controller::setKd(double kd) {
    this->kd = kd;
}

/**
* @brief sets the value of ki
* @param ki: the value for Ki parameter
* @return  none
*/
void Controller::setKi(double ki) {
    this->ki = ki;
}

/**
* @brief returns the value of kp
* @param none
* @return Kp
*/
double Controller::getKp() {
    return this->kp;
}

/**
* @brief returns the value of kd
* @param none
* @return  Kd
*/

double Controller::getKd() {
    return this->kd;
}

/**
* @brief returns the value of ki
* @param none
* @return  Ki
*/
double Controller::getKi() {
    return this->ki;
}


/**
* @brief A function to implement the PID control law and return the system input
* @param curValue: The current state of the system
* @param target: The target state the system needs to achieve
* @return an input for the system from the control law
*/
double Controller::control(double curValue, double target) {
    double error = target - curValue;
    errSum += error;
    double controlValue = kp*error + kd*(error - prevValue) + ki*errSum;
    prevValue = error;

    return controlValue;
}
