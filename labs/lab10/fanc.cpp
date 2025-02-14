#include "fanc.hpp"

namespace mk{

    void Make(Node*& head){
        head = new Node {0, nullptr};
    }

    void PushBack(Node* head, int value){
        Node* p = head;
        while(p->next != nullptr)
            p = p->next;
        
        Node* q = new Node;
        q->data = value;
        q->next = nullptr;
        p->next = q;
    }

    void Print(Node* head){
        Node* p = head->next;
        while(p != nullptr){
            std::cout << p->data << " ";
            p = p->next;
        }
    }

    bool Proverka(Node* head){
        Node* p = head->next;
        while(p->next != nullptr){
            if(p->data > p->next->data)
                return false;
            p = p->next;
        }
        return true;
    }

    void Clear(Node* head){
        Node* p = head;
        while(p->next != nullptr){
            Node* tmp = p;
            p = p->next;
            delete tmp;
        }
    }

    void Remove246(Node* head){
        Node* p = head;
        while(p->next != nullptr){
            int n = p->next->data;
            int k = 0;
            while(n > 0){
                if((n % 10 == 2) || (n % 10 == 4) || (n % 10 == 6))
                    ++k;
                n /= 10;
            }
            if(k < 1){
                Node* tmp = p->next;
                p->next = p->next->next;
                delete tmp;
            }
            else
                p = p->next;
            k = 0;
        }
    }

    void Doble69(Node* head){
        Node* p = head;
        while(p->next != nullptr){
            int n = p->next->data;
            int k = 0;
            while(n > 0){
                if((n % 10 == 6) || (n % 10 == 9))
                    ++k;
                n /= 10;
            }
            if(k > 0){
                Node* q = new Node;
                q->data = p->next->data;
                q->next = p->next->next;
                p->next->next = q;
                p = p->next;   
            }
                p = p->next;
        }
    }

    int Index(Node* head, int x){
        Node* p = head;
        p = p->next;
        for(int i = 0; i < x; ++i)
            p = p->next;
        return p->data;
    }

    void Sortid(Node* head, int n){
        Node* p = head;
        Node* q = head;
        int a = 0;
        int b = 0;
        
        for(int i = 0; i < n; ++i){
            q = p->next;
            a = p->next->data;
            for(int j = i + 1; j < n; ++j){
                b = q->next->data;
                if(a > b){
                    
                    /*Node* x = new Node;
                    Node* y = new Node;
                    
                    y->data = p->next->data;
                    x->data = q->next->data;

                    y->next = q->next->next;
                    x->next = p->next->next;*/

                    q->next->data = a;
                    p->next->data = b; 
                    a = b;
                    /*Node* del1 = p->next;
                    Node* del2 = q->next;
                    p->next = p->next->next;
                    q->next = q->next->next;
                    delete del1;
                    delete del2;*/
                }
                q = q->next;
            }
            p = p->next;
        }
    }
}