#include <iostream>
using namespace std;

int main()
{
	int sum = 0;
	int* p = new int[5];
	double average;

	if (!p) {
		cout << "�޸𸮸� �Ҵ��� �� �����ϴ�.";
		return 0;
	}
	
	cout << "���� 5�� �Է�>> ";

	for (int i = 0; i < 5; i++) {
		cin >> p[i];
		sum += p[i];
	}

	average = sum / 5.0;
	cout << "��� " << average << endl;

	delete[] p;
	return 0;
}