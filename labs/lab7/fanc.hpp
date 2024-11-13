#pragma once

namespace mk
{
    const int Max_n = 100;

    void read(int a[Max_n][Max_n], int n);

    int min_el(int mas[Max_n][Max_n], int n);

    bool isPrime(int num);

    /*void swap(int a, int b);*/

    int st(int a[Max_n], int n);

    void sortid_st(int mas[Max_n][Max_n], int n);

    void write(int mas[Max_n][Max_n], int n);
}