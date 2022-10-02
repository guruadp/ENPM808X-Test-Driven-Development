#include "../include/PIDController.hpp"

void PIDController::setParameters(double kp, double ki, double kd) {
  kp = kp;
  ki = ki;
  kd = kd;
}

double PIDController::computeVelocity(double setPoint, double actualVelocity) {
  double newVelocity = rand();
  return newVelocity;
}