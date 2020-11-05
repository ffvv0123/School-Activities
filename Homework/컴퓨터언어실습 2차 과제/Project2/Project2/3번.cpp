#include <iostream>
using namespace std;

void find_intersector(const double* d, const int* r1, const int* r2);

int main()
{
	int x1, y1, x2, y2, r1, r2;
	double distance_P;
	int test;

	cout << "�׽�Ʈ ���̽��� �Է��ϼ���: ";
	cin >> test;

	for (int i = 0; i < test; i++) {

		cout << "x1, y1, x2, y2, r1, r2�� �Է��ϼ���: ";
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
		cout << "������ 2�� �Դϴ�." << endl;
		
	else if (*d < sub_R)
		cout << "������ �����ϴ�." << endl;
	else {
		if (sub_R == 0)
			cout << "�� ���� ��ġ�մϴ�." << endl;
		else
			cout << "������ 1�� �Դϴ�." << endl;
	}
}

//https://www.acmicpc.net/problem/1002