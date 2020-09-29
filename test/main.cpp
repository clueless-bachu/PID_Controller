/**
* @file main.cpp
* @author Vasista Ayyagari: Driver and Navigator
* @brief this program runs the unit tests defined in test.cpp
* @copyright Vasista Ayyagari, 2020
*/
#include <gtest/gtest.h>

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
