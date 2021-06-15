#include <iostream>
#include <cmath>

using namespace std;

/* Протабулировать функцию (шаг и диапазон задаёт пользователь):
            Задание М        */

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
            y = sqrt(2 + 4*min*min) + 6*min + sinf(8*min + 11);
            cout << min << "        " << y << endl;
            min = min+st;
        }

        return 0;
    }
