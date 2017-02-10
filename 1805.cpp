#include "std_lib_facilities.h"

int cstr_len(const char* c)
{
	int n = 0;
	while(*c) {
		++n;
		++c;
	}
	return n;
}

char* ca_copy(char* dst, const char* src)
{
	while(*src) {
		*dst = *src;
		++dst;
		++src;
	}
	return dst;
}

string& cat_dot(const string& s1, const string& s2)
{
	string* s = new string {s1 + "." + s2};
	return *s;
}

char* cat_cstr(const char* s1, const char* s2, const char* cat)
{
	char* ca = new char[cstr_len(s1) + cstr_len(s2) + cstr_len(cat) +1];
	char* p = ca;
	p = ca_copy(p, s1);
	p = ca_copy(p, cat);
	p = ca_copy(p, s2);
	*p = 0;
	//cout << "debug: after copy: " << p << endl;
	return ca;
}	

int main()
{
	char* cs = cat_cstr("hello", "world", " & ");
	cout << cs;
	delete[] cs;
	int* i = new int[100];
	int* ii = new int[100];
	if (i < ii) cout << "free store memory address goes from lower to higher\n";
	if (i > ii) cout << "free store memory address goes from higher to lower\n"; 
	int s[10];
	int ss[10];
	if (&s < &ss) cout << "stack memory adress goes from lower to higher\n";
	if (&s > &ss) cout << "stack memory address goes from higher to lower\n";

	if(&i[0] < &i[99]) cout << "array on free store, higher index located at higher address\n";
	if(&i[0] > &i[99]) cout << "array on free store, higher index located at lower address\n";

	if(&s[0] < &s[9]) cout << "array on stack, higher index located at higher address\n";
	if(&s[0] > &s[9]) cout << "array on stack, higher index located at lower address\n";

}
