// No.1 ���簢���� 3���� �������� �Է¹޾��� �� ������ ������ �ϳ��� ��ǥ�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

#include <iostream>
using namespace std;

int main()
{
	int x1, x2, x3, x4, y1, y2, y3, y4; 

	cout << "Point (x1,y1)? ";
	cin >> x1 >> y1;

	cout << "Point (x2,y2)? ";
	cin >> x2 >> y2;

	cout << "Point (x3,y3)? ";
	cin >> x3 >> y3;

	x4 = (x1 ^ x2) == 0 ? x3 : ((x1 ^ x3) == 0 ? x2 : x1);
	y4 = (y1 ^ y2) == 0 ? y3 : ((y1 ^ y3) == 0 ? y2 : y1);

	cout << "Point 4 is (" << x4 << "," << y4 << ")";

	return 0;

}