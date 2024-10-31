#ifndef RATIONAL_H
#define RATIONAL_H

class Rational
{
  public:
    Rational();
    Rational(int, int);
    //Rational(const Rational &);
    int get_n() const;
    void set_n(int);
    int get_d() const;
    void set_d(int);
    Rational & operator+=(const Rational &);
    Rational operator+(const Rational &) const;
    Rational & operator-=(const Rational &);
    Rational operator-(const Rational &) const;
    void m();
  private:
    int n_, d_;
};

std::ostream & operator<<(std::ostream &, const Rational&);
std::istream & operator>>(std::istream &, Rational &);

#endif
