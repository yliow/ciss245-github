#include <iostream>
#include "C.h"

int C::num_objects(0);

C::C()
{
    ++num_objects;
}

C::~C()
{
    --num_objects;
}

int C::get_num_objects()
{
    
    return num_objects;
}
