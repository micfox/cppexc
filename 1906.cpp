#include "std_lib_facilities.h"

template<typename T>
class Number {
	T t;
public:
	Number(T tt) :t{tt} {}
	const T get() const{return t;}
};

template<typename T>
T operator%(T& a, T& b)
{
	return a.get() % b.get();
}

template<typename T>
ostream& operator<<(ostream& os, Number<T> n)
{
	return os << n.get() << endl;
}

int main()
{
	Number<int> i1 {5};
	Number<int> i2 {3};
	Number<double> d1 {5.1};
	Number<double> d2 {3.1};

	cout << i1 % i2;
//	cout << d1 % d2;
}
