#include "std_lib_facilities.h"

class Int {
	int v;
public:
	Int()
	:v{0} {}
	Int(const int vv)
	:v{vv} {}
	int get() const{return v;}
	void set(int i) {v = i;}

	//copy constructor
	Int(const Int& i) :v{i.get()} {}	
	Int& operator=(const Int&);
};

//copy assignment operator
Int& Int::operator=(const Int& t)
{
	//this->v = t.get();
	v = t.v;
	return *this;
}
	 
//ostream operator
ostream& operator<<(ostream& os, Int i)
{
	os << i.get() << endl;
	return os;
}

//+ operator
Int operator+(Int& a, Int& b)
{
	Int t {a.get() + b.get()};
	return t;
}	

//- operator
Int operator-(Int& a, Int& b)
{
	return (a.get() - b.get());
}

int main()
{
	Int i{3};
	Int j{i};
	Int k;
	k = j; 
	Int l = i - j;
	cout << l;
}

