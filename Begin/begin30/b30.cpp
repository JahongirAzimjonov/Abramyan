#include<iostream>

int main(void){

  // Begin30. The angle value α in radians (0 ≤ α < 2·π) is given. Convert this value into degrees. Take into account that 180° = π radians. Use 3.14 for a value of π.
  float radians, degrees, pi = 3.14;

  std::cout << "Enter an angle in radians,\n rad = ";
  std::cin >> radians;

  degrees = radians * 180 / pi;
  std::cout << "The given angle (" << radians << " rad) is " << degrees << " in degrees\n";
}
