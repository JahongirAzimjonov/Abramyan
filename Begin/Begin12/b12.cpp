#include<iostream>
#include<math.h>

using namespace std;

int main(){

  // The legs a and b of a right triangle are given. Find the hypotenuse c and the perimeter P of the triangle:
  // c = (a^2 + b^2 )^1/2 ,  P = a + b + c.

  float a, b, c, P;

  cout << "Enter two numbers and b. \n a = ";
  cin >> a;
  cout << "\n b = ";
  cin >> b;

  c = sqrt(a * a + b * b);

  P = a + b + c;

  cout << "The hypotenuse of the given triangle is " << c << endl;
  cout << "The perimeter of the traingle is " << P << endl;

  return 0;
}
