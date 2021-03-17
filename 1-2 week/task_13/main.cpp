#include <iostream>

using namespace std;

int main()
{
    float a = 0,s = 0,c = 0, e1 = 0, e2 = 0;
    cout << "Write the price of 1 kg of sweets and cookies^ \n";
    cout << "Sweets: ";
    cin >> s;
    cout << "Cookies: ";
    cin >> c;

    cout << "For solve example a), press 1, for example b), press 2: ";
    cin >> a;
    if (a == 1){
        e1 = (0.3*s)+(0.4*c);
        cout << "Answer to 1 example:" << e1;
    }

    if (a == 2){
        e2 = 3*((2*s)+(1.8*c));
        cout << "Answer to 2 exampl: " << e2;
    }






    return 0;
}
