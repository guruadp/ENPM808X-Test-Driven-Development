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

PIDController::PIDController(double kp, double ki, double kd) {}

PIDController::~PIDController(){}

double PIDController::computeVelocity(double setPoint, double actualVelocity) {
  double output = 5;
  return output;
}