#include "fanc.hpp"
#include <iostream>
using namespace std;

int main(){
    // 1.
    int n;
    cout << "n = "; 
    cin >> n;
    int mas1[N_max];
    read(mas1, n); 
    int k = 0;
    for(int i = 0; i < n; ++i){
        if(!isPrime(mas1[i]))
            k += 1;
        if(k == n)
            sortid_ub(mas1, n); 
    }
    for(int i = 0; i < n; ++i)
        cout << "a" << i << " = " << mas1[i] << endl;

    // 2.
    cout << "n = ";
    cin >> n;
    int mas2[N_max2];
    read(mas2, n);
    sortid_1(mas2, n);
    for(int i = 0; i < n; ++i)
        cout << "A" << i << " = " << mas2[i] << endl;
    
    // 3.
    int m;
    cout << "n = ";
    cin >> n;
    cout << "m = ";
    cin >> m;
    int mas3[N_max3][N_max3];
    read(mas3, n, m);
    min_st(mas3, n, m);
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j){
            cout << "A[" << i << "][" << j << "] = " << mas3[i][j] << endl;
        }
    // 4.
    cout << "n = ";
    cin >> n;
    int mas4[N_max];
    read(mas4, n);
    del(mas4, n);
    for(int i = 0; i < n; ++i)
        cout << "A[" << i << "] = " << mas4[i] << endl;
}