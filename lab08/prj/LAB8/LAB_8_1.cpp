#include <iostream>
#include <cmath>
#include <windows.h>
#include "ModulesKikhot.h"

using namespace std;

int main()
{
    system("chcp 1251");
    system("cls");
    cout << "Завдання 8.1\n" << endl;
    double x, y, z;
    cout << "Введiть число x: ";
    cin >> x;
    cout << "Введiть число y: ";
    cin >> y;
    cout << "Введiть число z: ";
    cin >> z;
    double S = s_calculation(x, z);
    cout << "Число S: "<< S << endl;
    return 0;

    cout << "\nЗавдання 8.2.1\n" << endl;
    printAuthorTag();

    cout << "\nЗавдання 8.2.2\n" << endl;
    if ((a+b)>abs(b-2))
    {
        return true
    }
    else
    {
        return false
    }
    cout << "Завдання 8.2.3\n" << endl;
    cout << "x в десятковій: " << x << endl;
    cout << "x в шістнадцятковій: 0x" << hex << x << endl;
    cout << "y в десятковій: " << y << endl;
    cout << "y в шістнадцятковій: 0x" << hex << y << endl;
    cout << "z в десятковій: " << z << endl;
    cout << "z в шістнадцятковій: 0x" << hex << z << endl;
}
