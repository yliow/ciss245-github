#include <iostream>

int f(int x, int y, int z)
{
    if (z == 0)
    {
        throw 42;
    }
    if (x < 0)
    {
        throw 41.1;
    }
        
    return x + y / z;
}

int g(int x, int y, int z)
{
    return f(x, y, z);
}

class IndexError
{};

class vec2d
{
public:
    vec2d(double x, double y)
        : x_(x), y_(y)
    {}
    double operator[](int i);
private:
    double x_;
    double y_;
};

double vec2d::operator[](int i)
{
    if (i == 0) return x_;
    else return y_;
}

int main()
{
    try
    {
        std::cout << f(-1, 2, 3) << '\n';
        std::cout << f(1, 2, 0) << '\n';
    }
    catch (int i)
    {
        std::cout << "caught integer " << i << '\n';
    }
    catch (double x)
    {
        std::cout << "caught double " << x << '\n';
    }

    vec2d v(1, 2);
    std::cout << v[0] << '\n';
    std::cout << v[1] << '\n';
    std::cout << v[2] << '\n';
    return 0;
}
