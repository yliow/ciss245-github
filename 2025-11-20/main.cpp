#include <iostream>

class vec2d
{
public:
    vec2d();
    vec2d(double, double);
    double operator[](int) const;
private:
    double x_, y_;
};

double vec2d::operator[](int i) const
{
    if (i == 0) return x_;
    else if (i == 1) return y_;
    else return -999999999; // should not occur
}

std::ostream & operator<<(std::ostream &, const vec2d &);

vec2d::vec2d()
    : x_(0.0), y_(0.0)
{}

vec2d::vec2d(double x, double y)
    : x_(x), y_(y)
{}

std::ostream & operator<<(std::ostream & cout, const vec2d & v)
{
    cout << '<' << v[0] // v[0] same as v.operator[](0)
         << ", " << v[1] // v[1] same as v.operator[](1)
         << '>';
    return cout;
}

int main()
{
    vec2d v(2.5, 3.7);
    std::cout << "v: " << v << '\n';
    vec2d u[10];
    for (int i = 0; i < 10; ++i)
    {
        u[i] = vec2d(i, i);
    }
    for (int i = 0; i < 10; ++i)
    {
        std::cout << "u[" << i << "]: " << u[i] << '\n';
    }

    vec2d * w[10];
    for (int i = 0; i < 10; ++i)
    {
        w[i] = new vec2d(i, i);
    }
    for (int i = 0; i < 10; ++i)
    {
        std::cout << (*w[i]) << '\n';
    }
    for (int i = 0; i < 10; ++i)
    {
        delete w[i];
    }

    // int * p;
    // int s;
    // std::cin >> s;
    // p = new int[s];
    // int q[10];
    // delete [] p;

    // do not want to hardcode capacity of 10
    // want the array to be "dynamic"
    vec2d ** z;
    int t;
    std::cin >> t;
    z = new vec2d*[t];
    for (int i = 0; i < t; ++i)
    {
        z[i] = new vec2d(i, i);
    }
    for (int i = 0; i < t; ++i)
    {
        std::cout << (*z[i]) << '\n';
    }
    // z ......
    for (int i = 0; i < t; ++i)
    {
        delete z[i];
    }
    delete[] z;
    
    return 0;
}
