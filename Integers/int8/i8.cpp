#include<iostream>

using namespace std;

int main(){
  int num, integer, remainder;
  cout << "Enter a two-digit integer, \nnum = ";
  cin >> num;
  integer = num / 10;
  remainder = num - integer * 10;

  cout << "The left digit (tens):" << integer << endl;
  cout << "The right digit(ones):" << remainder << endl;

  int revTwoDigitNum = remainder * 10 + integer;
  cout << "The an integer obtained from the given one by exchange of its digits:"
    << revTwoDigitNum << endl;

}
