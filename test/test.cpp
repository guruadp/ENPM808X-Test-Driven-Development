/**
 *  @copyright (c) 2022
 *  @file    main.cpp
 *  @author  Guru Nandhan A D P (guruadp@umd.edu) (Driver) and Shail Kiritkumar
 * Shah (sshah115@umd.edu) (Navigator)
 *  @brief PID controller for Test Driven Development
 *  @version 0.1
 *  @date 2022-10-01
 */

#include <gtest/gtest.h>
#include "../app/PIDController.cpp"

TEST(testPIDController, should_pass) { 
  PIDController controller;
  EXPECT_EQ(controller.computeVelocity(5, 10), -4); 
}

TEST(testPIDController1, should_pass) { 
  PIDController controller;
  EXPECT_EQ(controller.computeVelocity(3, 9), -3); 
}

