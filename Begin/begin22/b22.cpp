#include<iostream>

using namespace std;

int main(void){

  // Begin22. Exchange the values of two given variables A and B. Output the new values of A and B.
  int A, B, temp;

  cout << "Enter any two numbers for A and B.\n A = ";
  cin >> A;

  cout << "\n B = ";
  cin >> B;

  cout << "The old values of A and B: " << A << " and " << B << endl;

  temp = A;
  A = B;
  B = temp;

  cout << "The new values of A and B: " << A << " and " << B << endl;
}
