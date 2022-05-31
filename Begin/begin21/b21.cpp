#include<iostream>
#include<math.h>

using namespace std;

int main(void){
  // Begin21. The coordinates (x1 , y1 ), (x2 , y2 ), (x3 , y3 ) of the triangle vertices are given.
  // Find the perimeter and the area of the triangle using the formula for distance between two points
  // in the plane (see Begin20). The area of a triangle with sides a, b, c can be found by Heron’s formula:
  // S = (p·(p − a)·(p − b)·(p − c))^(1/2) , where p = (a + b + c)/2 is the half-perimeter.

  float x1, y1, x2, y2, x3, y3;
  float side_a, side_b, side_c, P_half, S;

  cout << "Enter the coordinates of three points,\n x1 = ";
  cin >> x1;

  cout << "\n y1 = ";
  cin >> y1;

  cout << "\n x2 = ";
  cin >> x2;

  cout << "\n y2 = ";
  cin >> y2;

  cout << "\n x3 = ";
  cin >> x3;

  cout << "\n y3 = ";
  cin >> y3;

  side_a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
  cout << "\n The side a of the triangle, side_a = " << side_a << " units.\n";

  side_b = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
  cout << " The side b of the triangle, side_b = " << side_b << " units.\n";

  side_c = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
  cout << " The side c of the triangle, side_c = " << side_c << " units.\n";

  P_half = (side_a + side_b + side_c) / 2;
  cout << " The half perimeter of the triangle, P_half = " << P_half << " units.\n";;

  S = sqrt(P_half * (P_half - side_a) * (P_half - side_b) * (P_half - side_c));
  cout << " The area of the triangle, which was calculated based on the Heron formula, S = " << S << " square units.\n";
}
