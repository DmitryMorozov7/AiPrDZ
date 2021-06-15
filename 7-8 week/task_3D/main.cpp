#include <iostream>
#include <cmath>

using namespace std;

/* Пользователь задаёт число Ч и Х. Посчитать y: Задание d */

int main()
{
    float x, num;
        float y = 0;
        float numer = 2;
        float denom = 5;

        cout << "Enter an odd number: ";
        cin >> num;
        cout << "Enter x:";
        cin >> x;

        while ((denom + 2)*x <= num * x) {
                numer += 1;
                denom += 2;
                y += numer / (denom * x);
            }

        cout << "y = " << y;

    return 0;
}
