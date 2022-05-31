#include<iostream>

int main(int argc, char const *argv[]){
  // Integer1. A distance L is given in centimeters. Find the amount of full meters of this
  // distance (1 m = 100 cm). Use the operator of integer division.
  int L_cm, L_m;

  std::cout << "Enter a distance in centimeters,\n L_cm = ";
  std::cin >> L_cm;

  L_m = L_cm / 100;
  std::cout << "The given distance (" << L_cm <<" cm) is " << L_m << " m \n";

  return 0;
}
