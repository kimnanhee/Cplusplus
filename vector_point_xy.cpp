#include <vector>
#include <iostream>
using namespace std;

struct point { // x, y ��ǥ�� ������ ����ü ����
	int x;
	int y;
};
int main()
{
	vector<point> vec;

	while (1)
	{
		point in;
		cin >> in.x >> in.y;

		if (in.x == -1 && in.y == -1) // -1, -1 �Է��ϸ� ����
		{
			for (int i = 0; i < vec.size(); i++)
				cout << vec[i].x << " " << vec[i].y << endl; // vector���� x, y��ǥ ���
			break;
		}
		vec.push_back(in); // �Է¹��� x, y ��ǥ vector�� ���̱�
	}
	return 0;
}