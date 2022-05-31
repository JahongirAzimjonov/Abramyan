#include<iostream>

int main(void){

  // Begin35. A boat velocity in still water is V km/h, river flow velocity is U km/h
  // (U < V). The boat goes along the lake during T1 h and then goes against stream
  // of the river during T2 h. Positive numbers V, U, T1 , T2 are given. Find the
  // distance S covered by the boat (distance = time · velocity).
  float V, U, T1, T2, S;

  std::cout << "Enter boat velocity in still water,\n V = ";
  std::cin >> V;

  std::cout << "Enter the flow velocity of river,\n U = ";
  std::cin >> U;

  std::cout << "Enter how much hours the boat goes on lake,\n T1 = ";
  std::cin >> T1;

  std::cout << "Enter how much hours the boat goes against the stream of the river,\n T2 = ";
  std::cin >> T2;

  S = V * T1 + (V - U) * T2;
  std::cout << "The distance S covered by the boat during " << T1 + T2 << " hours is " << S << '\n';
}
