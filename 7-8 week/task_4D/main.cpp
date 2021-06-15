#include <iostream>

using namespace std;

/* Вывести на экран ряд натуральных чисел от Н до М с шагом Ш. Например, если
 Н = 10, М = 35, Ш = 5, то вывод должен быть таким : 10 15 20 25 30 35. Значения Н, М,
 Ш указываются пользователем(считываются с клавиатуры или из файла) */

int main()
{
        int begin, end, st;
        cout << "Enter begin: ";
        cin >> begin;
        cout << "Enter end: ";
        cin >> end;
        cout << "Enter step: ";
        cin >> st;
        cout << "Answer: ";

        while (end >= begin) {
            cout << begin << "  ";
            begin = begin + st;
    }
        return 0;
 }


