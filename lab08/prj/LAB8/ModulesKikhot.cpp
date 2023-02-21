#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

void printAuthorTag()
{
   system("chcp 1251");
   system("cls");
    cout << "Kikhot Maksym\\CNTU\n\xA9 All Rights Reserved" << endl;
}

double s_calculation(double x, double z)
{
     double S = pow((3*sin(sqrt((12*pow(x,2)/log10(x-3))))),2)+(1/2)*z;
     return S;
}
