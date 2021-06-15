#include <iostream>
#include <math.h>

using namespace std;

/*
Сделайте рефакторинг задач на проверку нахождения точки в закрашенной области
из предыдущего домашнего задания. В результате, вместо двух переменных,
описывающих координаты точки, должна быть одна переменная-структура с
атрибутами – координатами
*/

struct Coordinates {
    float x;
    float y;
};

int main()
{
    Coordinates point;
    cout << "Enter the coordinates of point (use space): ";
    cin >> point.x >> point.y;

    cout << "Point(" << point.x << ";" << point.y << ") ";
    if (((point.y > point.x * point.x - 2) && (point.y <= point.x) || (point.y > point.x * point.x - 2) && (point.y <= -point.x))) {
        cout << "Belongs to";
    }
    else {
        cout << "Doesn't belong to";
    }

}
