#include <iostream>
#include "header.h"
using namespace std;

void fswitch(double a, double b)
{
    char z;
    double c;
    cout << "Выберите операцию 1(+) 2(-) 3() 4(/)";
    cin >> z;
    switch (z)
    {
    case '1':   c = a + b;
        cout << "результат a + b = " << c << endl;
        break;

    case '2':   c = a - b;
        cout << "результат a - b = " << c << endl;
        break;

    case '3':   c = a b;
        cout << "результат a * b = " << c << endl;
        break;

    case '4':   c = a / b;
        cout << "результат a / b = " << c << endl;
        break;

    default:    cout << "Не верное значение.";
    }
}