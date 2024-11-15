#ifndef TIME_H
#define TIME_H

class Time
{
  public:
    Time(int hh, int mm, int ss);
    int hh() const;
    int mm() const;
    int ss() const;
    
  private:
    int hh_, mm_, ss_;
};

std::ostream & operator<<(std::ostream &, const Time &);

#endif
