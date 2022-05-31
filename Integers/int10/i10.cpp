#include<iostream>

using namespace std;

int main(){
  int number, onesDigit, tensDigit;
  cout << "Enter a three-digit integer, \nnumber = ";
  cin >> number;

  onesDigit = number % 10;

  number = number / 10;

  tensDigit = number % 10;

  cout << "The ones digit: " << onesDigit << endl;
  cout << "The tens digit: " << tensDigit << endl;
  return 0;
}
