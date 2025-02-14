#include <iostream>

// void f0(int x)
// {
//     x = 42;
// }
// void f1(int & x)
// {
//     x = 42;
// }
// void f2(int * x)
// {
//     *x = 42;
// }

// void my_new_0(int * p)
// {
//     p = new int;
// }
// void my_new_1(int *& p)
// {
//     p = new int;
// }
// void my_new_2(int ** p)
// {
//     *p = new int;
// }

struct Fraction
{
    int n;
    int d;
};

struct Circle
{
    int x, y, radius;
};

struct Star
{
    Circle c;
    int r, g, b, dy;
};

int main()
{
    // int x = 0;
    // std::cout << x << '\n';
    // f0(x); // want x = 42 ... fails
    // f1(x);
    // f2(&x);

    // int * p = NULL;
    // std::cout << p << '\n';
    // my_new_0(p); // p = new int;
    // std::cout << p << '\n';
    // my_new_1(p); 
    // std::cout << p << '\n';
    // my_new_2(&p); 
    // std::cout << p << '\n';

    Fraction f = {1, 2};
    std::cout << f.n << '/' << f.d << '\n';

    Fraction * p = new Fraction;
    p->n = 1; // (*p).n = 1;
    p->d = 2; // (*p).d = 2;

    Star star;
    star.r = 255;
    star.g = 255;
    star.b = 255;
    star.dy = 1;
    star.c.x = 0;
    star.c.y = 0;
    star.c.radius = 5;
    return 0;
}
