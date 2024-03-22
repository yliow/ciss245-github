#include <iostream>
#include "C.h"

int C::numobjects(0);

C::C(int i)
    : x(i)
{
    ++numobjects;
}

C::~C()
{
    std::cout << x << " ... dying\n";
    --numobjects;
}
