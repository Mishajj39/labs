#pragma once
#include <iostream>

namespace mk{
    struct Node{
        int data;
        Node* prev;
        Node* next;
    };
    void AddBack(Node* sent, int data);
    void Clear(Node* sent);
    void Print(Node* sent);
    bool Proverka(Node* sent);
    void Sort1(Node* sent, int n);
    void DeletePrime(Node* sent);
    void Duplicate10(Node* sent);
}