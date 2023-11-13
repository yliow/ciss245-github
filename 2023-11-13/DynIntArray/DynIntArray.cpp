#include <iostream>
#include "DynIntArray.h"

DynIntArray::DynIntArray(int size)
    : p_(new int[2 * size]), size_(size), capacity_(2 * size)
{
    for (int i = 0; i < size; ++i)
    {
        p_[i] = 0;
    }
}
