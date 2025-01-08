#include <iostream>

void f0();
void f1();
void galaxian();

int main()
{
    //f0();
    //f1();
    galaxian();
    return 0;
}

void clear(char surface[10][10])
{
    for (int r = 0; r < 10; ++r)
    {
        for (int c = 0; c < 10; ++c)
        {
            surface[r][c] = ' ';
        }
    }
}

void draw(char surface[10][10])
{
    std::cout << "+----------+\n";
    for (int r = 0; r < 10; ++r)
    {
        std::cout << '|';
        for (int c = 0; c < 10; ++c)
        {
            std::cout << surface[r][c];
        }
        std::cout << "|\n";
    }
    std::cout << "+----------+\n";
}

void galaxian()
{
    // surface
    char surface[10][10];
    clear(surface);

    // aliens
    int alien_r = 0;
    int alien_c = 0;

    while (1)
    {
        // move objects
        alien_c += 1;
        
        // place all object in the surface
        surface[alien_r][alien_c] = 'v';
        draw(surface);

        std::cout << "l-left, r-right, f-fire, n-no input\n";
        char input;
        std::cin >> input;
    }
}

void f1()
{
    int n;
    std::cin >> n;
    for (int i = n; i > 0; --i)
    {
        // draw i stars
        for (int j = 0; j < i; ++j)
        {
            std::cout << '*';
        }
        std::cout << '\n';
    }
}

void f0()
{
    int n;
    std::cin >> n;

    for (int i = 0; i < n; ++i)
    {
        // if (i % 2 == 0)
        // {
        //     std::cout << '*';
        // }
        // else
        // {
        //     std::cout << '@';
        // }
        std::cout << (i % 2 == 0 ? '*' : '@');
    }
    std::cout << '\n';
}

