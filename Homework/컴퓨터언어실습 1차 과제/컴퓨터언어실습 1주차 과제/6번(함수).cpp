// No.6 ���� 10872, https://www.acmicpc.net/problem/10872

#include <iostream>
using namespace std;

int factorial(int num);

int main()
{
	int number;
	cout << "���� �Է��ϼ���: ";
	cin >> number;
	cout << factorial(number);

	return 0;
}

int factorial(int num) {
	if (num <= 1)
		return 1;
	return num * factorial(num - 1);
}