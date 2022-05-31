#include<iostream>

int main(void){

  // Begin36. The velocity of the first car is V1 km/h, the velocity of the second car is
  // V2 km/h, the initial distance between the cars is S km. Find the distance
  // between the cars after T hours provided that the distance is increasing. The
  // required distance is equal to a sum of the initial distance and the total distance
  // covered by the both cars (total distance = time · total velocity).
  float V1, V2, T, S;

  std::cout << "Enter the velocity of car 1,\n V1 = ";
  std::cin >> V1;

  std::cout << "Enter the velocity of car 2,\n V2 = ";
  std::cin >> V2;

  std::cout << "Enter how much hours these two cars move in opposite directions,\n T = ";
  std::cin >> T;

  S = (V1 + V2) * T;
  std::cout << "The distance S between two cars after " << T << " hours is " << S << '\n';
}
