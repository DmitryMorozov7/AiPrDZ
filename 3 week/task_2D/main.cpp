#include <iostream>
#include <cmath>
#include <fstream>
#include <string>

using namespace std;

/* Пользователь вводит параметры фигуры. Найти периметр и площадь прямоугольного треугольника */

int main()
{
    float a,b,S;

    string path = "task_2D.txt";
    ofstream outFile;

    cin >> a;
    cin >> b;
    S = a * b / 2;

    outFile.open(path);
    outFile << "To find the S, write 2 kateta:\n";
    outFile << "Katet a = " << a << endl;
    outFile << "Katet b = " << b << endl;
    outFile << "S = " << S << endl;
    outFile.close();

    return 0;
}
