#include <iostream>
#include <ctime>
#include <cstdlib>


int dieroll();
char cointoss();

int main()
{
    srand((unsigned int) time(NULL));

    for (int i = 0; i < 10; ++i)
    {
        std::cout <<  dieroll() << ' ';
    }
    std::cout << '\n';

    for (int i = 0; i < 10; ++i)
    {
        std::cout <<  cointoss() << ' ';
    }
    std::cout << '\n';

    return 0;
}


char cointoss()
{
    int r = rand() % 2;
    if (r == 0)
    {
        return 'H';
    }
    else
    {
        return 'T';
    }
}

int dieroll()
{
    return rand() % 6 + 1;
}

