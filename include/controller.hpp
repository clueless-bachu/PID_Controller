/*
* @file pidcontroller.hpp
* @author Vasista Ayyagari: Driver and Navigator
* @brief This file has a class declaration for PID control
* @copyright Vasista Ayyagari, 2020
*/
#pragma once
#include<iostream>
#include <vector>
using std::vector;

/*
* @class Controller
* @brief a headerfile declaration for a PID controller class with reuired functions
*/
class Controller{
 private:
    double kd, kp, ki, errSum, target, curValue, prevValue;
 public:
    Controller(double, double, double);
    ~Controller();
    vector<double> getControlParam();
    double control(double, double);
};
