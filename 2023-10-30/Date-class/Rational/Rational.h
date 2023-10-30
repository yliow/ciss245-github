// file: Rational.h

#ifndef RATIONAL_H
#define RATIONAL_H

class Rational
{
  public:
    Rational();
    Rational(int n, int d);
    Rational(const Rational &);
  private:
    int n_, d_;
};

#endif
