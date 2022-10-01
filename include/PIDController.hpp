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
  double kp, ki, kd, dt = 0.0;

public:
  /**
   * @brief Set the Parameters
   *
   * @param kp proportional constant
   * @param ki proportional constant
   * @param kd proportional constant
   * @param dt time constant
   */
  void setParameters(double kp, double ki, double kd, double dt) {
    kp = kp;
    ki = ki;
    kd = kd;
    dt = dt;
  }
  /**
   * @brief computing new velocity using PID controller
   *
   * @param setPoint
   * @param actualVelocity
   * @return float
   */
  float computeVelocity(float setPoint, float actualVelocity) {
    float newVelocity = 10;
    return newVelocity;
  }
};

#endif
