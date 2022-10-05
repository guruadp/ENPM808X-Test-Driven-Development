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
  PIDController controller(0.1, 0.01, 0.5);
  double setpointVelocity = 0;
  double actualVelocity = 0;

  std::cout<<"Enter the actual velocity: "<<std::endl;
  std::cin>>actualVelocity;
  std::cout<<"Enter the desired velocity"<<std::endl;
  std::cin>>setpointVelocity;

  for (int i = 0; i < 10; i++) {
    double newVelocity =
        controller.computeVelocity(setpointVelocity, actualVelocity);
    std::cout << "Actual : " << actualVelocity<< "   "
              << "New Velocity : " << newVelocity << std::endl;
    actualVelocity += newVelocity;
  }
  
  return 0;
}
