#include "fanc.hpp"

namespace mk{
    void AddBack(Node* sent, int data){
        Node* p = new Node;
        p->data = data;
        p->next = sent;
        p->prev = sent->prev;
        sent->prev->next = p;
        sent->prev = p;
    }

    void Clear(Node* sent){
        Node* p = sent->next;
        while(p != sent){
            Node* tmp = p;
            p = p->next;
            delete tmp;
        }
    }

    void Print(Node* sent){
        Node* p = sent->next;
        std::cout << "{";
        while(p != sent){
            std::cout << p->data;
            p = p->next;
            if(p == sent){
                std::cout << "}";
                break;
            }
            std::cout << "; ";
        }
    }

    bool Proverka(Node* sent){
        Node* p = sent->next;
        int k = 0;
        while(p != sent){
            if((p->data % 10 == 2) || (p->data % 10 == 4))
                ++k;
            p = p->next;
        }
        if(k >= 3)
            return true;
        else
            return false;
    }

    void Sort1(Node* sent, int n){
        Node* p = sent->next;
        Node* q = sent->prev;
        for(int i = 0; i < n; ++i){
            q = sent->prev;
            for(int j = n; j > i + 1; --j){
                int x1 = p->data;
                int x2 = q->data;
                while(x1 > 9)
                    x1 = x1 / 10;
                while(x2 > 9)
                    x2 = x2 / 10;
                if(x1 < x2){
                    int k = p->data;
                    p->data = q->data;
                    q->data = k;
                }
                q = q->prev;
            }
            p = p->next;
        }     
    }

    void DeletePrime(Node* sent){
        Node* p = sent->next;
        while(p != sent){
            int x = p->data;
            bool flag = 1;
            if(x > 3){
                for(int i = 2; i * i <= x; ++i){
                    if(x % i == 0)
                        flag = 0;
                }
            }
            if(flag){
                Node* tmp = p;
                p->prev->next = p->next;
                p->next->prev = p->prev;
                p = p->prev;
                delete tmp;
            }
            p = p->next;
        }
    }

    void Duplicate10(Node* sent){
        Node* p = sent->next;
        while(p != sent){
            if(p->data % 10 == 0){
                Node* q = new Node;
                q->data = p->data;
                q->prev = p;
                q->next = p->next;
                p->next->prev = q;
                p->next = q;
                p = p->next;
            }
            p = p->next;
        }
    }
}