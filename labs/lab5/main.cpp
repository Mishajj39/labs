#include <iostream>
using namespace std;
int main()
{
    // 1.
    int j, a, n, sum, max, num, sum1;
    cout << "j = ";
    cin >> j;
    sum = 0;
    num = 0;
    for(int i = 1; i <= j; ++i)
    {
        cout << "a" << i << " = ";
        cin >> a;
        if(i == 1)
            max = a;
        if((a % 10 == 0) || (a % 10 == 7))
        {
            sum += a;
            if(max <= a)
            {
                max = a;
                num = i;
            }
        }        
    }
    cout << "Sum 0 and 7 = " << sum << endl;
    cout << "Max 0 and 7 = " << max << endl;
    cout << "Num 0 and 7 = " << num << endl;
    
    // 2.
    sum1 = 0;
    cout << "N = ";
    cin >> n;
    while(n > 0)
    {
        if(n % 2 == 1)
        {
            sum1 += n % 10;
        }
    n /= 10;
    }
    cout << "Sum(n % 2 == 1) = " << sum1 << endl;
    return 0;
}