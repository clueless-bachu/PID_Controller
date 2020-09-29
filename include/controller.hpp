/*
* @file pidcontroller.hpp
* @author Vasista Ayyagari: Driver and Navigator
* @brief This file has a class declaration for PID control
* @copyright Vasista Ayyagari, 2020
*/
#pragma once
#include<iostream>

/*
* @class Controller
* @brief a headerfile declaration for a PID controller class with reuired functions
*/
class Controller{
 private:
    double kp, kd, ki, errSum, prevValue;
 public:
    Controller(double, double, double);
    ~Controller();
    void setKp(double);
    void setKd(double);
    void setKi(double);
    double getKp();
    double getKd();
    double getKi();
    double control(double, double);
};
