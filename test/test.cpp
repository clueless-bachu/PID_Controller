/**
* @file main.cpp
* @author Vasista Ayyagari: Driver and Navigator
* @brief Test code functions for PID controller using gtest
* @copyright Vasista Ayyagari, 2020
*/
#include <gtest/gtest.h>
#include <vector>
#include "../include/controller.hpp"
using std::vector;

/**
* @brief This test checks if the control law works as expected
* @param controllerTest is the name of the group of tests
* @param controlFuncTest is the specific name to check the control function
*/
TEST(controllerTest, controlFuncTest1) {
    Controller velController(0, 0, 0);
    EXPECT_EQ(0, velController.control(0, 0));
}

/**
* @brief This test checks if the control law works as expected
* @param controllerTest is the name of the group of tests
* @param controlFuncTest is the specific name to check the control function
*/
TEST(controllerTest, controlFuncTest2) {
    Controller velController(1.0, 1.0, 1.0);
    EXPECT_EQ(1.0, velController.control(0.0, 1.0));
}


/**
* @brief This test checks if the controller has properly stored its parameters
* @param controllerTest is the name of the group of tests
* @param paramGetTest is the specific name to check the getControlParam function
*/
TEST(controllerTest, paramGetTest) {
    Controller velController(1.2, 1.4, 3.9);
    vector<double> params = {1.2, 1.4, 3.9};
    EXPECT_EQ(params, velController.getControlParam());
}

