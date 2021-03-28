#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/* Сделать конвертер величин. Температура (градусы, кельвины, фаренгейты) */

int main()
{
    float a,K = 0, C = 0, F = 0;

    string path = "task_9D.txt";
    ofstream outFile;
    outFile.open(path);

    cin >> a;
    outFile << "For the transfer temperature from Kelvin to Celsius/Fahrenheit, write number 1, from Celsius to Kelvin/Fahrenheit, write number 2, from Fahrenheit to Celsius/Kelvin, write number 3: " << a <<endl;

    if ( a == 1 ){
        cin >> K;
        outFile << "Write the temperature in Kelvin: " << K << endl ;
        F = (K*1.8)-469;
        C = K - 273;
        outFile << "Fahrenheit: " << F << endl;
        outFile << "Celsius: " << C;
    }

    if ( a == 2 ){
        cin >> C;
        outFile << "Write temperature in Celsius: " << C << endl;
//        cin >> C;
        K = C + 273;
        F = (C*1.8)+32;
        outFile << "Fahrenheit: " << F << endl;
        outFile << "Kelvin: " << K;
    }

    if ( a == 3 ){
        cin >> F;
        outFile << "Write temperature in Fahrenheit: " << F << endl;
//        cin >> F;
        C = (F-32)/1.8;
        K = (F+459)/1.8;
        outFile << "Celsius: " << C << endl;
        outFile << "Kelvin: " << K;
    }

    outFile.close();

    return 0;
}
