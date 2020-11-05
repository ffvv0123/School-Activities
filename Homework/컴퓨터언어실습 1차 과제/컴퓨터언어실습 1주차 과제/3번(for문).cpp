// No.3 백준 10093 https://www.acmicpc.net/problem/10093

#include <iostream>
using namespace std;

int main()
{
	int a, b;

	cout << "두 수를 크기 순서로 입력하세요: ";
	cin >> a >> b;

	int num = b - a - 1;
	cout << "두 수 사이에는 "<< num << "개의 수가 있습니다." << endl;

	for (int i = 1; i <= num; i++) {
		cout << a + i << " ";
	}
}