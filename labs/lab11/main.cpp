#include "fanc.hpp"

int main(){
    mk::Node* sent = new mk::Node;
    sent->next = sent;
    sent->prev = sent;
    int n,m;
    std::cin >> n;
    for(int i = 0; i < n; ++i){
        std::cout << "array element number " << i << " = ";
        std::cin >> m;
        mk::AddBack(sent, m);
    }

    if(mk::Proverka(sent)){
        mk::Sort1(sent, n);
    }
    else{
        mk::DeletePrime(sent);
        mk::Duplicate10(sent);
    }

    mk::Print(sent);
    mk::Clear(sent);
    return 0;
}