#include "drill.h"

Date::Date(int yy, Month mm, int dd)
{
	if(!is_date(yy,mm,dd)) throw Invalid();
	y = yy;
	m = mm;
	d = dd;
}
Date::Date()
{
	y = 2000;
	m = Month::Jan;
	d = 1;
}
bool Date::is_valid(Date& dt)
{
	if(dt.m< Month::Jan | dt.m>Month::Dec)
		 return false;
	if(dt.d<1 | dt.d>31) return false;
	return true;
}
void Date::add_day(int n)
{
	++d;
}

bool is_date(int y, Month m, int d)
{
	if( m < Month::Jan | m > Month::Dec) 
		return false;
	if( d < 1 | d > 31 ) return false;
	return true;
}
ostream& operator<<(ostream& os, const Date& d)
{
	return os << '('
		<< d.year() << '.'
		<< d.month() << '.'
		<< d.day() << ')';
}

ostream&operator<<(ostream& os, const Month& m)
{
	switch(m){
		case Month::Jan: return os << "Jan";
		case Month::Sep: return os << "September";
		default: break;
	};
}
