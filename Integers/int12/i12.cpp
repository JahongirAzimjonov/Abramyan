#include<iostream>

using namespace std;

int main(void){
  int number;
  cout << "Enter a three-digit integer, \nnumber = ";
  cin >> number;

  int onesDigit = number % 10;

  number = number / 10;

  int tenDigit = number % 10;

  int hunderds_digit = number / 10;

  int reversedNumber = onesDigit * 100 + tenDigit * 10 + hunderds_digit * 1;

  cout << "The reversed number : " << reversedNumber << endl;

}
