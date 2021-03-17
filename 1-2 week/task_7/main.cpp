#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float num, s, c;

    cout << "You enter one number, and the program outputs its square and cube:\n";
    cout << "Write number: ";
    cin >> num;
    s = num * num;
    cout << "Your Square: " << s << endl;
    c = num * num * num;
    cout << "Yuor Cube: " << c << endl;



    return 0;
}
