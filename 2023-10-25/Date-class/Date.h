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
    
    //private:
    int yyyy_, mm_, dd_;
};

std::ostream & operator<<(std::ostream &, const Date &);
