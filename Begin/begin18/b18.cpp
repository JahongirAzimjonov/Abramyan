#include<iostream>
#include<math.h>

using namespace std;

int main(void){

  // Begin18. Three points A, B, C are given on the real axis, the point C is located
  // between the points A and B. Find the product of the length of AC and the length of BC.
  float A, B, C;
  float AC, BC, AC_x_BC;

  cout << "Enter three points on the real axis:\n A = ";
  cin >> A;

  cout << "\n B = ";
  cin >> B;

  cout << "\n C (should be entered between A and B) = ";
  cin >> C;

  AC = abs(B - A);
  BC = abs(C - B);
  AC_x_BC = BC * AC;

  cout << "\n The length of AC is " << AC <<
    "\n The length of BC is " << BC
      << "\n The product of AC and BC is " << AC_x_BC << endl;
}
