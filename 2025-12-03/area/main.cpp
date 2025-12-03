#include <iostream>

class Shape
{
public:
    double area()
    {
        return 0.0;
    }
};

class Rect: public Shape
{
public:
    double area()
    {
        return w * h;
    }
    int w, h;
};

class Circle: public Shape
{
public:
    double area()
    {
        return 3.14159 * r * r;
    }
    double r;
};

int main()
{
    Rect r;
    r.w = 2;
    r.h = 3;
    std::cout << r.area() << '\n';

    Circle c;
    c.r = 5;
    std::cout << c.area() << '\n';
    return 0;
}
