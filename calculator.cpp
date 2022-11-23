#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL,"Rus");
    double a,b,c;
    char z;
    cout << "Первое число: ";
    cin >> a;
    cout <<"Второе число: ";
    cin >> b;
    cout <<"Выберите операцию 1(+) 2(-) 3(*) 4(/)";
    cin >> z;
    switch (z)
    {
        case '1':   c=a+b;
                    break;
 
        case '2':   c=a-b;
                    break;
 
        case '3':   c=a*b;
                    break;
 
        case '4':   c=a/b;
                    break;
 
        default:    cout <<"Не верное значение."; 
    }
    cout << "результат: " << c << endl;
system("PAUSE");
}