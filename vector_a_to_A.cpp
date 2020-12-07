#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<string> vec;
	
	string str;
	while(true)
	{
		cin >> str;
		if(str == "end") break;
		else vec.push_back(str);
	}
	
	for(int i=0; i<vec.size(); i++)
	{
		for(int j=0; j<vec[i].size(); j++)
		{
			if('a' <= vec[i][j] && vec[i][j] <= 'z') vec[i][j] += ('A'-'a');
		}
		cout << vec[i] << endl;
	}
	return 0;
}
