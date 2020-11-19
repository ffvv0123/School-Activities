#include <iostream>
using namespace std;

int g = 20;

int add(int x, int y) {
	return x + y;
}

int main()
{
	int a, b, sum;

	cout << "두 정수를 입력하세요 >>";
	cin >> a >> b;

	sum = a + b;

	cout << "합은 " << sum << "\n";
	cout << "합은 " << add(a, b) << "\n";
	cout << "전역 변수 g의 값은 " << g;

	return 0;
}