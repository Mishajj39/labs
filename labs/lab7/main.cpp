#include "fanc.hpp"
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "n = ";
    cin >> n;
    int a[mk::Max_n][mk::Max_n];
    mk::read(a, n);
    mk::sortid_st(a, n);
    mk::write(a, n);
    return 0;
}