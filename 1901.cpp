#include "std_lib_facilities.h"

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

template<typename T>
void f(T& a, const T& b)
{
	for (int i = 0; i < a.size() && i < b.size(); ++i) {
		a[i] += b[i];
	}
}

int main()
{
	vector<int> vi1 {1,2,3,4,5};
	vector<int> vi2 {2,3,4,995};
	f(vi1, vi2);
	cout << vi1;
}

