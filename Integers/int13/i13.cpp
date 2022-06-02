#include <iostream>
using namespace std;
 
int main() {
 
 int abc, bca;
 cout << "Enter a three digit number, \n abc = ";
 cin >> abc;
 cout << endl;
 
 bca = ((abc / 10) % 10) * 100 + (abc % 10) * 10 + abc / 100 ;
 cout << "Obtained number: " << bca << endl;
 }