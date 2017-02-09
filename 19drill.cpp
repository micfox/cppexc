//#include<iostream>
#include "std_lib_facilities.h"

template<typename T>
struct S {
	S() {}
	S(T t) :val{t} {}
	const T& get() const;
	T& get() {return val;}
	void set(T t) {
		val = t;
	}
//	void read_val
	void operator=(const T& t) {
		val = t;
	}
private:
	T val;
};

template<typename T> 
const T& S<T>::get() const
{
	return val;
}

template<typename T> 
void read_val(T& v)
//从cin读入到v
{
	cout << "now reading " << typeid(v).name() << endl;
	std::cin >> v;
}
template<typename T>
istream& operator>>(istream& is, vector<T>& v)
{
	char left_brac;
	char right_brac;
	T rd;
	cin >> left_brac;
	if (left_brac != '{') ;//do what?
	while (is >> rd && rd != '}') {
		v.push_back(rd);	
//		cout << "debug: read " << rd << endl;
	}
//	cout << "debug: v[0] " << v[0] << endl;
	return is;
}

template<typename T>
ostream& operator<<(ostream& os, vector<T>& v)
{
	os << "{ ";
	for(T t : v) {
		os << t;
		os << ' ';
	}
	os << '}';
	return os;
}

int main()
{
	S<char> sc {'K'};
	S<double> s {1.1};
	S<int> si {9};
	S<vector<int>> svi;
//	vector<vector<int>> vv {{1,2,3},{4,5,6}};
	double d = s.get();
	d += 0.1;	
	s.set(3.3);
	s = 4.4;
	s.get() += 0.2;
/*
	read_val(sc.get());
	read_val(s.get());
	read_val(si.get());
*/
	//sth wrong:
	read_val(svi.get());
	std::cout << sc.get() << '\n';
	std::cout << s.get() << '\n';
	std::cout << si.get() << '\n';
	vector<int> test {svi.get()};
//	cout << test[0] << endl;
	//cout << svi.get()[0];
	cout << svi.get();
}
