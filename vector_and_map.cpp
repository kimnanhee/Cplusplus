// vector 사용해보기
// map으로 key에 따른 value 저장하기 
#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main()
{
	vector<int> vec;

	int i, n;
	cin >> n;

	for(i=0; i<n; i++)
		vec.push_back(i+1);

	for (i = 0; i < vec.size(); i++)
		cout << vec[i] << endl;

	cout << "vector value print" << endl << endl;

	vec.erase(vec.begin());
	for (i = 0; i < vec.size(); i++)
		cout << vec[i] << endl;

	cout << "vector erase first" << endl << endl;

	vec.erase(++vec.begin());
	for (i = 0; i < vec.size(); i++)
		cout << vec[i] << endl;

	cout << "vector erase second" << endl << endl;

	map<string, int> dic; // key, value
	dic["nan"] = 2302;

	cout << dic["nan"] << endl;

	return 0;
}
