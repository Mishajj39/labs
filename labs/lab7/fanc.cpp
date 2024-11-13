#include "fanc.hpp"
#include <iostream>
using namespace std;

namespace mk
{
    void read(int mas[Max_n][Max_n], int n){
        for(int i = 0; i < n; ++i)
            for(int j = 0; j < n; ++j){
                cout <<"mas[" << i << "][" << j << "] = ";
                cin >> mas[i][j];
            }
        return;
    }

    int min_el(int mas[Max_n][Max_n], int n){
        int k = mas[0][0];
        for(int i = 0; i < n; ++i)
            for(int j = 0; j < n; ++j){
                if(k > mas[i][j])
                    k = mas[i][j];
            }
        return k;
    }

    bool isPrime(int num){
        if (num < 2) return false;
        for(int i = 2; i * i <= num; ++i)
            if(num % i == 0) return false;
        return true;
    }

    /*void swap(int& a, int& b){
        int t = a;
        a = b;
        b = t;
        return;
    }*/

    int st(int a[Max_n], int n){
        int k = 1;
        for(int i = 0; i < n; ++i)
            k *= a[i];
        return k;
    }


    void sortid_st(int mas[Max_n][Max_n], int n){
        int k, t, p;
        t = 0;
        p = 0;
        k = min_el(mas, n);
        for(int i = 0; i < n; ++i)
            for(int j = 0; j < n; ++j){
                if(k == mas[i][j])
                    t += 1;
                if(abs(mas[i][j]) != k && isPrime(abs(mas[i][j])))
                    p += 1;
            }
        cout << t << "   " << p << endl;
        if(t == 2 && p >= 2)
            for(int i = 0; i < n; ++i)
                for(int j = i + 1; j < n; ++j){
                    cout << st(mas[i], n) << "  " << st(mas[j], n) << endl;
                    if(st(mas[i], n) < st(mas[j], n))
                        for(int k = 0; k < n; ++k)
                            swap(mas[i][k], mas[j][k]); 
                }     
        return;
    }

    void write(int mas[Max_n][Max_n], int n){
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < n; ++j)
                cout << mas[i][j] << " ";
            cout << endl;
        }    
        return;
    }
}