/**
 *  @copyright (c) 2022
 *  @file    PIDController.hpp
 *  @author  Guru Nandhan A D P (guruadp@umd.edu) (Driver) and Shail Kiritkumar
 * Shah (sshah115@umd.edu) (Navigator)
 *  @brief PID controller for Test Driven Development
 *  @version 0.1
 *  @date 2022-10-01
 */

#ifndef INCLUDE_PIDCONTROLLER_HPP_
#define INCLUDE_PIDCONTROLLER_HPP_

#include <iostream>

class PIDController {

private:
  // Initializing kp, ki, kd constants to zero
  double kp, ki, kd = 0.0;

  // Initializing time sample
  double dt = 0.1; 

public:

  PIDController(double kp, double ki, double kd);
  /**
   * @brief computing new velocity using PID controller
   *
   * @param setPoint
   * @param actualVelocity
   * @return double
   */
  double computeVelocity(double setPoint, double actualVelocity); 
};

#endif
