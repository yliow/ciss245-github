#include "C.h"

C::C(int x)
    : x_(x)
{
    ++num_objects;
}

C::~C()
{
    --num_objects;
}

int C::num_objects(0);
