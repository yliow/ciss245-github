#include <iostream>
#include "DateTime.h"

DateTime::DateTime(int yyyy, int month, int dd,
                   int hh, int min, int ss)
    : date_(yyyy, monthm dd), time_(hh, min, ss)
{}

std::ostream & operator<<(std::ostream & cout,
                          const DateTime & dt)
{
    return cout;
}
