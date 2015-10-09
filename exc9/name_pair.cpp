#include "name_pair.h"

void Name_pair::read_name()
{
	string s;
	while(cin >> s){
		if( s == "!" ) break;
		name.push_back(s);
	}
}

void Name_pair::read_age()
{
	double s;
	if( name.size() == 0 ) return;
	cout << "Input age for each name:\n";
	for(int i=0;i<name.size();++i){
		cout << name[i] << " : ";
		cin >> s;
		age.push_back(s);
	}		
	
}

void Name_pair::print() const
{
	for(int i=0;i<name.size();++i)
		cout << name[i] << ' '
			<< age[i] << '\n';
}
