#include <iostream>
#include "header.h"
using namespace std;

int main()
{
    double a, b;

    setlocale(LC_ALL, "Rus");
    cout << "Первое число: ";
    cin >> a;
    cout << "Второе число: ";
    cin >> b;
    fswitch(a, b);
    system("PAUSE");
}