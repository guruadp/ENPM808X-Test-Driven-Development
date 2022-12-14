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
#include "../include/PIDController.hpp"

TEST(testPIDController, should_pass) {
  PIDController controller(0.1, 0.1, 0.01);
  EXPECT_NEAR(controller.computeVelocity(10, 12), 12, 0.5);
}

TEST(testPIDController1, should_pass) {
  PIDController controller(0.1, 0.15, 0.01);
  EXPECT_NEAR(controller.computeVelocity(3.0, 4.5), 4.5, 0.5);
}
