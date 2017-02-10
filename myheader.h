#include "std_lib_facilities.h"
#define Debug_print(a) std::cout << "Debug >> " << #a << ": " << (a) << std::endl

//vector print
template<typename T>
ostream& operator<<(ostream& os, vector<T>& v)
{
    os << "{ ";
    for(T t : v) {
        os << t;
        os << ' ';
    }
    os << '}' << endl;
    return os;
}

