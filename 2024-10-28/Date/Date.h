// Date.h

#ifndef DATE_H
#define DATE_H

class Date
{
  public:
    Date();
    Date(int, int, int); // real name is Date::Date
    //Date(const Date &);
    ~Date()
    {
        std::cout << "Date::~Date() is called "
                  << yyyy_ << ' ' << mm_ << ' ' << dd_ << '\n';
    }
    void init(int, int, int);
    void print() const;
    void add_y(int);
    void add_m(int);
    void add_d(int);
    void add_y_m_d(int, int, int);
    int get_year() const;
    int get_month() const;
    int get_day() const;
        
  private:
    int yyyy_;
    int mm_;
    int dd_;
};

std::ostream & operator<<(std::ostream &, const Date &);

#endif
