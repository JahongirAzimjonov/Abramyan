#include<iostream>

using namespace std;

int main(){

   // Begin3. The sides a and b of a rectangle are given. Find the area S = a·b and the
   // perimeter P = 2·(a + b) of the rectangle.

    int a, b, P, S;

    cout << "The sides 'a' and 'b' of a rectangle\n";

    cout<< "a = ";
    cin >>a;

    cout<< "b = ";
    cin >>b;

    P = 2 * (a + b);

    cout << "The perimeter of the rectangle: P = (a + b) * 2," << " P = " << P << endl;

    S = a * b;
    cout << "The area of the rectangle: S = a * b," << " S = " << S << endl;

    return 0;
}
