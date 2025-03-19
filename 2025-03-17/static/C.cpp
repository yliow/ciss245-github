#include "C.h"

int C::a_(42);
int C::b_(-1);

int C::get_a()
{
    return a_;
}

void C::set_a(int a)
{
    a_ = a;
}

