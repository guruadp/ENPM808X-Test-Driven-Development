/**
 *  @copyright (c) 2022
 *  @file    PIDController.hpp
 *  @author  Guru Nandhan A D P (guruadp@umd.edu) (Driver) and Shail Kiritkumar
 * Shah (sshah115@umd.edu) (Navigator)
 *  @brief PID controller for Test Driven Development
 *  @version 0.1
 *  @date 2022-10-01
 */

#ifndef PIDCONTROLLER_HPP
#define PIDCONTROLLER_HPP

#include <iostream>

class PIDController {

private:
  // Initializing kp, ki, kd constants to zero
  double kp, ki, kd = 0.0;

  // Initializing time sample
  double dt = 0.1;

public:
  /**
   * @brief Set the Parameters
   *
   * @param kp proportional constant
   * @param ki proportional constant
   * @param kd proportional constant
   */
  void setParameters(double kp, double ki, double kd) {
    kp = kp;
    ki = ki;
    kd = kd;
  }
  /**
   * @brief computing new velocity using PID controller
   *
   * @param setPoint
   * @param actualVelocity
   * @return double
   */
  double computeVelocity(float setPoint, float actualVelocity) {
    double newVelocity = 10;
    return newVelocity;
  }
};

#endif
