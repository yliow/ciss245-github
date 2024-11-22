#include <iostream>

class IndexError
{};

class vec2d
{
public:
    vec2d(double, double);
    double operator[](int) const;
private:
    double x_, y_;
};

vec2d::vec2d(double x, double y)
    : x_(x), y_(y)
{}

double vec2d::operator[](int i) const
{
    if (i == 0) return x_;
    else if (i == 1) return y_;
    throw IndexError();
}

std::ostream & operator<<(std::ostream & cout, const vec2d & v)
{
    cout << '<' << v[0] << ", " << v[1] << '>';
    return cout;
}

int main()
{
    vec2d v(1.1, 2.2);
    std::cout << "v:" << v << '\n';

    return 0;
}
