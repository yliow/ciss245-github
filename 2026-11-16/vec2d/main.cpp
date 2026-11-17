#include <iostream>

class IndexError
{
public:
    IndexError(int index)
        : index_(index)
    {}
    int index_;
};

class vec2d
{
public:
    vec2d(double x, double y)
        : x_(x), y_(y)
    {}
    int operator[](int i)
    {
        if (i < 0 || i > 1) throw IndexError(i);
        
        if (i == 0) return x_;
        if (i == 1) return y_;
    }
private:
    double x_, y_;
};

int main()
{
    vec2d v(1, 2);
    try
    {
        std::cout << v[0] << '\n';
        std::cout << v[1] << '\n';
        std::cout << v[2] << '\n';
    }
    catch (IndexError & e)
    {
        std::cout << "IndexError for vec2d\n";
    }
    return 0;
}
