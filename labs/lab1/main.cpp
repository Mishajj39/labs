/*1) Переменная - это именованная ячейка памяти.

2-4)Целочисленные:
char - 1 байт, -128..127
short - 2 байта, -32768..32767
int - 4 байта, -2^31..2^31-1
long long - 8 байт, -2^63..2^63-1
unsigned int - 4 байта, 0..2^32-1

Символьные:
char - 1 байт, -128..127

Вещественные типы:
float - 4 байта, 6-7 цифр
double - 8 байт, 15-16 цифр

Логический тип:
bool - 1 байт, true/false*/

#include <iostream>
#include <iomanip>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);

    cout << "Целочисленные:" << endl;
    cout << "char - 1 байт, -128..127" << endl;
    cout << "short - 2 байта, -32768..32767" << endl;
    cout << "int - 4 байта, -2^31..2^31-1" << endl;
    cout << "long long - 8 байт, -2^63..2^63-1" << endl;
    cout << "unsigned int - 4 байта, 0..2^32-1" << endl;
    cout << "Символьные:" << endl;
    cout << "char - 1 байт, -128..127" << endl;
    cout << "Вещественные типы:" << endl;
    cout << "float - 4 байта, 6-7 цифр" << endl;
    cout << "double - 8 байт, 15-16 цифр" << endl;
    cout << "Логический тип:" << endl;
    cout << "bool - 1 байт, true/false" << endl;
    char a = 50;
    short b = 30000;
    int c = 100000;
    long long d = a + b + c;
    cout << d << endl;
    cout << a << endl;
    double a1 = 1.33333;
    double b1 = 3.3457345;
    double c1 = a1 + b1;
    cout << setprecision(15) << c1 << endl;

    return 0;
}