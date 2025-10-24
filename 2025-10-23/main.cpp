#include <iostream>

// void println(int x)
// {
//     std::cout << x << '\n';
// }

// void println(double x)
// {
//     std::cout << x << '\n';
// }

// void println(char x)
// {
//     std::cout << x << '\n';
// }

template < typename T >
void println(T x)
{
    std::cout << x << '\n';
}

// void swap(int & x, int & y)
// {
//     int t = x;
//     x = y;
//     y = t;
// }
// void swap(double & x, double & y)
// {
//     double t = x;
//     x = y;
//     y = t;
// }

template < typename S >
void swap(S & x, S & y)
{
    S t = x;
    x = y;
    y = t;
}

template < typename T >
void bubblesort(T x[], int n)
{
    for (int i = n - 2; i >= 0; --i)
    {
        for (int j = 0; j <= i; ++j)
        {
            if (x[j] > x[j + 1])
            {
                swap< T >(x[j], x[j + 1]);
            }
        }
    }
}

// try all the array functions

// struct vec2d
// {
//     double x, y;
// };
// void println(const vec2d & v)
// {
//     std::cout << '<' << v.x << ", " << v.y << '>' << '\n';
// }

// struct vec2i
// {
//     int x, y;
// };
// void println(const vec2i & v)
// {
//     std::cout << '<' << v.x << ", " << v.y << '>' << '\n';
// }

template < typename T >
struct vec2
{
    T x, y;
};

template < typename T >
void println(const vec2< T > & v)
{
    std::cout << '<' << v.x << ", " << v.y << '>' << '\n';
}

template < typename T >
vec2< T > operator+(const vec2< T > & u, const vec2< T > & v)
{
    vec2< T > ret = {u.x + v.x, u.y + v.y};
    return ret;
}

int main()
{
    vec2< double > v = {1.1, 2.5};
    vec2< int > u = {2, 5};
    println< double >(v);
    println< int >(u);
    
    // int i = 42;
    // typedef int INTEGER;
    // INTEGER j = 42;

    // typedef int CARD; // 1 - 1, 2 - 2, ..., 9 - 9, J - 10, Q - 11, K - 12
    // CARD card0 = 5;

    // char x[4][10][10];
    // typedef char tetris_shape [4][10][10];
    // tetrais_shape T = {......};

    println< int >(3);
    println(4);
    println< double >(3.1415);
    println(2.417);
    println< char >('$');
    println('A');

    int x = 0, y = 1;
    swap< int >(x, y);
    std::cout << x << ' ' << y << '\n';
    double a = 0.1, b = 0.2;
    swap< double >(a, b);
    std::cout << a << ' ' << b << '\n';
    swap(a, b);
    std::cout << a << ' ' << b << '\n';
    
    return 0;
}
