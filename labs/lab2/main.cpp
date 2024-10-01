#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double R;
    cin >> R;
    double pi = 3.141592653;
    double S = pi * R * 2;
    cout << "S = ";
    printf("%.9f", S);
    return 0;
}