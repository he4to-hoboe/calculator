#include <iostream>
#include "header.h"
using namespace std;

int main()
{
    char choise;
    double a, b;
    setlocale(LC_ALL, "Rus");
    do {
         cout << "Первое число: ";
        cin >> a;
        cout << "Второе число: ";
        cin >> b;
        fswitch(a, b);
        cout << "Продоллжаем? Y-да, N-нет";
            cin >> choise;
    } while (choise == 'Y' || choise == 'y');
    system("PAUSE");
}
