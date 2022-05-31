#include<iostream>
#include<math.h>

using namespace std;

int main(void){
  //  Begin19. The coordinates (x1 , y1 ) and (x2 , y2 ) of two opposite vertices of a rectangle
  // are given. Sides of the rectangle are parallel to coordinate axes. Find the perimeter and the area of the rectangle.

  float x1, y1, x2, y2, side_a, side_b, Perimeter, Area;

  cout << "Enter the coordinates of two opposite vertices of a rectangle:\n x1 = ";
  cin >> x1;

  cout << "\n y1 = ";
  cin >> y1;

  cout << "\n x2 = ";
  cin >> x2;

  cout << "\n y2 = ";
  cin >> y2;

  side_a = abs(x2 - x1);
  side_b = abs(y2 - y1);

  Perimeter = 2 * (side_a + side_b);
  Area = side_a * side_b;

  cout << "\n The perimeter of the given rectangle,\n P = " << Perimeter <<
    "\n The Area of the rectangle,\n A = " << Area << endl;
}
