#include <iostream>
#include <cstdlib>

int die_roll();

int main()
{
    int seed;
    std::cin >> seed;
    srand(seed);

    for (int i = 0; i < 10; ++i)
    {
        std::cout << die_roll() << ' ';
    }
    std::cout << '\n';
    
    return 0;
}

int die_roll()
{
    return rand() % 6 + 1;
}
