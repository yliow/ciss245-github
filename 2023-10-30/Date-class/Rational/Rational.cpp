// file: Rational.cpp

#include "Rational.h"

Rational::Rational()
    : n_(0), d_(1)
{}

Rational::Rational(int n, int d)
    : n_(n), d_(d)
{}

Rational::Rational(const Rational & r)
    : n_(r.n_), d_(r.d_)
{}

