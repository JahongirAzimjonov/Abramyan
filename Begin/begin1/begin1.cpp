#include<iostream>

using namespace std;

int main(){

    // Begin1. Given the side a of a square, find the perimeter P of the square: P = 4·a.

    int a, P;

    cout << "Please enter the side 'a' of a square a = ";
    cin >> a;

    P = 4 * a;
    cout << "The perimeter P of the square: P = 4·a," << " P = " << P << endl;

    return 0;
}
