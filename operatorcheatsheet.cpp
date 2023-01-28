istream& operator>>(istream& in, Fraction& f)
{
   int num, den;
   char ch;
   in >> num >> ch >> den;
   f = Fraction(num, den);
   return in;
}
//The istream and Fraction are passed by reference. The istream& is returned.

//out stream
ostream& operator<<(ostream& out, Fraction f)
{
   return out << f.numerator() << "/" << 
      f.denominator();
}

ostream& operator<<(ostream& out, const Name& name)
{
   return out << name.get_first() << " " 
      << name.get_last();
}

// operator
Time operator+(Time a, int min) 
you can define a member function

Time Time::operator+(int min) const
{
   int result_minutes = hours * 60 + minutes + min;
   return Time((result_minutes / 60) % 24, result_minutes % 60);
}