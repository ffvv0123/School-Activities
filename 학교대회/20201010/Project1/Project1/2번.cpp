#include <iostream>
using namespace std;

int reverse(int num);
int rev_sum(int f1, int f2);

int main()
{
	int n, m;
	cin >> n >> m;

	cout << rev_sum(n, m);

	return 0;
}

int reverse(int num) {
	int rest, sum = 0;

	while (num > 0) {
		rest = num % 10;
		num /= 10;
		sum = sum * 10 + rest;
	}

	return sum;
}

int rev_sum(int f1, int f2) {
	return reverse(reverse(f1) + reverse(f2));
}