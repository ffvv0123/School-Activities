// No.3 ���� 10093 https://www.acmicpc.net/problem/10093

#include <iostream>
using namespace std;

int main()
{
	int a, b;

	cout << "�� ���� ũ�� ������ �Է��ϼ���: ";
	cin >> a >> b;

	int num = b - a - 1;
	cout << "�� �� ���̿��� "<< num << "���� ���� �ֽ��ϴ�." << endl;

	for (int i = 1; i <= num; i++) {
		cout << a + i << " ";
	}
}