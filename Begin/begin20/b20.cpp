#include<iostream>
#include<math.h>

using namespace std;

int main(void){
  // Begin20. The coordinates (x1 , y1 ) and (x2 , y2) of two points are given. Find the
  // distance between the points: ((x2 − x1 )^2 + (y2 − y1)^2 )^(1/2) .

  float x1, y1, x2, y2, distance;

  cout << "Enter the coordinates of two points,\n x1 = ";
  cin >> x1;

  cout << "\n y1 = ";
  cin >> y1;

  cout << "\n x2 = ";
  cin >> x2;

  cout << "\n y2 = ";
  cin >> y2;

  distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
  cout << "\n The distance between two points based on Euclidean equation, d = " << distance << " units.\n";

}
