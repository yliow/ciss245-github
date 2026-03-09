// Date.h

#ifndef DATE_H
#define DATE_H

class Date
{
  public:
    Date();
    Date(int, int, int);
    Date(const Date &);
    void init(int, int, int);
    void print() const;
    void add_y(int);
    void add_m(int);
    void add_d(int);
    void add_y_m_d(int, int, int);
    void add_date(const Date &);
    void operator+=(const Date &);
    int year() const;
    int month() const;
    int day() const;
    
  private:
    int yyyy_, mm_, dd_;
};

std::ostream & operator<<(std::ostream &, const Date &);

#endif
