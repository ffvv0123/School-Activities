#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < i; j++)
			cout << "*";
		for (int k = 2 * n - 2 * i; k > 0; k--)
			cout << " ";
		for (int j = 0; j < i; j++)
			cout << "*";
		cout << endl;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = n - i; j > 0; j--)
			cout << "*";
		for (int k = 1; k <= 2 * i; k++)
			cout << " ";
		for (int j = n - i; j > 0; j--)
			cout << "*";
		cout << endl;
	}

	return 0;
}