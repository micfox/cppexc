#include "name_pair.h"

int main()
{
	Name_pair np1{
		vector<string>{"aa","bb","cc"},
		vector<double>{50,60,70}
	};
	Name_pair np2{
		vector<string>{"aa","bb"},
		vector<double>{55,66}
	};
	//np.read_name();
	//np.read_age();
	//cout << np;

	if(np1 == np2) cout << "name pairs equal";
	if(np1 != np2) cout << "name pairs not equal";
}
