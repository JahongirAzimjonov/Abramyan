#include<iostream>

int main(int argc, char const *argv[]){
  // Integer2. A weight M is given in kilograms. Find the amount of full tons of this
  // weight (1 ton = 1000 kg). Use the operator of integer division.
  int M_kg, M_ton;

  std::cout << "Enter a weight in kilogramms,\n M_kg = ";
  std::cin >> M_kg;

  M_ton = M_kg / 1000;
  std::cout << "The given weight (" << M_kg <<" kg) is " << M_ton << " tons \n";

  return 0;
}
