#include<iostream>

int main(void){

  // Integer4. Two positive integers A and B are given (A > B).
  // Segment of length A contains the greatest possible amount of inside segments of length B (without overlaps).
  // Find the amount of segments B placed on the segment A. Use the operator of integer division.
  int A, B, B_in_A;
  std::cout << "Enter A and B (A > B),\n A = ";
  std::cin >> A;
  std::cout << "\n B = ";
  std::cin >> B;

  B_in_A = A / B;

  std::cout << "\n The number of greatest possible segments (of B) in A is " << B_in_A << std::endl;

  return 0;
}
