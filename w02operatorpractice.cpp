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


ostream& operator<<(ostream& out, Time a)
{
   string s = "";
   if (a.get_is_morning()) {
      s = "AM";
   }
   else {s = "PM";};
   
   out << a.get_hours() << ":"
      << setw(2) << setfill('0')
      << a.get_minutes() << " " << s;
   return out;
}
