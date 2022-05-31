#include <iostream>

int main(void){

  // Begin27. Given a number A, compute a power A8 using three multiplying operators for computing
  // A2 , A4 , A8 sequentially. Output all obtained powers of the number A.
  int A, A2, A4, A8;

  std::cout << "Enter a number for A,\n A = ";
  std::cin >> A;

  A2 = A * A;
  std::cout << " A^2 = " << A2 << std::endl;

  A4 = A2 * A2;
  std::cout << " A^4 = " << A4 << std::endl;

  A8 = A4 * A4;
  std::cout << " A^8 = " << A8 << std::endl;
}
