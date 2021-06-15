#include <iostream>
#include <cmath>

using namespace std;

/* Дана функция y=f(x). Найти значение функции по x:
        y = 3x - 7, если x > 1
        y = 3, если x = 1
        y = 3 * |x+2| - 7, если x < 1 */

int main()
{
    float x,y;
       cout << "Enter a number: ";
       cin >> x;

       if ( x > 1 ) {
           y = 3*x-7;
       } else if ( x == 1 ) {
           y = 3;
       } else {
           y = 3 * fabs(x+2) - 7;
       }

       cout << "Y: " << y << endl;
       return 0;

  }
