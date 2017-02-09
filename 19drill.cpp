#include<iostream>

template<typename T>
struct S {
	S(T t) :val{t} {}
	const T& get() const;
	T& get() {return val;}
	void set(T t) {
		val = t;
	}

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

int main()
{
	S<char> sc {'K'};
	S<double> s {1.1};
	double d = s.get();
	d += 0.1;	
	s.set(3.3);
	s = 4.4;
	s.get() += 0.2;
	std::cout << sc.get() << '\n';
	std::cout << s.get() << '\n';
	std::cout << d << '\n';
}
