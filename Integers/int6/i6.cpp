#include<iostream>

using namespace std;

int main(){

  // Integer6. A two-digit integer is given. Output its left digit (a tens digit) and then its
  // right digit (a ones digit). Use the operator of integer division for obtaining the
  // tens digit and the operator of taking remainder for obtaining the ones digit

  int num, integer, remainder;
  cout << "Enter a two-digit integer, \nnum = ";
  cin >> num;
  integer = num / 10;
  remainder = num - integer * 10;

  cout << "The left digit (tens):" << integer << endl;
  cout << "The right digit(ones):" << remainder << endl;
}
