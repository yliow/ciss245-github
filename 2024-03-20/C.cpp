#include "C.h"

C::C(int i)
    : x(i)
{}

int C::y(9999);
int C::z(-1);

int C::get_y()
{
    // no this pointer
    return y;
}
void C::set_y(int i)
{
    y = i;
}
int C::get_z()
{
    // no this pointer
    return z;
}
void C::set_z(int i)
{
    z = i;
}
