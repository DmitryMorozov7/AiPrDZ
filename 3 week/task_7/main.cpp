#include <iostream>
#include <cmath>
#include <fstream>
#include <string>

using namespace std;

/* Пользователь вводит число. Выведите на экран квадрат этого числа, куб этого
числа */

int main()
{
    float num, s, c;

    string path = "task_7.txt";
    ofstream outFile;
    outFile.open(path);

    cin >> num;
    s = num * num;
    c = num * num * num;

    outFile << "You enter one number, and the program outputs its square and cube:\n";
    outFile << "Write number: " << num << endl;
    outFile << "Your Square: " << s << endl;
    outFile << "Yuor Cube: " << c << endl;
    outFile.close();

    return 0;
}
