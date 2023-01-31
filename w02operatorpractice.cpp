// Yiheng Zhang, Saajan Grewal,Gavin Silva, Sang Do
class Time
{
public:
   Time();
   Time(int h, int m, bool i);
   int get_hours() const;
   int get_minutes() const;
   bool get_is_morning() const;
   void set_is_morning(bool i);
private:
   int hours;
   int minutes;
   bool is_morning;
};

int Time::get_hours() const {
    return hours;
}

int Time::get_minutes() const {
    return minutes;
}

bool Time::get__is_morning() const {
    return is_morning;
}

void Time::set_is_morning(bool i) {
    is_morning = i;
}


ostrea





Examples:


//Adam, Moneeb
Time Time::operator+(Time a, Time b)
{
   bool is_morning = true;
   int hours = a.get_hours + b.get_hours;
   int minutes = a.get_minutes + b.get_hours + minutes/60;
   minutes = minute % 60;
   if(!b.get_is_morning())
   {
      hours+=12;
   }
   if((hours/12)%2 == 1)
   {
      is_morning = false;
   }
   return Time(hours, minutes, is_morning);

      
}

istream& operator>>(istream& in, Time& a)
{

}
