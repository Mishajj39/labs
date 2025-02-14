#pragma once
#include <iostream>

namespace mk{
    struct Node{
        int data;
        Node* next;;
    };

    void PushBack(Node* head, int value);
    void Print(Node* head);
    void Remove(Node* head, int index);
    void Clear(Node* head);
    void Make(Node*& head);
    bool Proverka(Node* head);
    void Remove246(Node* head);
    void Doble69(Node* head);
    void Sortid(Node* head, int n);
    int Index(Node* head, int x);
}