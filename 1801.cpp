// zzzzz

#include "std_lib_facilities.h"

int mystrlen(const char* a)
{
	int c = 0;
	while(*a) {
		++c;
		++a;
	}
	return c;
}

char* strdup(const char* a)
{
	char* s = new char[mystrlen(a) + 1];
	char* s_copy = s;
	while(*a) {
		*s_copy = *a;
		++a;
		++s_copy;
	}
	//++s_copy;
	*s_copy = 0;
	return s;
}

char* findx(const char* s, const char* x)
{
	const char* m = x;
	const char* search = nullptr;
	while(*s) {
		search = s;
		m = x;
		while((*m != 0) && (*m == *search)) {
			//cout << "debug: m:" << m << '\n';
			//cout << "debug: search:" << search << '\n';
			++m;
			++search;	
		}
		if(*m == 0) return const_cast<char*>(s);
		++s; //go to next search
	}
	return nullptr;
}

ostream& operator<<(ostream& os, const char* p)
{
	if(p == nullptr) {
		os << "null pointer, nothing to print\n";
		return os;
	} else {
		for (const char* i = p; *p; ++p) {
			os << *p;
		}
		//cout << "Debug: " ;//<< int(*p) << '\n';
	}
	cout << int(*p);
	return os << '\n';
}
		
int main()
{
	char ac[] = "Hello, good morning.";
	char hide[] = "Can you see me?";
	char* frss = new char[8] {'h','i','d','e','s','e','k'};
	char* frs = new char[40] {'F','r','e','e'};
	char* frsss = new char[80] {'H','i','d','e','s','e','k'};
	char* p {strdup(ac)};

	char fk[] {'h','e','l','l','o','g','o','o'};

	char hide2[] = "I'm here.";
/*
	for (const char* i = p; *p; ++p) {
		cout << *p;
	}
	cout << '\n';
*/

//	cout << fk;
	cout << frs;
	
//	char* find {findx(ac, "good mor")};
//	cout << find;
}
