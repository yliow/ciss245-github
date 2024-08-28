#include <iostream>
#include <ctime>
#include <cstdlib>


int die_roll();
char coin_toss();
char rand_dir();


int main()
{
    srand((unsigned int) time(NULL));

    // for (int i = 0; i < 10; ++i)
    // {
    //     std::cout << die_roll() << ' ';
    // }
    // std::cout << '\n';

    // for (int i = 0; i < 10; ++i)
    // {
    //     std::cout << coin_toss() << ' ';
    // }
    // std::cout << '\n';
    
    // for (int i = 0; i < 10; ++i)
    // {
    //     std::cout << rand_dir() << ' ';
    // }
    // std::cout << '\n';

    // 3 consecutive heads
    int count = 0; // int consecutive_heads = 0;
    while (1)
    {
        char c = coin_toss();
        std::cout << c << ' ';
        if (c == 'T')
        {
            count = 0;
        }
        else
        {
            ++count;
        }
        if (count == 3)
        {
            break;
        }
    }
    std::cout << '\n';
    
    return 0;
}


char coin_toss()
{
    // switch (rand() % 2)
    // {
    //     case 0:
    //         return 'H';
    //     case 1:
    //         return 'T';
    // }
    return (rand() % 2 == 0 ? 'H' : 'T');
}

char rand_dir()
{
    // switch (rand() % 4)
    // {
    //     case 0:
    //         return 'N';
    //     case 1:
    //         return 'S';
    //     case 2:
    //         return 'E';
    //     case 3:
    //         return 'W';
    // }
    // return '?';
    char dirs[] = {'N', 'S', 'E', 'W'};
    return dirs[rand() % 4];
}

int die_roll()
{
    return rand() % 6 + 1;
}
