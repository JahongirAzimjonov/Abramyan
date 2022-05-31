#include<iostream>

using namespace std;

int main(){

    // Begin4. Given the diameter d of a circle, find the length L of the circle: L = π·d. Use
    // 3.14 for a value of π.

    float d, pi = 3.14, L;

    cout << "Please enter the diameter d of a circle\n";

    cout<< "d = ";
    cin >>d;

    L = pi * d;
    cout << "The length of the circle: L = π * d," << " L = " << L << endl;

    return 0;
}
