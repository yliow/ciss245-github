#include <iostream>
#include "vec2.h"


struct box
{
    int key;
    box * next;
};

template < typename T, int size >
struct Array
{
    T a[size];
};


int main()
{
    vec2< int > v0 = vec2_get< int >(1, 2);
    std::cout << "v0: " << v0 << '\n';
    vec2< int > v1 = vec2_get< int >(3, 10);
    std::cout << "v1: " << v1 << '\n';
    
    std::cout << "v0 + v1: " << (v0 + v1) << '\n';
    std::cout << "v0[0]: "
              << get(v0, 0)
              << '\n';
    std::cout << "v0[1]: "
              << get(v0, 1)
              << '\n';


    box * p5 = new box;
    p5->key = 5;

    box * p2 = new box;
    p2->key = 2;

    box * p7 = new box;
    p7->key = 7;

    p5->next = p2;
    p2->next = p7;

    box * p = p5;
    while (p != NULL)
    {
        std::cout << p->key << ' ';
        p = p->next;
    }
    std::cout << '\n';

    Array< int, 5 > a;
    return 0;
}
