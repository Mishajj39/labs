#include "fanc.hpp"

int main(){  
    mk::Node* head;
	mk::Make(head);
    int n,x;
    std::cout << "array lenght = ";
    std::cin >> n;
    for(int i = 0; i < n; ++i){
        std::cout << "array element number " << i << ": = ";
        std::cin >> x;
        mk::PushBack(head, x);
    }
    if(mk::Proverka(head)){
        mk::Remove246(head);
        mk::Doble69(head);
    }
    else
        mk::Sortid(head, n);
    mk::Print(head);
    mk::Clear(head);
    return 0;
}