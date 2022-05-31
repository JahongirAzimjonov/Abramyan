#include <iostream>

int main(){

  // Begin25. Given an independent variable x, find the value of a function y = 3x^6 − 6x^2 − 7.

  float x, y;

  std::cout << "Enter any real number to x.\n x = ";
  std::cin >> x;

  float x2 = x * x;
  float x6 = x2 * x2 * x2;

  y = 3 * x6 - 6 * x2 - 7;
  std::cout << "\n The value of y(x) = 3x^6 − 6x^2 − 7,\n y = " << y << std::endl;

  return 0;
}
