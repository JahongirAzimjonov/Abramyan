#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  /* code */
  // cout << ' argc = ' << argc << "\n *argv[] = " << *argv<< "\n";

  // Begin28. Given a number A, compute a power A^15 using five multiplying operators
  // for computing A^2 , A^3 , A^5 , A^10 , A^15 sequentially. Output all obtained powers of the number A.

  int A, A2, A3, A5, A10, A15;

  cout << "Enter a value to A,\n A = ";
  cin >> A;

  A2 = A * A;
  cout << "\n A^2 = " << A2;

  A3 = A2 * A;
  cout << "\n A^3 = " << A3;

  A5 = A2 * A3;
  cout << "\n A^5 = " << A5;

  A10 = A5 * A5;
  cout << "\n A^10 = " << A10;

  A15 = A5 * A10;
  cout << "\n A^15 = " << A15 << "\n";

  return 0;
}
