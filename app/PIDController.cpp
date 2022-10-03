#include "../include/PIDController.hpp"
// #include <../include/PIDController.hpp>

PIDController::PIDController(double kp, double ki, double kd) {

  // kp, ki and kd are proportional constants
  kp = kp;
  ki = ki;
  kd = kd;
}

double PIDController::computeVelocity(double setPoint, double actualVelocity) {
  return 10.0;
}