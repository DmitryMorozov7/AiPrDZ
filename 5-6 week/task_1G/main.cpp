#include <iostream>
#include <cmath>

using namespace std;

/* Дана функция y=f(x). Найти значение функции по x:
        y = (2+x)2 + 7, если x > -8
        y = 5, если x = -8
        y = |2 * x-1| - 1, если x < -8 */

int main()
{
    int x,y;
    cout << " Enter a number: ";
    cin >> x;

    if ( x > -8 ) {
        y = (2+x)*(2+x)+7;
    }  else if (x == -8) {
        y = 5;
    }  else  {
        y = fabs(2*x-1) - 1;
    }

    cout << " Y: " << y << endl;
    return 0;

}
