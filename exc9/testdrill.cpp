#include "drill.h"

int main()
{
	Date today{2015,Month::Sep,26};
	cout <<	today << endl;
	today.add_day(1);
	cout << today<< endl;
}
