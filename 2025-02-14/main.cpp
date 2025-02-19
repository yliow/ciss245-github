#include <iostream>

template < typename T >
void println(T x)
{
    std::cout << x << '\n';
}

template < typename T >
T max(T x, T y)
{
    return (x >= y ? x : y);
}

template < typename T >
void swap(T & x, T & y)
{
    T t = x;
    x = y;
    y = t;
}

struct vec2i
{
    int x, y;
};
void move(vec2i & p, const vec2i & change)
{
    p.x += change.x;
    p.y += change.y;
}

struct color
{
    int r, g, b;
};

struct Star
{
    vec2i p;
    int radius;
    color c;
    int dy;
};

int main()
{
    // println(1);
    // println(3.14);
    // println('c');

    // std::cout << max(2, 3) << '\n';
    // std::cout << max(2.2, 3.3) << '\n';

    // int a = 2, b = 0;
    // swap(a, b);
    // std::cout << a << ' ' << b << '\n';
    vec2i p0 = {1, 2};
    color red = {255, 0, 0};
    Star star = {p0, 2, red, 2};
    
    
    return 0;
}
