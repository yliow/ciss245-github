#include <iostream>
#include "vec2.h"

int main()
{
    vec2< double > v0(0.1, 0.3);
    std::cout << v0 << '\n';
    
    vec2< int > v1(1, 42);
    std::cout << v1 << '\n';
    
    return 0;
}
