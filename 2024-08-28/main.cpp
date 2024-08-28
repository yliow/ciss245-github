#include <iostream>
#include <ctime>
#include <cstdlib>


int die_roll();


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
}


int die_roll()
{
    return rand() % 6 + 1;
}
