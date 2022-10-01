// #pragma once

#ifndef PIDCONTROLLER_HPP
#define PIDCONTROLLER_HPP

#include <iostream>

class PIDController {

private:
  // Initializing kp, ki, kd constants to zero
  double kp, ki, kd, dt = 0.0;

public:
  /**
   * @brief
   *
   * @param setPoint
   * @param actualVelocity
   *
   * @return postion as
   */

  void setParameters(double kp, double ki, double kd, double dt) {
    kp = kp;
    ki = ki;
    kd = kd;
    dt = dt;
  }

  float computeVelocity(float setPoint, float actualVelocity) {
    float newVelocity = 10;
    return newVelocity;
  }
};

#endif

