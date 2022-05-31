#include <iostream>
#include <math.h>

using namespace std;

int main(void){

  //   Begin15. Given the area S of a circle, find the diameter D and the length L of the
  // circumference. Take into account that L = π·D, S = π·D^2 /4. Use 3.14 for a value of π.

  float S, D, L, pi = 3.14;

  cout << "Enter the area of a circle,\n S = ";
  cin >> S;

  D = sqrt(4 * S / pi);

  L = pi * D;

  cout << " \nThe diameter of the given circle, D = " << D;
  cout << " \nThe length of the given circle, L = " << L << endl;
}
