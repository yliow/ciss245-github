#include <iostream>
#include <iomanip>
#include "DateTime.h"

void printDateTime(int yyyy, int mm, int dd,
                   int hour, int min, int sec)
{
    std::cout << std::setfill('0') << std::setw(4) << yyyy
              << '-'
              << std::setfill('0') << std::setw(2) << mm
              << '-'
              << std::setfill('0') << std::setw(2) << dd << ' '
              << std::setfill('0') << std::setw(2) << hour
              << ':'
              << std::setfill('0') << std::setw(2) << min
              << ':'
              << std::setfill('0') << std::setw(2) << sec
              << '\n';
}


