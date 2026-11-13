#include <iostream>

void inc0(int x)
{
    ++x;
}
void inc1(int & x)
{
    ++x;
}
void inc2(int * p)
{
    ++(*p);
}
void swap0(int a, int b)
{
    int t = a;
    a = b;
    b = t;
}
void swap1(int & a, int & b)
{
    int t = a;
    a = b;
    b = t;
}
void swap2(int * p, int * q)
{
    int t = *p;
    *p = *q;
    *q = t;
}

int main()
{
    // int x;
    // x = 42;
    // std::cout << "val x:" << x
    //           << " addr x:"
    //           << (unsigned long long) &x
    //           << '\n';

    // double d = 3.14;
    // std::cout << d << ' ' << &d << '\n';
    // std::cout << sizeof(d) << '\n';

    // int x[3];
    // std::cout << (unsigned long long) &x[0]
    //           << ' ' << (unsigned long long) &x[1]
    //           << ' ' << (unsigned long long) &x[2]
    //           << '\n';

    // int x = 1;
    // int * p = &x;
    // //int & r = x;
    // std::cout << x << ' '
    //           << (unsigned long long) &x << ' '
    //           << (unsigned long long) p << '\n';

    // double y = 3.14;
    // double * q = &y;
    // std::cout << y << ' ' << &y << ' ' << q << '\n';

    // q = &x;

    // int x[] = {2, 3, 5, 7, 11, 13};
    // int * p = &x[4];
    // std::cout << &x[4] << ' '
    //           << p << '\n';

    // int x, y, z;
    // int *p = &x, *q = &y, *r = &z;

    // int * p = NULL; // zero address
    // std::cout << p << '\n';
    // int * q = nullptr;
    // std::cout << q << '\n';

    // int x = 42;
    // int * p;

    // p = &x;

    // std::cout << x << ' ' << (*p) << ' '
    //           << &x << ' ' << p << '\n';

    // x = 0;
    // std::cout << x << ' ' << (*p) << ' '
    //           << &x << ' ' << p << '\n';

    // *p = -3;
    // std::cout << x << ' ' << (*p) << ' '
    //           << &x << ' ' << p << '\n';

    int x = 0;
    std::cout << x << '\n';
    inc0(x);
    std::cout << x << '\n';
    inc1(x);
    // say &x = 5000
    std::cout << x << '\n';
    inc2(&x);
    std::cout << x << '\n';

    int a = 0, b = 1;
    // swap0(a, b);
    // std::cout << a << ' ' << b << '\n';
    // swap1(a, b);
    //std::cout << a << ' ' << b << '\n';
    swap2(&a, &b);
    std::cout << a << ' ' << b << '\n';
    
    return 0;
}
