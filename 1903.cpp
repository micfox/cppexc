#include "std_lib_facilities.h"

template<typename Name, typename Value>
class Pair {
	Name nm;
	Value val;
public:
	Pair(Name n, Value v) 
	:nm{n}, val{v} {}
};

int main()
{
	Pair<string, double> p {"tmp", 36.8};
}
