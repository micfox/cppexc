#include "../std_lib_facilities.h"
//implement Date

enum class Month{
	Jan=1,Feb,Mar,Apr,May,Jun,
	Jul,Aug,Sep,Oct,Nov,Dec
};

class Date{
	class Invalid{};

	int y;
	Month m;
	int d;

public:
	Date next_day(Date&);
	bool is_valid(Date&);
	Date(int,Month,int);
	Date();
	void add_day(int n);
	int year() const {return y;}
	Month month() const {return m;}
	int day() const {return d;}
};

ostream& operator<<(ostream& os, const Date& d);
ostream& operator<<(ostream& os, const Month& m);
bool is_date(int,Month,int);


