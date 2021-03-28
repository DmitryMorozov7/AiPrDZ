#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/* Пользователь вводит цены 1 кг конфет и 1 кг печенья. Найдите стоимость: а) одной
покупки из 300 г конфет и 400 г печенья; б) трех покупок, каждая из 2 кг печенья и
1 кг 800 г конфет. */

int main()
{
    string path = "task_13.txt";
    ofstream outFile;
    outFile.open(path);

    float a = 0,s = 0,c = 0, e1 = 0, e2 = 0;
    cin >> s;
    cin >> c;


    outFile << "Write the price of 1 kg of sweets and cookies^ \n";
    outFile << "Sweets: " << s << endl;
    outFile << "Cookies: " << c << endl;

    cin >> a;
    outFile << "For solve example a), press 1, for example b), press 2: " << a << endl;
    if (a == 1){
        e1 = (0.3*s)+(0.4*c);
        outFile << "Answer to 1 example:" << e1;
    }

    if (a == 2){
        e2 = 3*((2*s)+(1.8*c));
        outFile << "Answer to 2 exampl: " << e2;
    }

    return 0;
}
