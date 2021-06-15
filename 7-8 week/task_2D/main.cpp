#include <iostream>
#include <cmath>

using namespace std;

/* Протабулировать функцию (шаг и диапазон задаёт пользователь):
            y = (-3+x)^2 + 2x +5          */

int main()
{
    float st, min, max;
        cout << "Enter size of a step: ";
        cin >> st;
        cout << "Enter minimum and maximum function (use space): ";
        cin >> min >> max;

        cout << "        " << endl;
        cout << "x" << "        " << "y" << endl;

        while (max > min) {
            float y;
            y = (-3+min)*(-3+min) + 2*min + 5;
            cout << min << "        " << y << endl;
            min = min+st;
        }

        return 0;
    }
