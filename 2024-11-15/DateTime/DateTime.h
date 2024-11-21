#ifndef DATETIME_H
#define DATETIME_H

#include <iostream>
#include "Date.h"
#include "Time.h"

class DateTime
{
  public:
    DateTime(int, int, int, int, int, int);
    Date get_date() const;
    Time get_time() const;
    int yyyy() const;
    
  private:
    Date date_;
    Time time_;
};

std::ostream & operator<<(std::ostream &, const DateTime &);

#endif
