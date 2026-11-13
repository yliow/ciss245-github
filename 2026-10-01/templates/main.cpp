#include <iostream>

int max(int x, int y) // max__int__int
{
    return (x >= y ? x : y);
}

double max(double x, double y) // max__double__double
{
    return (x >= y ? x : y);
}

char max(char x, char y) // max__char__char
{
    return (x >= y ? x : y);
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

// must be in the header file not cpp
template < typename T >
void swap(T & x, T & y) // T=int, T=double
{
    T t = x;
    x = y;
    y = t;
}

template < typename S, typename T >
S avg(const T & x, const T & y)
{
    return (x + y) / 2.0;
}

// vec2 template library

template < typename T >
struct vec2
{
    T x, y;
};

template < typename T >
vec2< T > get_vec2(const T & x, const T & y)
{
    vec2< T > ret = {x, y};
    return ret;
}

template < typename T >
vec2< T > operator+(const vec2< T > & u,
                    const vec2< T > & v)
{
    return get_vec2< T >(u.x + v.x, u.y + v.y);
}

template < typename T >
std::ostream & operator<<(std::ostream & cout,
                          const vec2< T > & v)
{
    cout << '<' << v.x << ", " << v.y << '>';
    return cout;
}

int main()
{
    vec2< double > u = get_vec2d(5, 2);
    vec2< double > v = get_vec2d(1, 3);
    std::cout << "u:" << u << '\n';
    std::cout << "v:" << v << '\n';
    std::cout << "u + v:" << u + v << '\n';
    
    // std::cout << max(3, 5) << '\n';
    // std::cout << max(3.3, 5.5) << '\n';

    // int i = 0, j = 1;
    // swap(i, j);
    // std::cout << i << ' ' << j << '\n';

    // double x = 1.1, y = 2.2;
    // swap(x, y);
    // std::cout << x << ' ' << x << '\n';

    // int i = 0, j = 1;
    // swap(i, j);
    // std::cout << i << ' ' << j << '\n';

    // double x = 1.1, y = 2.2;
    // swap(x, y);
    // std::cout << x << ' ' << y << '\n';

    // char c = 'a', d = '?';
    // swap(c, d);
    // std::cout << c << ' ' << d << '\n';

    return 0;
}
