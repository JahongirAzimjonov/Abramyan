#include<iostream>

using namespace std;

int main(void){

  // Begin08: Given two numbers a and b, find their average: (a + b)/2.
  float a, b;
  float avg;

  cout << "Please enter two (a and b) numbers:\n a = ";
  cin >> a;
  cout << " b = ";
  cin >> b;

  avg = (a + b) / 2;

  cout << "The average of the two numbers is " << avg << endl;
}
