#include <iostream>
#include <cstdlib>
#include <ctime>

int die_roll();
char coin_toss();
char rand_dir();


int main()
{
    srand((unsigned int) time(NULL));

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

    for (int i = 0; i < 10; ++i)
    {
        std::cout << rand_dir() << ' ';
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
    return (rand() % 2 == 0 ? 'T' : 'H');
}

char rand_dir()
{
    int r = rand() % 4;
    switch (r)
    {
        case 0: return 'N';
        case 1: return 'S';
        case 2: return 'E';
        case 3: return 'W';
    }
}
