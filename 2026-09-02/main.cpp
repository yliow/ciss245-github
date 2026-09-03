#include <iostream>
#include <cstdlib>
#include <ctime>

int die_roll()
{
    return rand() % 6 + 1;
}

char coin_toss()
{
    return (rand() % 2 == 0 ? 'H' : 'T');
}

char rand_dir()
{
    switch (rand() % 4)
    {
        case 0:
            return 'N';
        case 1:
            return 'S';
        case 2:
            return 'E';
        case 3:
            return 'W';
    }
    return '$';
}

int num_digits(int n)
{
    if (n == 0) return 1;
    else
    {
        int count = 0;
        while (n != 0)
        {
            n /= 10;
            ++count;
        }
        return count;
    }
}

int num_digits_rec(int n, int i = 0)
{
    if (n == 0 && i == 0)
        return 1;
    else if (n == 0)
        return i;
    else
        return num_digits_rec(n / 10, i + 1);
}

void print_divisors(int n)
{
    for (int d = 1; d <= n; ++d)
    {
        if (n % d == 0)
        {
            std::cout << d << ' ';
        }
    }
    std::cout << '\n';
}

int main()
{
    srand((unsigned int) time(NULL));
    int n;
    std::cin >> n;
    
    // for (int i = 0; i < n; ++i)
    // {
    //     //std::cout << die_roll() << ' ';
    //     //std::cout << coin_toss() << ' ';
    //     std::cout << rand_dir() << ' ';
    // }
    // std::cout << '\n';

    //std::cout << num_digits(n) << '\n';
    print_divisors(n);
    
    return 0;
}
