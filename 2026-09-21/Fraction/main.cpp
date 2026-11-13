#include <iostream>

struct Fraction
{
    int n; // numerator
    int d; // denomintor
};

void Fraction_println(Fraction f)
{
    std::cout << f.n << '/' << f.d << '\n';
}

Fraction Fraction_sum(Fraction f, Fraction g)
{
    Fraction ret = {f.n * g.d + f.d * g.n, f.d * g.d};
    return ret;
}

int main()
{
    Fraction f0 = {1, 2};
    // f0.n = 1;
    // f0.d = 2;
    Fraction_println(f0);
    Fraction f1 = {1, 3};
    Fraction_println(f1);
    Fraction sum = Fraction_sum(f0, f1);
    Fraction_println(sum); 
    
    //Fraction f1;
    //Fraction sum;

    return 0;
}
