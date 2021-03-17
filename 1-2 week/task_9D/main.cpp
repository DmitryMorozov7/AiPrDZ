#include <iostream>

using namespace std;

int main()
{
    float a,K = 0, C = 0, F = 0;

    cout << "For the transfer temperature from Kelvin to Celsius/Fahrenheit, write number 1, from Celsius to Kelvin/Fahrenheit, write number 2, from Fahrenheit to Celsius/Kelvin, write number 3: \n";
    cin >> a;

    if ( a == 1 ){
        cout << "Write the temperature in Kelvin:" ;
        cin >> K;
        F = (K*1.8)-469;
        C = K - 273;
        cout << "Fahrenheit: " << F << endl;
        cout << "Celsius: " << C;
    }

    if ( a == 2 ){
        cout << "Write temperature in Celsius: ";
        cin >> C;
        K = C + 273;
        F = (C*1.8)+32;
        cout << "Fahrenheit: " << F << endl;
        cout << "Kelvin: " << K;
    }

    if ( a == 3 ){
        cout << "Write temperature in Fahrenheit: ";
        cin >> F;
        C = (F-32)/1.8;
        K = (F+459)/1.8;
        cout << "Celsius: " << C << endl;
        cout << "Kelvin: " << K;
    }

    return 0;
}
