#include <iostream>

int f(int x, int y, int z)
{
    if (z == 0) throw -1;
    return (x + y) / z;
}

class vec2d_index_error
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
    else throw vec2d_index_error();
}
    

int main()
{
    try
    {
        std::cout << f(1, 2, 3) << '\n';
        //std::cout << f(1, 2, 0) << '\n';
        vec2d v(1.1, 2.2);
        std::cout << v[0] << '\n';
        std::cout << v[5] << '\n';
    }
    catch (int e)
    {
        std::cout << "just caught an exception. value " << e << '\n';
    }
    catch (vec2d_index_error & u)
    {
        std::cout << "just detected vec2d indexing error\n";
    }
    return 0;
}
