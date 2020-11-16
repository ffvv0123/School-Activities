#include <iostream>
using namespace std;

int main() {
	int A;
	int B;
	int C;
	int num = 0;

	cin >> A >> B >> C;
	
	if (C <= B) {
		cout << -1;
		return 0;
	}

	num = A / (C - B);
	cout << num + 1;

	return 0;
}