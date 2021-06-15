#include <iostream>
#include <cmath>


/* Напишите программу, которая принимает от пользователя координаты точки и
определяет, попала ли точка в заштрихованную область. */

using namespace std;

int main()
{
    float x,y;

    cout << " Enter x: " ;
    cin >> x;
    cout << " Enter y: " ;
    cin >> y;

    if ((-x >= y) && (y >= x*x-2) && (x >= y) ){
        cout << "To4ka popadaet";
    } else {
        cout << "To4ka ne popadaet";
    }

    return 0;
}
