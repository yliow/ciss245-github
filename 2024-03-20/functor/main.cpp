#include <iostream>

class F
{
public:
    int operator()(int);
private:
    
};

int F::operator()(int x)
{
    return x * x;
}

double derivative(double x)
{
    // derivative of x^2 at input x
    double h = 0.0000000001;
    return ((x + h) * (x + h) - x * x) / h;
}

int main()
{
    F f;
    std::cout << f(3) // f.operator()(3)
              << '\n';
    std::cout << derivative(2.0) << '\n';
    return 0;
}
