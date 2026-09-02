#include <iostream>
#include <cstdlib>
#include <ctime>

void print_stars(int n)
{
    for (int i = 0; i < n; ++i)
    {
        std::cout << '*';
    }
    std::cout << '\n';
}

void print_topleft_tri(int n)
{
    for (int num_stars = n; num_stars > 0; --num_stars)
    {
        print_stars(num_stars);
    }
}

int main()
{
    srand((unsigned int) time(NULL));
    
    // int n;
    // std::cin >> n;
    // print_topleft_tri(n);

    for (int i = 0; i < 10; ++i)
    {
        std::cout << rand() << ' ';
    }
    std::cout << '\n';
    
    return 0;
}
