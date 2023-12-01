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

int C::get_num_objects()
{
    // there is no "this" pointer
    return num_objects;
}
