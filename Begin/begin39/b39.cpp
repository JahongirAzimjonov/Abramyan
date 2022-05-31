#include<iostream>
#include<math.h>

int main(void){

  // Begin39. Solve a quadratic equation A·x^2 + B·x + C = 0 with the given coefficients A, B,
  // and C (A and the discriminant of the equation are positive). Output the smaller
  // equation root and then the larger one. Roots of the quadratic equation may be
  // found by formula x1,x2 = (−B ± D^(1/2))/(2·A), where D = B^2 − 4·A·C is a discriminant.
  float x1, x2, A, B, C, D;

  std::cout << "Enter the coefficientsof a quadratic equation: A, B, C.\n A = ";
  std::cin >> A;

  std::cout << "\n B = ";
  std::cin >> B;

  std::cout << "\n C = ";
  std::cin >> C;

  std::cout << "The entered quadratic equation is " << A << "x^2 + " << B << "x + " << C << " = 0\n";

  D = B * B - 4 * A * C;
  std::cout << "The discriminant of the given equation is " << D << std::endl;

  x1 = (-B + sqrt(D)) / (2 * A);
  x2 = (-B - sqrt(D)) / (2 * A);

  std::cout << "x1 = " << x1 << " and x2 = " << x2 << '\n';
}
