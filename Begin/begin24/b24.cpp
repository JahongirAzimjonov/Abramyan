#include<iostream>

using namespace std;

int main(void){

  // Begin24. Variables A, B, C are given. Change values of the variables by moving the
  // given value of A into the variable C, the given value of C into the variable B,
  // and the given value of B into the variable A. Output the new values of A, B, C.

  int A, B, C, temp;

  cout << "Enter any three numbers for A, B and C.\n A = ";
  cin >> A;

  cout << "\n B = ";
  cin >> B;

  cout << "\n C = ";
  cin >> C;

  cout << "The old values of A, B and C: " << A << ", " << B << " and " << C << endl;

  temp = A;
  A = B;
  B = C;
  C = temp;

  cout << "The new values of A, B and C: " << A << ", " << B << " and " << C << endl;
}
