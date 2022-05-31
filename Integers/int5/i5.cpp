#include<iostream>

using namespace std;

int main(){

  // Integer5. Two positive integers A and B are given (A > B). Segment of length A
  // contains the greatest possible amount of inside segments of length B (without
  // overlaps). Find the length of unused part of the segment A. Use the operator of
  // taking the remainder after integer division.

  int A, B, a, b;
  cout << "Enter the two positive integers: A and B. \nA = ";
  cin >> A;
  cout << "\b B = ";
  cin >> B;

  b = A / B;
  a = A - b * B;

  cout << "The length of unused part of the segment A, a = " << a;
  cout << endl;
}
