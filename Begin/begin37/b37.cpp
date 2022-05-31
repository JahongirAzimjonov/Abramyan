#include<iostream>

int main(void){

  // Begin37. The velocity of the first car is V1 km/h, the velocity of the second car is
  // V2 km/h, the initial distance between the cars is S km. Find the distance
  // between the cars after T hours provided that at the start time the distance is
  // decreasing. This distance is equal to an absolute value of a difference between
  // the initial distance and the total distance covered by the both cars.
  float V1, V2, T, S, S1, dS;

  std::cout << "Enter the velocity of car 1,\n V1 = ";
  std::cin >> V1;

  std::cout << "Enter the velocity of car 2,\n V2 = ";
  std::cin >> V2;

  std::cout << "Enter how much hours these two cars move to each other,\n T = ";
  std::cin >> T;

  std::cout << "Enter the initial distance between two cars ,\n S = ";
  std::cin >> S;

  S1 = (V1 + V2) * T;

  dS = S - S1;
  std::cout << "The distance dS between two cars after " << T << " hours is " << dS << '\n';
}
