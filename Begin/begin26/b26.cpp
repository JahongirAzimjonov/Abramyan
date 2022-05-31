#include<iostream>

int main(){

  // Begin26. Given an independent variable x, find the value of a function y = 4(x−3)^6 − 7(x−3)^3 + 2.
  float x, y, x_3, x_3_3;

  std::cout << "Enter variable x,\n x = ";
  std::cin >> x;

  x_3 = x - 3;

  x_3_3 = x_3 * x_3 * x_3;

  y = 4 * x_3_3 * x_3_3 - 7 * x_3_3 + 2;

  std::cout << "The value of the given function y(x) = 4(x−3)^6 − 7(x−3)^3 + 2,\n y(" << x << ") = " << y << "\n";

  return 0;
}
