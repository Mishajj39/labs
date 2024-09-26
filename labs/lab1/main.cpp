/*1) ���������� - ��� ����������� ������ ������.

2-4)�������������:
char - 1 ����, -128..127
short - 2 �����, -32768..32767
int - 4 �����, -2^31..2^31-1
long long - 8 ����, -2^63..2^63-1
unsigned int - 4 �����, 0..2^32-1

����������:
char - 1 ����, -128..127

������������ ����:
float - 4 �����, 6-7 ����
double - 8 ����, 15-16 ����

���������� ���:
bool - 1 ����, true/false*/

#include <iostream>
#include <iomanip>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);

    cout << "�������������:" << endl;
    cout << "char - 1 ����, -128..127" << endl;
    cout << "short - 2 �����, -32768..32767" << endl;
    cout << "int - 4 �����, -2^31..2^31-1" << endl;
    cout << "long long - 8 ����, -2^63..2^63-1" << endl;
    cout << "unsigned int - 4 �����, 0..2^32-1" << endl;
    cout << "����������:" << endl;
    cout << "char - 1 ����, -128..127" << endl;
    cout << "������������ ����:" << endl;
    cout << "float - 4 �����, 6-7 ����" << endl;
    cout << "double - 8 ����, 15-16 ����" << endl;
    cout << "���������� ���:" << endl;
    cout << "bool - 1 ����, true/false" << endl;
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