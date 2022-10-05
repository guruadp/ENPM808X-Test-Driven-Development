/**
 *  @copyright (c) 2022
 *  @file    main.cpp
 *  @author  Guru Nandhan A D P (guruadp@umd.edu) (Driver) and Shail Kiritkumar
 * Shah (sshah115@umd.edu) (Navigator)
 *  @brief Interface for inputting user defined velocity inputs and printing-
 *  output in the form of new velocity by calling its function.
 *  @version 0.1
 *  @date 2022-10-01
 */

#include <iostream>
#include "../include/PIDController.hpp"

int main() {
  PIDController controller(0.1, 0.5, 0.01);
  double setpointVelocity = 0;
  double actualVelocity = 0;

  std::cout << "Enter the actual velocity: " << std::endl;
  std::cin >> actualVelocity;
  std::cout << "Enter the desired velocity" << std::endl;
  std::cin >> setpointVelocity;

  for (int i = 0; i < 10; i++) {
    double newVelocity =
        controller.computeVelocity(setpointVelocity, actualVelocity);
    std::cout << "Actual Velocity: " << actualVelocity << "   "
              << "New Velocity : " << newVelocity << std::endl;
    actualVelocity = newVelocity;
  }

  return 0;
}
