// Date.h

#ifndef DATE_H
#define DATE_H

#include <iostream>

class Date
{
  public: 
    Date();             // default constructor             
    Date(const Date &); // copy constructor
    Date(int yyyy, int mm, int dd = 1);
    void init(int yyyy, int mm, int dd);
    void println() const;
    void inc_day(int d);
    int get_year() const;
    int & get_year();
    int get_month() const;
    int get_day() const;
    
private:
    int yyyy_, mm_, dd_;
;
};

std::ostream & operator<<(std::ostream &, const Date &);
std::istream & operator>>(std::istream &, Date &);

#endif
