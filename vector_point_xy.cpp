#include <vector>
#include <iostream>
using namespace std;

struct point { // x, y 좌표를 저장할 구조체 생성
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

		if (in.x == -1 && in.y == -1) // -1, -1 입력하면 종료
		{
			for (int i = 0; i < vec.size(); i++)
				cout << vec[i].x << " " << vec[i].y << endl; // vector안의 x, y좌표 출력
			break;
		}
		vec.push_back(in); // 입력받은 x, y 좌표 vector에 붙이기
	}
	return 0;
}