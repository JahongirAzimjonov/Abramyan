#include<iostream>

using namespace std;

int main(void){
  int number;
  cout << "Enter a three-digit number, \n number = ";
  cin >> number;

  int onesDigit = number % 10;

  number = number / 10;

  int tensDigit = number % 10;

  int hunderdsDigit = number / 10;

  int sumOfDigits = onesDigit + tensDigit + hunderdsDigit;
  cout << " The sum of the digits of the given integer is " << sumOfDigits << "\n";

  int proOfDigits = onesDigit * tensDigit * hunderdsDigit;
  cout << "The product of the digits of the given integer is " << proOfDigits << "\n";
}
