#include<iostream>

int main(void){

  // Begin32. A centigrade temperature T is given. Convert it into a Fahrenheit temperature. The centigrade temperature T_C and the Fahrenheit temperature T_F
  // are connected as: T_C = (T_F − 32)·5/9.

  float T_f, T_c;

  std::cout << "Enter temperature in centigrades units,\n T_c = ";
  std::cin >> T_c;

  T_f = 9  * T_c / 5  + 32;
  std::cout << "The given temperature in centigrades (" << T_c << ") is " << T_f << " F \n";
}
