#include "../std_lib_facilities.h"

class Name_pair{
	private:
		vector<string> name;
		vector<double> age;

	public:
		void read_name();
		void read_age();
		void print() const; 
		void sort();
};

