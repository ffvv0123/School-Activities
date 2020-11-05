#include <iostream>
using namespace std;

void find_intersector(const double* d, const int* r1, const int* r2);

int main()
{
	int x1, y1, x2, y2, r1, r2;
	double distance_P;
	int test;

	cout << "테스트 케이스를 입력하세요: ";
	cin >> test;

	for (int i = 0; i < test; i++) {

		cout << "x1, y1, x2, y2, r1, r2를 입력하세요: ";
		cin >> x1 >> y1 >> x2 >> y2 >> r1 >> r2;

		distance_P = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

		find_intersector(&distance_P, &r1, &r2);
	}

	return 0;
}

void find_intersector(const double* d, const int* r1, const int* r2) {
	int sub_R;

	if (*r1 > * r2)
		sub_R = *r1 - *r2;
	else
		sub_R = *r2 - *r1;
	
	if (*d > sub_R)
		cout << "교점은 2개 입니다." << endl;
		
	else if (*d < sub_R)
		cout << "교점은 없습니다." << endl;
	else {
		if (sub_R == 0)
			cout << "두 원이 일치합니다." << endl;
		else
			cout << "교점은 1개 입니다." << endl;
	}
}

//https://www.acmicpc.net/problem/1002