#include<iostream>
#include<math.h>

using namespace std;

int main(void){

  // Begin17. Three points A, B, C are given on the real axis. Find the length of AC, the length of BC, and the sum of these lengths.
  float A, B, C;
  float AC, BC, AC_plus_BC;

  cout << "Enter three points on the real axis:\n A = ";
  cin >> A;

  cout << "\n B = ";
  cin >> B;

  cout << "\n C = ";
  cin >> C;

  AC = abs(B - A);
  BC = abs(C - B);
  AC_plus_BC = BC + AC;

  cout << "\n The length of AC is " << AC <<
    "\n The length of BC is " << BC
      << "\n The sum of AC and BC is " << AC_plus_BC << endl;
}
