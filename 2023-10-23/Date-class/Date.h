// Date.h

class Date
{
  public:
    void init(int yyyy, int mm, int dd);
    void println();
    
  private:
    int yyyy_, mm_, dd_;
    void inc_day(int d);

};

