#include<iostream>

using namespace std;

int main(){

    // Begin7. Given the radius R of a circle, find the length L of the circumference and the
    // area S of the circle:
    // L = 2·π·R,
    // S = π·R^2 .
    // Use 3.14 for a value of π.

    float R, pi = 3.14, L, S;

    cout << "Please enter the radius R of a circle\n";

    cout<< "R = ";
    cin >> R;

    L = 2 * pi * R;
    cout << "The circumference (length) of the circle: L = 2·π·R," << " L = " << L << endl;

    S = pi * R * R;
    cout << "The area of the circle: S = π·R^2," << " S = " << S << endl;

    return 0;
}
