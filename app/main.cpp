/**
 *  @copyright (c) 2022
 *  @file    main.cpp
 *  @author  Guru Nandhan A D P (guruadp@umd.edu) (Driver) and Shail Kiritkumar
 * Shah (sshah115@umd.edu) (Navigator)
 *  @brief PID controller for Test Driven Development
 *  @version 0.1
 *  @date 2022-10-01
 */

#include "PIDController.cpp"
#include <iostream>

using namespace std;
int main() {
  PIDController controller;
  controller.setParameters(0.1, 0.5, 0.01);
  float newVelocity = controller.computeVelocity(5, 15);
  std::cout << newVelocity;
  return 0;
}
