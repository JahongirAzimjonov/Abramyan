#include<iostream>

using namespace std;

int main(void){

  // Begin33. X kg of sweet cost A euro. Find the cost of 1 kg and Y kg of the sweets (positive numbers X, A, Y are given).

  float X, A, Y, one_kg_price;

  cout << "Enter the amount of sweet in kg,\n X = ";
  cin >> X;

  cout << "Enter the price of sweet in euros,\n A = ";
  cin >> A;

  one_kg_price = A / X;
  std::cout << "One kg of the sweet costs " << one_kg_price << " euro" << '\n';
}
