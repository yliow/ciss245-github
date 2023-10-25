// Date.h

#include <iostream>

class Date
{
  public:
    Date();
    Date(int yyyy, int mm, int dd);
    void init(int yyyy, int mm, int dd);
    void println() const;
    void inc_day(int d);
    int get_year();
    //private:
    int mm_, dd_;

private:
    int yyyy_;
};

std::ostream & operator<<(std::ostream &, const Date &);
