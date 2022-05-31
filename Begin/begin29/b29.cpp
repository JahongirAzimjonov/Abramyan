#include <iostream>

using namespace std;

int main(void){

  // Begin29. The angle value α in degrees (0 ≤ α < 360) is given. Convert this value into radians. Take into account that 180° = π radians. Use 3.14 for a value of π.

  float alpha, pi = 3.14, radians;

  cout << "Enter an angle,\n α = ";
  cin >> alpha;

  radians = pi * alpha / 180;
  cout << "The given angle, α = " << alpha << " is " << radians << " in radians \n";
}
