/**
 *  @copyright (c) 2022
 *  @file    PIDController.hpp
 *  @author  Guru Nandhan A D P (guruadp@umd.edu) (Driver) and Shail Kiritkumar
 * Shah (sshah115@umd.edu) (Navigator)
 *  @brief This file contains the initialization of variables and methods saved
 *  as header file
 *  @version 0.1
 *  @date 2022-10-01
 */

#ifndef INCLUDE_PIDCONTROLLER_HPP_
#define INCLUDE_PIDCONTROLLER_HPP_

#include <iostream>

class PIDController {

private:
  // Initializing kp, ki, kd constants to zero
  double kp = 0.0, ki = 0.0, kd = 0.0;

  // Initializing time sample
  double dt = 0.1, err_pre = 0.0, err_sum = 0.0;

public:
  // Constructor that assigns Kp, Ki and Kd proportional
  PIDController(double kp, double ki, double kd);

  //Destructor 
  ~PIDController();

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
