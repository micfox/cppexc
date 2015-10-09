#include "name_pair.h"

void Name_pair::read_name()
{
	string s;
	cout << "Input names('!' to end input):\n";
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

vector<string> Name_pair::get_name()
{
	return name;
}
vector<double> Name_pair::get_age()
{
	return age;
}

void Name_pair::print() const
{
	for(int i=0;i<name.size();++i)
		cout << name[i] << ' '
			<< age[i] << '\n';
}

ostream& operator<<(ostream& os, Name_pair np)
{
	vector<string> name = np.get_name();
	vector<double> age = np.get_age();
	string s="";
	for(int i=0;i<name.size();++i)
		s+= name[i] + ' ' + to_string(age[i]) + '\n';
	return os << s;
}
