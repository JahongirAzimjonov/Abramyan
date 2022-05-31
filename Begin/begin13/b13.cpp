#include <iostream>
#include <math.h>

using namespace std;

int main(void){

  // Given the radiuses R1 and R2 of two concentric circles (R1 > R2), find the
  // areas S1 and S2 of the circles and the area S3 of the ring bounded by the circles
  // S1 = π·(R1)^2 ,  S2 = π·(R2)^2 , S3 = S1 − S2 . Use 3.14 for a value of π.

  float R1, R2, PI = 3.14;
  float S1, S2, S3;

  cout << "Enter radiusesof two circles, R1 and R2.\n R1 = ";
  cin >> R1;
  cout << "\n R2 = ";
  cin >> R2;

  S1 = PI * R1 * R1;

  S2 = PI * R2 * R2;

  S3  = S1 - S2;

  cout << "The area of the first circle, S1 = " << S1;
  cout << "\nThe area of the second circle, S2 = " << S2;
  cout << "\nThe area S3 of the ring bounded by the circles S1 and S2: " << S3 << endl;

  return 0;
}
