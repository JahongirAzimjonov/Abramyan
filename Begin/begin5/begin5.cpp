#include<iostream>

using namespace std;

int main(){

    // Begin5. Given the edge e of a cube, find the volume V = e^3 and the surface
    // area S = 6·e^2 of the cube.

    float e, V, S;

    cout << "Please enter the edge e of a cube\n";

    cout<< "e = ";
    cin >>e;

    S = 6 * e * e;
    cout << "The area of the cube: S = 6 * e * e," << " S = " << S << endl;

    V = e * e * e;
    cout << "The volume of the cube: V = e ^ 3," << " V = " << V << endl;

    return 0;
}
