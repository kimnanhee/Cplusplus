/*
:�� �������� ���ڿ��� parsing�ؼ� vector�� ����
vector�� ����� ���ڿ��� �������� ���� 
*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	vector<string> vec;
	string arr = "ab:cd:ef:gh:jk";
	string str;

	for (int i = 0; i < arr.size(); i++)
	{
		while (arr[i] != ':' && i < arr.size())
			str += arr[i++];
		vec.push_back(str);
		str = "";
	}

	sort(vec.begin(), vec.end(), greater<>());

	for (int i = 0; i < vec.size(); i++)
		cout << vec[i] << " ";
}
