#include <iostream>
using namespace std;

int main()
{
	int sum = 0;
	int* p = new int[5];
	double average;

	if (!p) {
		cout << "메모리를 할당할 수 없습니다.";
		return 0;
	}
	
	cout << "정수 5개 입력>> ";

	for (int i = 0; i < 5; i++) {
		cin >> p[i];
		sum += p[i];
	}

	average = sum / 5.0;
	cout << "평균 " << average << endl;

	delete[] p;
	return 0;
}