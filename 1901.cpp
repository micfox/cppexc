//#include "std_lib_facilities.h"
#include "myheader.h"

template<typename T>
void f(T& a, const T& b)
{
	for (int i = 0; i < a.size() && i < b.size(); ++i) {
		a[i] += b[i];
	}
}

template<typename T>
vector<T> vtmul(vector<T>& v1, vector<T>& v2)
{
	vector<T> result;
	for (int i = 0; i < v1.size() && i < v2.size(); ++i) {
		Debug_print(v1[i] * v2[i]);
		result.push_back(v1[i] * v2[i]);
	}
	return result;
}

int main()
{
	vector<int> vi1 {1,2,3,4,5};
	vector<int> vi2 {2,3,4,995};
	f(vi1, vi2);
	//cout << vi1;
	vector<int> r {vtmul(vi1, vi2)};
	cout << r;
}

