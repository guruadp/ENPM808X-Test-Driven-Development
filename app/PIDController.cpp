/**
 *  @copyright (c) 2022
 *  @file    PIDController.hpp
 *  @author  Guru Nandhan A D P (guruadp@umd.edu) (Driver) and Shail Kiritkumar
 * Shah (sshah115@umd.edu) (Navigator)
 *  @brief This file contains the compute method for computing-
 *  next velocity based on PID inputs.
 *  @version 0.1
 *  @date 2022-10-01
 */

#include "../include/PIDController.hpp"

PIDController::PIDController(double p, double i, double d) {
  kp = p;
  ki = i;
  kd = d;
  dt = 0.1;
  err_pre = 0;
  err_sum = 0;
}

PIDController::~PIDController() {}

double PIDController::computeVelocity(double setPoint, double actualVelocity) {
  // calculate error
  double err = setPoint - actualVelocity;
  // Proportional Term
  double propTerm = kp * err;
  // Integral Term
  err_sum +=  ki*(err * dt);
  // Derivative Term
  double dervTerm = kd*(err - err_pre) / dt;
  // Calculate total output
  double computedVelocity = actualVelocity + propTerm + err_sum + dervTerm;
  // Save error to previous error
  err_pre = err;

  return computedVelocity;
}
