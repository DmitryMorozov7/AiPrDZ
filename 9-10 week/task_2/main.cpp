#include <iostream>
#include <math.h>

using namespace std;

float fun1(float x);
float fun2(float x);

int main()
{
    float x, y;

    cout << "Enter x: ";
    cin >> x;
    cout << "x = " << x << endl;

    if (x > 1) {
        fun1(x);
    }
    if (x == 1) {
        y = 3;
        cout << "y = " << y;
    }
    if (x < 1) {
        fun2(x);
    }
}


float fun1(float x) {
    float y = 3 * x - 7;
    cout << "y=" << y;
    return y;
}

float fun2(float x) {
    float y = 3 * abs(x + 2) - 7;
    cout << "y = " << y;
    return y;
}
