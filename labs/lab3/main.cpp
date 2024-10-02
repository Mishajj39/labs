#include <iostream>

using namespace std;

int main()
{
    long long x;
    cin >> x;
    int i;
    cin >> i;
    cout << (x | (1 << i)) << endl; 
    return 0;
}

