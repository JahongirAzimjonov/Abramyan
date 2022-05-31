#include<iostream>

using namespace std;

int main(void){

  // Begin34. X kg of chocolates cost A euro and Y kg of sugar candies cost B euro
  // (positive numbers X, A, Y, B are given). Find the cost of 1 kg of the chocolates
  // and the cost of 1 kg of the sugar candies. Also determine how many times the
  // chocolates are more expensive than the sugar candies.
  float X, A, Y, B,  one_kg_price_Chocolates, one_kg_price_Candies, nAB;

  cout << "Enter the amount of chocolates in kg,\n X = ";
  cin >> X;

  cout << "Enter the price of chocolates in euros,\n A = ";
  cin >> A;

  cout << "Enter the amount of sugar candies in kg,\n Y = ";
  cin >> Y;

  cout << "Enter the price of candies in euros,\n B = ";
  cin >> B;

  one_kg_price_Chocolates = A / X;
  std::cout << "One kg of chocolates costs " << one_kg_price_Chocolates << " euros" << '\n';

  one_kg_price_Candies = B / Y;
  std::cout << "One kg of the candies costs " << one_kg_price_Candies << " euros" << '\n';

  nAB = one_kg_price_Chocolates / one_kg_price_Candies;
  cout << " Chocolates are " << nAB << " times more expensive than candies \n";
}
