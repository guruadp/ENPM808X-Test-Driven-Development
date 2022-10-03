/**
 *  @copyright (c) 2022
 *  @file    main.cpp
 *  @author  Guru Nandhan A D P (guruadp@umd.edu) (Driver) and Shail Kiritkumar
 * Shah (sshah115@umd.edu) (Navigator)
 *  @brief PID controller for Test Driven Development
 *  @version 0.1
 *  @date 2022-10-01
 */

#include <PIDController.hpp>
#include <iostream>

using namespace std;
int main() {
  PIDController controller(0.1, 0.5, 0.01);
  double velocity = 0;
  for (int i=0; i<50; i++){
    double newVelocity = controller.computeVelocity(velocity, 0);
  }
  return 0;
}
