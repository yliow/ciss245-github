#include "IntArray.h"
#include <iostream>

IntArray::IntArray()
    : size_(0), capacity_(1024)
{}

IntArray::IntArray(int size)
    : size_(size), capacity_(1024)
{}
