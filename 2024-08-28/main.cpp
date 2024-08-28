#include <iostream>
#include <ctime>
#include <cstdlib>


int die_roll();
char coin_toss();


int main()
{
    srand((unsigned int) time(NULL));

    // for (int i = 0; i < 10; ++i)
    // {
    //     std::cout << die_roll() << ' ';
    // }
    // std::cout << '\n';

    for (int i = 0; i < 10; ++i)
    {
        std::cout << coin_toss() << ' ';
    }
    std::cout << '\n';

    return 0;
}


char coin_toss()
{
    int i = rand() % 2;
    if (i == 0)
    {
        return 'H';
    }
    else
    {
        return 'T';
    }
}


int die_roll()
{
    return rand() % 6 + 1;
}
