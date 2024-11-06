#include "fanc.hpp"
#include <iostream>
using namespace std;

void read(int mas[N_max], int& n){
    for(int i = 0; i < n; ++i){
        cout << "mas[" << i << "] = ";
        cin >> mas[i];
    }
    return;
}

void swap(int& a, int& b){
    int t = a;
    a = b;
    b = t;
    return;
} 

void sortid_ub(int mas[N_max],int& n){
    for(int i = 0; i < n - 1; ++i)
        for(int j = i + 1; j < n; ++j)
            if(mas[i] < mas[j])
                swap(mas[i], mas[j]);
    return;
}

void sortid_1(int mas[N_max2], int& n){
    for(int i = 0; i < n - 1; ++i)
        for(int j = i + 1; j < n; ++j){
            int t, t2, mini, minj, k, p, p2;
            p = 10;
            p2 = 0;
            t2 = mas[j];
            t = mas[i];
            mini = mas[i];
            minj = mas[j];
            while(t > 10)
                t = t / 10;
            while(t2 > 10)
                t2 = t2 / 10;
            while(mini > 0){
                k = mini % 10;
                mini = mini / 10;
                if(p > k);
                    p = k;
            }
            while(minj > 0){
                k = minj % 10;
                minj = minj / 10;
                if(p2 > k);
                    p2 = k;
            }
            if((t > t2) || ((t > t2) && (p > p2)) || ((t > t2) && (p > p2) && (mas[i] > mas[j])))
                swap(mas[i], mas[j]);    
        }
    return;
}

void read(int mas[N_max3][N_max3], int& n, int& m){
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j){
            cout << "mas[" << i << "][" << j << "] = ";
            cin >> mas[i][j];
        }
    return;
}

void min_st(int mas[N_max3][N_max3], int& n, int& m){
    int sum, min_sum, t;
    min_sum = 10000;
    for(int i = 0; i < n; ++i){
        sum = 0;
        for(int j = 0; j < m; ++j){
            sum += mas[i][j];
        }
        if(sum < min_sum){
            min_sum = sum;
            t = i;
        }
    }
    for(int i = 0; i < m; ++i)
        mas[t][i] = min_sum;
    return;
}

int coren(int k){
    int t = 1;
    while(k <= t * t)
        t += 1;
    return t;
}

void del(int mas[N_max], int n){
    int j = 0;
	for(int i=0;i<n;i++){
		if(isPalindrome(mas[i]))
			continue;
		mas[j] = mas[i];
		j++;
	}
    n = j;
    for(int i=0;i<n;i++)
		if(isPrime(mas[i])){
			for(int j=n;j>i;j--){
				mas[j] = mas[j-1];
			}
		i++;
		n++;
		
    return;
    }
}

bool isPalindrome(int num){
    int original = num, reversed = 0;
    while (num > 0){
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return original == reversed;
}

bool isPrime(int num){
    if (num < 2) return false;
    for (int i = 2; i * i <= num; ++i)
        if (num % i == 0) return false;
    return true;
}