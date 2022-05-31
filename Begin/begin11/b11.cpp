#include <iostream>
#include <math.h>

using namespace std;

int main(void){

  // Begin11: Two nonzero numbers are given. Find the sum, the difference, the product,
  // and the quotient of their absolute values.
  int a, b, a_abs, b_abs;
  float sum_sq, diff_sq, prod_sq, quot_sq;

  cout << "Enter two non-zero numbers: a and b.\n a = ";
  cin >> a;
  cout << " b = ";
  cin >> b;

  a_abs = abs(a);
  b_abs = abs(b);

  sum_sq = a_abs + b_abs;
  cout << "The sum of two numbers' absolute values: " << sum_sq << endl;

  diff_sq = a_abs - b_abs;
  cout << "The difference of two numbers' absolute values: " << diff_sq << endl;

  prod_sq = a_abs * b_abs;
  cout << "The product of two numbers' absolute values: " << prod_sq << endl;

  quot_sq = a_abs / b_abs;
  cout << "The quotient of two numbers' absolute values: " << quot_sq << endl;
}
