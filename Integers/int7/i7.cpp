#include<iostream>

using namespace std;

int main(){

  // Integer7. A two-digit integer is given. Find the sum and the product of its digits.

  int num, integer, remainder;
  cout << "Enter a two-digit integer, \nnum = ";
  cin >> num;
  integer = num / 10;
  remainder = num - integer * 10;

  cout << "The left digit (tens):" << integer << endl;
  cout << "The right digit(ones):" << remainder << endl;

  int sumOfDigits = integer + remainder;
  cout << "The sum of the digits: " << sumOfDigits << endl;

  int productOfDigits = integer * remainder;
  cout << "The product of the digits: " << productOfDigits << endl;
}
