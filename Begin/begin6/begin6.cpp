#include<iostream>

using namespace std;

int main(){

    // Begin6. The edges a, b, c of a right parallelepiped are given. Find the volume
    // V = a·b·c and the surface area S = 2·(a·b + b·c + a·c) of the right parallelepiped.

    float a, b, c, V, S;

    cout << "Please enter the edges a, b, c of a right parallelepiped\n";

    cout<< "a = ";
    cin >>a;

    cout<< "b = ";
    cin >>b;

    cout<< "c = ";
    cin >>c;

    S = 2 * (a * b + b * c + a * c);

    cout << "The area of the right parallelepiped: S = 2·(a·b + b·c + a·c)," << " S = " << S << endl;
    V = a * b * c;
    cout << "The volume of the right parallelepiped: V = a · b ·c," << " V = " << V << endl;

    return 0;
}
