#include<iostream>

int main(void){

  // Begin40. Solve a system of linear equations
  // A1 ·x + B1 ·y = C1
  // A2 ·x + B2 ·y = C2
  // with given coefficients A1, B1, C1, A2, B2, C2 provided that the system has the only solution.
  // Use the following formulas: x = (C1 ·B2 − C2 ·B1)/D, y = (A1 ·C2 − A2 ·C1)/D, where D = A1 ·B2 − A2 ·B1.
  float A1, B1, C1, A2, B2, C2, x, y, D;

  std::cout << "Enter the coefficients of a system of linear equations,\n A1 = ";
  std::cin >> A1;

  std::cout << "\n B1 = ";
  std::cin >> B1;

  std::cout << "\n C1 = ";
  std::cin >> C1;

  std::cout << "\n A2 = ";
  std::cin >> A2;

  std::cout << "\n B2 = ";
  std::cin >> B2;

  std::cout << "\n C2 = ";
  std::cin >> C2;

  // D = A1 * B2 - A2 * B1;

  // x = (C1 * B2 - C2 * B1) / D;
  x = (C1 * (1 - B1 - B2) + C2) / (A1 * (1 - B1 - B2) + A2);
  std::cout << "\n The root x = " << x;

  // y = (A1 * C2 - A2 * C1) / D;
  y = C1 - A1 * x;
  std::cout << "\n The root y = " << y << '\n';
}
