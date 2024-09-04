#include <iostream>

// void f(int x)
// {
//     std::cout << "f's x:" << x << '\n';
//     x = 42;
//     std::cout << "f's x:" << x << '\n';
// }

// void f(int & x)
// {
//     std::cout << "f's x:" << x << '\n';
//     x = 42;
//     std::cout << "f's x:" << x << '\n';
// }

// void inc(int x)
// {
//     ++x;
// }

// void inc(int & x)
// {
//     ++x;
// }

// void swap(int x, int y)
// {
//     int t = x;
//     x = y;
//     y = t;
// }

// void swap(int & x, int & y)
// {
//     int t = x;
//     x = y;
//     y = t;
// }


void print_fraction(int n, int d)
{
    std::cout << n << '/' << d;
}

void add_fraction(int xn, int xd,
                  int yn, int yd,
                  int & zn, int & zd)
{
    zn = xn * yd + xd * yn;
    zd = xd * yd;
}

int main()
{
    // int x = 0;
    
    // std::cout << "main's x:" << x << '\n';
    // f(x);
    // std::cout << "main's x:" << x << '\n';

    // inc(x);
    // std::cout << "x:" << x << '\n';

    // int y = 1;
    // std::cout << "x, y: " << x << ' ' << y << '\n';
    // swap(x, y);
    // std::cout << "x, y: " << x << ' ' << y << '\n';


    // print_fraction(1, 2);
    // std::cout << '\n';
    // print_fraction(3, 2);
    // std::cout << '\n';
    // print_fraction(0, 2);
    // std::cout << '\n';
    // print_fraction(-1, 2);
    // std::cout << '\n';    
    // print_fraction(-1, -2);
    // std::cout << '\n';

    int xn = 1, xd = 2;
    int yn = 2, yd = 3;
    int zn, zd;
    add_fraction(xn, xd,
                 yn, yd,
                 zn, zd);
    print_fraction(xn, xd);
    std::cout << " + ";
    print_fraction(yn, yd);
    std::cout << " = ";
    print_fraction(zn, zd);
    std::cout << '\n';

    std::cin >> xn >> xd >> yn >> yd;
    add_fraction(xn, xd,
                 yn, yd,
                 zn, zd);
    print_fraction(zn, zd);
    std::cout << '\n';
    
    return 0;
}
