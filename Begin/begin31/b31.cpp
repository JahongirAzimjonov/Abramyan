#include<iostream>

int main(void){

  // Begin31. A Fahrenheit temperature T is given. Convert it into a centigrade temperature. The centigrade temperature T_C and the Fahrenheit temperature T_F
  // are connected as: T_C = (T_F − 32)·5/9.
  float T_f, T_c;

  std::cout << "Enter temperature in Fahrenheit units,\n T_f = ";
  std::cin >> T_f;

  T_c = (T_f - 32) * 5 / 9;

  std::cout << "The given temperature in Fahrenheit (" << T_f << ") is " << T_c << '\n';
}
