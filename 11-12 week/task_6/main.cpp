#include <iostream>

using namespace std;

/* Имеется информация о датчиках: диапазон измеряемых значений (min, max),
погрешность, максимальная скорость. Вывести данные о самом точном датчике. */

struct Diapason {
    float min , max;
};

struct Sensor {
    Diapason d;
    float error;
    float speed;
}A,B;

int main()
{
    cout << "Enter the diapason of sensor A(min/max) (use space): ";
    cin >> A.d.min >> A.d.max;
    cout << "Enter the error and speed of sensor A(error/speed) (use space): ";
    cin >> A.error >> A.speed;

    cout << "Enter the diapason of sensor B(min/max) (use space): ";
    cin >> B.d.min >> B.d.max;
    cout << "Enter the error and speed of sensor B(error/speed) (use space): ";
    cin >> B.error >> B.speed;

    if (A.error < B.error) {
        cout << "Sensor A more exact then Sensor B";
    }
    else cout << "Sensor B more exact then Sensor A";

}
