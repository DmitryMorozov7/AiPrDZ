#include <iostream>
#include <cmath>

using namespace std;

/* Составить алгоритм определения суммарного объёма в литрах 12-ти вложенных
друг в друга шаров со стенками 5 мм. Внутренний диаметр внутреннего шара равен
10 см. Считать, что шары вкладываются друг в друга без зазоров. (Преобразуйте
задачу так, что численные значения вводит пользователь) */

int main()
{
    float r,v,i,t;

    cout << "Enter wall thickness: ";
    cin >> t;
    cout << "Enter radius: ";
    cin >> r;

    for ( float i=1; i <= 12; i++) {
        v = v + 4 * 3.14 / 3 * r*r * r;
        r = r + t;
    }
     cout << "Volume is equal to: " << v;

    return 0;
}
