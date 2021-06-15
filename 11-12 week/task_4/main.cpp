#include <iostream>

using namespace std;

/* Имеется информация о роботах: габариты, вес, максимальная скорость. Вывести
данные о самом тяжёлом роботе. */

struct Dimensions {
    float width, height, length;
};

struct Sensor {
    Dimensions s;
    float weight;
    float speed;
}A, B;

int main()
{
    cout << "Enter the size of robot A(width, height, length) (use space): ";
    cin >> A.s.width >> A.s.height >> A.s.length;
    cout << "Enter the weight and speed of robot A(weight/speed) (use space): ";
    cin >> A.weight >> A.speed;

    cout << "Enter the size of robot B(width, height, length) (use space): ";
    cin >> B.s.width >> B.s.height >> B.s.length;
    cout << "Enter the weight and speed of robot B(weight/speed) (use space): ";
    cin >> B.weight >> B.speed;

    if (A.weight < B.weight) {
        cout << "Robot B heavier then robot A";
    }
    else cout << "Robot A heavier then robot B";
}


