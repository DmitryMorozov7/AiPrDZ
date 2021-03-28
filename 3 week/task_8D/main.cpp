#include <iostream>
#include <cmath>
#include <fstream>
#include <string>

using namespace std;

/* Вычислите значение выражения, должен получится ответ: -1.76911 (проверено) */

int main()
{
    float x = -2.34;
    float E = (((abs(x-5))-sin(x))/3)+(sqrt(pow(x,2)+2014)*cos(2*x))-3;

    string path = "task_8D.txt";
    ofstream outFile;
    outFile.open(path);
    outFile << "Answer:" << E;
    outFile.close();

    return 0;
}
