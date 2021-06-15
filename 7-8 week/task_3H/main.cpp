#include <iostream>
#include <math.h>

using namespace std;

/* Пользователь задаёт число Ч и Х. Посчитать y: Задание h */

int main()
{
    float x, num;
    float y = 0;
    float numer = 1;
    float denom = 1;
    int fac = 0;

    cout << " Enter an odd number: ";
    cin >> num;
    cout << " Enter x: ";
    cin >> x;


    while (fac  <= num ) {
        fac += 1;
        numer = numer * x;
        denom = denom * fac;
        if (fac % 2 != 0) {
            y += numer / denom;
            y = y * (-1);
        }
    }

    cout << " y = " << y;
}
