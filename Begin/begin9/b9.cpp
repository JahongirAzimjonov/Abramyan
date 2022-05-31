#include <iostream>
#include <math.h>

using namespace std;

int main(void){

  // Begin09: Given two nonnegative numbers a and b, find their geometrical mean (a
  // square root of their product): (a·b)1/2 .
  int a, b;
  float geo_mean;

  cout << "Please enter non-negative numbers: a nd b.\n a = ";
  cin >> a;
  cout << " b = ";
  cin >> b;

  geo_mean = sqrt(a * b);

  cout << "Geometrical mean of the two numbers is " << geo_mean << endl;
}
