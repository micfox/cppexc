#include "std_lib_facilities.h"

istream& get_some(istream& is, char*& p, int num, int& count) //change p value, change read count
// if 
{
	char c = 0;
	count = 0;
	while(is.get(c)) {
		if (c == '\n') {
			return is;
		}
		*p = c;
		++p;
		++count;
		if (count >= num) return is;
	}
	return is;
}
	
void print_array(const char* a, int count)
{
	for (int i = 0; i < count; ++i) {
		cout << *a;
		++a;
	}
	cout << endl;
}

void copy_array(const char* src, char* dst, int num)
{
	int count = 0;
	for (int i = 0; i < num; ++i) {
		*dst = *src;
		++dst;
		++src;
		++count;
	}
	//cout << "debug: " << count << " chars copied\n";
}

bool is_palindrome(const char s[], int n)
{
	int first = 0;
	int last = n -1;
	while (first < last) {
		if (s[first] != s[last]) return false;
		++first;
		--last;
	}
	return true;
}

istream& read_word(istream& is, char*& buffer)
{
	//we should enlarge a buffer during runtime
	//istringstream input {"abcdef123456\n"};
	istringstream input {"abcdef123456\n"};
	int read_max = 3;
	int read = 0;
	int buffer_size = 0; //got chars
	int got_chars;
	int next_size;
	char* mut = new char[buffer_size + 1];
	char* p = mut;
	char* tmp;

	while (get_some(is, p, read_max, read)) { 
	//we don't know how many chars been inputed
	//?how can we try to get one by one until we know we reach endj
	//when we reach "a\n", we should stop reading from cin
		if (read != read_max) is.clear(ios_base::failbit);
	//	cout << "read: " << read << endl;
		buffer_size += read;
		next_size = buffer_size + read_max; 
		tmp = new char[next_size + 1]; //if we read = 0? it's ok, but reduntant operation
		copy_array(mut, tmp, buffer_size); 
		delete[] mut;
		mut = tmp;
		p = tmp + buffer_size;
	}
	*p = 0; //add 0 to end of a char array
//	print_array(mut, buffer_size);
//	cout << "buffer length: " << strlen(mut) << endl;
	buffer = mut;	

	if (is.rdstate() == ios_base::failbit) is.clear(ios_base::goodbit); //set good bit so the main loop can go on
	return is;
}

int main()
{
	//constexpr int max = 8;
	for (char* s; read_word(cin, s); ) {
//		cout << "word checking..." << endl;
		cout << s << " is";
//		cout << "array length is: " << strlen(s) << endl;
		if (!is_palindrome(s, strlen(s))) cout << " not";
		cout << " a palindrome\n";
	}
}

