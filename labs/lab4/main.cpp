#include <iostream>

using namespace std;

int main()
{
    // 1.
    long long a;
    cin >> a;
    long long b;
    cin >> b;
    long long c;
    cin >> c;
    if(((a + b) % c == 0) && (c % b == 0))
    {
        cout << ((a + b) / c - c / b) << endl;
    }
    else if(((a + b) % c == 0) && (c % b != 0))
    {
        cout << ((a + b) / c + b * c) << endl;
    }
    else
    {
        cout << (a - b + c) << endl;
    }
    // 2.
    short n;
    cin >> n;
    switch(n)
    {
        case 0: cout << "Everything is fine" << endl;
            break;
        case 1: cout << "file read error" << endl;
            break;
        case 2: cout << "file write error" << endl;
            break;
        case 3: cout << "not all fields are defined" << endl;
            break;
        default: cout << "Unknown error";
    }
    short x;
    cin >> x;
    cout << (x == 1 ? "Positive number" : "Negative number");
    return 0;
}