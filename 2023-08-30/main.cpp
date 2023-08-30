#include <iostream>
#include <cstdlib>

int die_roll()
{
    return rand() % 6 + 1;
}

int main()
{
    int seed;
    std::cin >> seed;
    srand(seed);

    std::cout << die_roll() << '\n';
    
    return 0;
}
