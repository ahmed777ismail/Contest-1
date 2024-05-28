#include <iostream>
using namespace std;



int main()
{
    long long x, y, z, v;
    cin >> x >> y >> z;
    if (x == 0 || z == 0) {
        cout << "0";

        return 0;
    }

    if (x == 1 || y == 1 || z == 1) {

        cout << "1";
        return 0;
    }

    if (x <= y && x <= z) {
        cout << x;

        return 0;

    }

    if (z <= x && z <= y) {

        cout << z;
        return 0;
    }

    if (y <= x && y <= z) {
        if (((x - y) / 2) <= (z - y)) {
            v = y + (abs(x - y) / 2);
            cout << v;
        }
        else {
            v = y + abs(z - y);
            cout << v;

        }

    }
}

