#include <iostream>
#include "IntDynArray.h"

IntDynArray::IntDynArray(int capacity)
    : p_(new int[capacity]), size_(0), capacity_(capacity)
{}
