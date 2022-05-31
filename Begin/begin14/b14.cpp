#include <iostream>
#include <math.h>

using namespace std;

int main(void){

  //   Begin14. Given the length L of a circumference, find the radius R and the area S of
  //   the circle. Take into account that L = 2·π·R, S = π·R^2 . Use 3.14 for a value of π.

  float L, R, S, pi = 3.14;

  cout << "Enter the length of a circumference,\n L = ";
  cin >> L;

  R = L / (2 * pi);
  cout << "\n R = " << R << endl;

  S = pi * R * R;
  cout << "The area of the given circle, S = " << S << endl;

  return 0;
}
