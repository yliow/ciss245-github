#include <iostream>
#include <cstdlib>

int die_roll();
char coin_toss();

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

    for (int i = 0; i < 10; ++i)
    {
        std::cout << coin_toss() << ' ';
    }
    std::cout << '\n';

    return 0;
}

int die_roll()
{
    return rand() % 6 + 1;
}

char coin_toss()
{
    int r = rand() % 2;
    if (r == 0)
    {
        return 'T';
    }
    else
    {
        return 'H';
    }
}
