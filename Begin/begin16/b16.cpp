#include <iostream>
#include <math.h>

using namespace std;

int main(){

    // Begin16. Two points with the coordinates x1 and x2 are given on the real axis. Find
    // the distance between these points: |x2 − x1 |.

    float x1, x2, distance;

    cout << "Enter the coordinates, x1 and x2.\n x1 = ";
    cin >> x1;

    cout << " \nx2 = ";
    cin >> x2;

    distance = abs(x2 - x1);
    cout << "Distance between the coordinates x2 and x1, dist = " << distance << endl;

    return 0;
}
