#include "fanc.hpp"

bool Read(int& cnt, string words[n_max]){
    ifstream in("input.txt");
    if(!in.is_open()){
        cerr << "File not found" << endl;
        return false;
    }
    cnt = 0;
    while(!in.eof()){
        in >> words[cnt];
        ++cnt;
    }        
    return true;
}

void Write(int cnt, string words[n_max]){
    for(int i = 0; i < cnt; ++i)
        cout << "<" << words[i] << ">" << endl;
}

void CW(int cnt, string words[n_max]){
    for(int i = 0; i < cnt; ++i)
        for(int j = 0; j < words[i].length(); ++j){
            if(!isalpha(words[i][j])){
                words[i].erase(j, 1);
                --j;
            }
        }
}

void Alfabet(int& cnt, string words[n_max], string words2[n_max]){
    int t = 0;
    for(int i = 0; i < cnt; ++i){
        int flag;
        flag = 1;
        char last_c = 'a'; // для хранения последней согласной 
        for(int j = 0; j < words[i].length(); ++j){
            char c = tolower(words[i][j]);
            if((c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'y' || c == 'u') || (last_c >= c)){
                flag = 0;
                break;
            }
            else
                last_c = c;
        }
        if(flag == 1){
            words2[t] = words[i];
            ++t;
        }
    }
    cnt = t;
}

void Sort(int& cnt, string words2[n_max]){
    for(int i = 0; i < cnt - 1; ++i)
        for(int j = i + 1; j < cnt; ++j){
            if(words2[i] < words2[j])
                swap(words2[i], words2[j]);  
            if(words2[i] == words2[j]){
                words2[j] = "";
            }
        }
    int k = 0;
    for(int i = 0; i < cnt - 1; ++i){
        if(words2[i] != "")
            ++k;
        else
            break;
    }
    cnt = k;
}

bool Read2(int& cnt, string words3[n_max2]){
    ifstream in("input2.txt");
    if(!in.is_open()){
        cerr << "File not found" << endl;
        return false;
    }
    cnt = 0;
    while(!in.eof()){
        in >> words3[cnt];
        ++cnt;
    }        
    return true;
}

void Prov(int& cnt, string words3[n_max2], string words4[n_max2]){
    int t = 0;
    for(int i = 0; i < cnt; ++i){
        int k;
        k = 0;
        for(int j = 0; j < words3[i].length(); ++j){
            char c = tolower(words3[i][j]);
            if(!(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'y' || c == 'u'))
                k += 1;
        }
        if(k > 3){ 
            int t = words3[i].length();
            std::string tmp;
            for(int j=0;j<t;j++){
                tmp = tmp + words3[i][j] + words3[i][j];
            }
            words3[i] = tmp;
        
            for(int j = 0; j < words3[i].length(); ++j){
                char c = tolower(words3[i][j]);
                if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'y' || c == 'u'){
                    words3[i].erase(j, 1);
                    --j;
                }    
            }
        }
        else{
            words4[t] = words3[i];
            ++t;
        }
    }
    sortStringsAlphabetically(words4, t);
    cnt = t;
}

void sortStringsAlphabetically(string arr[], int size){
    sort(arr, arr + size); // Сортируем массив строк по алфавиту
}

bool Read3(int& cnt, string words5[n_max2]){
    ifstream in("input3.txt");
    if(!in.is_open()){
        cerr << "File not found" << endl;
        return false;
    }
    cnt = 0;
    while(!in.eof()){
        getline(in, words5[cnt]);
        ++cnt;
    }        
    return true;
}

void BB(int& cnt, string words5[n_max2], string words6[n_max2]){
    int k = 0;
    char h;
    for(int i = 0; i < cnt; ++i){
        for(int j = 0; j < words5[i].length(); ++j){
            char c = tolower(words5[i][j]);
            char c2 = tolower(words5[i][j+1]);
            char t = c - 32;
            if((c == c2) && (c >= 'a' || c <= 'z')){
                words5[i][j] = t;
                words5[i][j+1] = t;
                k = 1;
                h = t;
            }   
            if(words5[i][j] == ' ' && k == 1){
                words6[i] += '(';
                words6[i] += h;
                words6[i] += ')';
                k = 0;
            }  
            words6[i] += words5[i][j];
            if(j == words5[i].length()-1 && k == 1){
                words6[i] += '(';
                words6[i] += h;
                words6[i] += ')';
                k = 0;
            }
        }
    }
}
