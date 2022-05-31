#include <iostream>
#include <math.h>

using namespace std;

int main(void){

  // Begin10: Two nonzero numbers are given. Find the sum, the difference, the product,
  // and the quotient of their squares.
  int a, b, aa, bb;
  float sum_sq, diff_sq, prod_sq, quot_sq;

  cout << "Enter two non-zero numbers: a and b.\n a = ";
  cin >> a;
  cout << " b = ";
  cin >> b;

  aa = a * a;
  bb = b * b;

  sum_sq = aa + bb;
  cout << "The sum of two numbers' squares: " << sum_sq << endl;

  diff_sq = aa - bb;
  cout << "The difference of two numbers' squares: " << diff_sq << endl;

  prod_sq = aa * bb;
  cout << "The product of two numbers' squares: " << prod_sq << endl;

  quot_sq = aa / bb;
  cout << "The quotient of two numbers' squares: " << quot_sq << endl;
}
