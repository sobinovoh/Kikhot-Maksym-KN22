#include <iostream>
#include <clocale>
#include <cmath>
#include "ModulesKikhot.h"

using namespace std;

string SoftDeveloper() {
    return "(c) Кіхоть Максим";
}

bool truth(int a, int b) {
    return  (a + 1 > abs(b - 2));
}

string DecHexFunc(int x, int y, int z) {
    cout << "В десятковiй: " << endl
         << "x = " << dec << x << endl
         << "y = " << dec << y << endl
         << "z = " << dec << z << endl << endl;
    cout << "В шiстнадцятковiй: " << endl
         << "x = " << hex << x << endl
         << "y = " << hex << y << endl
         << "z = " << hex << z << endl << endl;
    cout << endl << "Результат обчислення виразу: S = " << s_calculation(x, y, z) << endl;
    return "";
}


int main() {
    setlocale(LC_ALL, "");
    cout << SoftDeveloper() << endl << endl;

    int x, y, z;
    int a, b;

    cout << "Введiть x, y, z: ";
    cin >> x >> y >> z;
    cout << "Введiть числа 'a' та 'b': ";
    cin >> a >> b;

    cout << "Результат виразу: a + 1 > |b - 2| -> " << truth(a, b) << endl << endl;
    cout << DecHexSFunc(x, y, z);
    return 0;
}