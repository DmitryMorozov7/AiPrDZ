#include <iostream>

using namespace std;

/* . Робот-автомобиль описывается как структура с полями: скорость, длительность
движения и номер. Напишите функцию для расчёта пройденного расстояния. */

struct Robot {
    float num;
    float time;
    float distance;
    float speed;
}rob;

float distance(Robot rob);

int main()
{
    cout << "Enter the number of robot: ";
    cin >> rob.num;
    cout << "Enter time: ";
    cin >> rob.time;
    cout << "Enter speed: ";
    cin >> rob.speed;
    cout << "Number: " << rob.num << endl;
    cout << "Time of move: " << rob.time << endl;
    cout << "Speed: " << rob.speed << endl;
    cout << "Distance = " << distance(rob) << endl;
}

float distance(Robot rob) {
    rob.distance = rob.time * rob.speed;
    return rob.distance;
}
