#include "fanc.hpp"

int main(){  
    // 1.
    int cnt;
    string words[n_max];
    string words2[n_max];
    if(!Read(cnt, words))
        return -1;   
    CW(cnt, words);
    Alfabet(cnt, words, words2);
    Sort(cnt, words2);
    Write(cnt, words2);
    
    // 2.
    cout << '2' << endl;
    string words3[n_max2];
    string words4[n_max2];
    if(!Read2(cnt, words3))
        return -1;
    CW(cnt, words3);
    Prov(cnt, words3, words4);
    Write(cnt, words4);

    // 3.
    cout << '3' << endl;
    string words5[n_max2];
    string words6[n_max2];
    ofstream out("output.txt");
    if(!Read3(cnt, words5))
        return -1;
    BB(cnt, words5, words6);
    Write(cnt, words6);
    for(int i = 0; i < cnt; ++i){
        out << words6[i] << endl;
    }
    out.close();
    return 0;
}