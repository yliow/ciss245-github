#include <iostream>

class F
{
public:
    double operator()(double) const;
private:
    
};

double F::operator()(double x) const
{
    return x * x;
}

double derivative(double x, double h = 0.0000000001)
{
    // derivative of x^2 at input x
    return ((x + h) * (x + h) - x * x) / h;
}

double D(const F & f, double x, double h = 0.0000000001)
{
    // derivative of f at input x
    return (f(x + h) - f(x)) / h;
}

int main()
{
    F f;
    std::cout << f(3) // f.operator()(3)
              << '\n';
    std::cout << derivative(2.0) << '\n';
    std::cout << D(f, 2.0) << '\n';
    return 0;
}
