#ifndef RATIONAL_H
#define RATIONAL_H

class Rational
{
  public:
    Rational();
    Rational(int, int);
    int get_n() const;
    int get_d() const;
  private:
    int n_, d_;
};

std::ostream & operator<<(std::ostream &, const Rational&);

#endif
