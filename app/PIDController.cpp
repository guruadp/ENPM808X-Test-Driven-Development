#include "../include/PIDController.hpp"
// #include <../include/PIDController.hpp>

PIDController::PIDController(double kp, double ki, double kd) {

  // kp, ki and kd are proportional constants
  double _kp = kp;
  double _ki = ki;
  double _kd = kd;
}

double PIDController::computeVelocity(double setPoint, double actualVelocity) {
  
  double err_pre = 0.0;
  double err = 0.0;
  return 10.0;
}