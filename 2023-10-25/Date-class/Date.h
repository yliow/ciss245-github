// Date.h

#include <iostream>

class Date
{
  public:
    Date();
    Date(int yyyy, int mm, int dd = 1);
    void init(int yyyy, int mm, int dd);
    void println() const;
    void inc_day(int d);
    int get_year() const;
    int get_month() const;
    int get_day() const;
    
private:
    int yyyy_, mm_, dd_;
;
};

std::ostream & operator<<(std::ostream &, const Date &);
