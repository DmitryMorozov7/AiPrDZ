#include <iostream>

using namespace std;

/*
Создайте структуру для хранения комплексных чисел. Структура должна иметь 2
атрибута: вещественную часть и мнимую. Объявите два числа и получите их
значения от пользователя:
d. Напишите функцию, которая будет складывать комплексные числа.
*/

struct Complex {
    float real;
    float imag;
};

int main()
{
    Complex num1;
    Complex num2;

    cout << "Enter the real and imaginary part of a complex number 1 (use space): ";
    cin >> num1.real >> num1.imag;

    cout << "Enter the real and imaginary part of a complex number 2 (use space): ";
    cin >> num2.real >> num2.imag;

    cout << "number 1 = " << num1.real << " + (" << num1.imag << "i)\n";
    cout << "number 2 = " << num2.real << " + (" << num2.imag << "i)\n";

    cout << "Amount = " << num1.real + num2.real << " + (" << num1.imag + num2.imag << "i)";

}
