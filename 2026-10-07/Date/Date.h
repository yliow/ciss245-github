#ifndef DATE_H
#define DATE_H

class Date
{
  public:
    // ctor = constructor
    Date(int=1970, int=1, int=1); // constructor -- init
    //Date(const char []); // "Jan 1, 2026"
    //void init(int, int, int);
    //Date(const Date &);
    //Date();
         
    void print() const;
    void add_y(int);
    void add_m(int);
    void add_d(int);
    void add_m_d(int, int);
    int year() const;
    int month() const;
    int day() const;
  private:
    int yyyy_, mm_, dd_;
};

std::ostream & operator<<(std::ostream &, const Date &);

#endif

