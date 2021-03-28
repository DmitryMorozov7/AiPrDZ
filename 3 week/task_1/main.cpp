#include <iostream>
#include <fstream>
#include <string>

/*Вывести на экран Первую букву имени из символов "*" */

using namespace std;

int main()
{
    string path = "task_1.txt";
    ofstream outFile;
    outFile.open(path);

    outFile << "\t******\n";
    outFile << "\t*    *\n";
    outFile << "\t*    *\n";
    outFile << "\t*    *\n";
    outFile << "\t*    *\n";
    outFile << "     ************\n";
    outFile << "     *\t\t*\n";
    outFile.close();

    return 0;
}
