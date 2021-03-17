#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float x = -2.34;

    cout << "Write x to calculate the example: " << x << endl;

    float E = (((abs(x-5))-sin(x))/3)+(sqrt(pow(x,2)+2014)*cos(2*x))-3;
    cout << "Answer:" << E;


    return 0;
}
