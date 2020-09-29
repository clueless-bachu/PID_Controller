/**
* @file main.cpp
* @author Vasista Ayyagari: Driver and Navigator
* @brief Test code functions for PID controller using gtest
* @copyright Vasista Ayyagari, 2020
*/
#include <gtest/gtest.h>
#include "../include/controller.hpp"

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
    EXPECT_EQ(2.0, velController.control(0.0, 1.0));
}


/**
* @brief This test checks if the controller has properly stored its parameters
* @param controllerTest is the name of the group of tests
* @param paramGetTest is the specific name to check the getControlParam function
*/
TEST(controllerTest, paramGetTest) {
    Controller velController(1.2, 1.4, 3.9);
    EXPECT_EQ(1.2, velController.getKp());
    EXPECT_EQ(1.4, velController.getKd());
    EXPECT_EQ(3.9, velController.getKi());
}

/**
* @brief This test checks if the controller can change the inherent parameters
* @param controllerTest is the name of the group of tests
* @param paramGetTest is the specific name to check the getControlParam function
*/
TEST(controllerTest, paramSetTest) {
    Controller velController(1.2, 1.4, 3.9);

    velController.setKp(2.4);
    velController.setKd(2.5);
    velController.setKi(2.6);

    EXPECT_EQ(2.4, velController.getKp());
    EXPECT_EQ(2.5, velController.getKd());
    EXPECT_EQ(2.6, velController.getKi());
}
