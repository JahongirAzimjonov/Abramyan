#include<iostream>

int main(void){

  // Begin38. Solve a linear equation A·x + B = 0 with given coefficients A and B (A is not equal to 0).
  float A, x, B;

  std::cout << "Enter the coefficients A and B of a linear equation,\n A = ";
  std::cin >> A;

  std::cout << "\n B = ";
  std::cin >> B;

  x = -B / A;
  std::cout << "The root x of linear equation with the given " << A << " and " << B << " coefficients is " << x << '\n';
}
