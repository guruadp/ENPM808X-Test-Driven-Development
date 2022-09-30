/**
 *  @copyright (c) 2022 GuruNandhan
 *  @file    main.cpp
 *  @author  GuruNandhan
 *  @brief Test Driven Development
 *
 */

#include <iostream>

class PIDController {

private:
  int kp, ki, kd;

public:
  /**
   * @brief
   *
   * @param setPoint
   * @param actualVelocity
   *
   * @return postion as
   */

  float computeVelocity(float setPoint, float actualVelocity) {
    float newVelocity = 10;
    return newVelocity;
  }
};

int main() {
  PIDController controller;

  float newVelocity = controller.computeVelocity(5, 15);
  std::cout << newVelocity;
  return 0;
}
