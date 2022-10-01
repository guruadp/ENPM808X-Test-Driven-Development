/**
 *  @copyright (c) 2022 GuruNandhan
 *  @file    main.cpp
 *  @author  GuruNandhan
 *  @brief Test Driven Development
 *
 */

#include <iostream>
#include "../include/PIDController.hpp"


using namespace std;
int main() {
  PIDController controller;
  controller.setParameters(0.1, 0.5, 0.01, 0.1);
  float newVelocity = controller.computeVelocity(5, 15);
  std::cout << newVelocity;
  return 0;
}
