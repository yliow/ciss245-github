// Date.h

class Date
{
  public:
    void init(int yyyy, int mm, int dd);
    void println() const;
    void inc_day(int d);
    
  private:
    int yyyy_, mm_, dd_;
};
