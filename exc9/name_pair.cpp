#include "name_pair.h"

Name_pair::Name_pair(vector<string> nn, vector<double> aa)
	:name{nn},age{aa}
{
	if(name.size() != age.size()) throw Invalid{};
}

Name_pair::Name_pair()
{
}
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

vector<string>& Name_pair::get_name()
{
	return name;
}
vector<double>& Name_pair::get_age()
{
	return age;
}

void Name_pair::print() const
{
	for(int i=0;i<name.size();++i)
		cout << name[i] << ' '
			<< age[i] << '\n';
}

ostream& operator<<(ostream& os, Name_pair& np)
{
	vector<string> name = np.get_name();
	vector<double> age = np.get_age();
	string s="";
	for(int i=0;i<name.size();++i)
		s+= name[i] + ' ' + to_string(age[i]) + '\n';
	return os << s;
}

bool operator==(Name_pair& np1, Name_pair& np2)
{
	vector<string> name1 = np1.get_name();
	vector<string> name2 = np2.get_name();
	if( name1.size() != name2.size() ) return false;
	for(int i=0;i<name1.size();++i)
		if( name1[i] != name2[i] ) return false;
	return true;
}

bool operator!=(Name_pair& np1, Name_pair& np2)
{
	if( np1 == np2 ) return false;
	return true;
}

