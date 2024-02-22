#include <iostream>

struct Node
{
    int key;
    Node * next;
};


int main()
{
    Node * p;
    Node * n = new Node;
    n->key = 5;
    n->next = NULL;
    p = n;

    n = new Node;
    n->key = 3;
    n->next = NULL;
    p->next = n;

    n = new Node;
    n->key = 0;
    n->next = NULL;
    p->next->next = n;

    
    return 0;
}
