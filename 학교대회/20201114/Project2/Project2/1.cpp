#include <iostream>
using namespace std;

int main() {
	int n, L, k, c, d, p, nL, np;
	cin >> n >> k >> L >> c >> d >> p >> nL >> np;
	
	int water = L * k / nL;
	int ramen = c * d;
	int egg = p / np;

	int arr[3]{ water / n, ramen / n, egg / n };

	int min = arr[0];
	for (int i = 1; i < 3; i++) {
		if (min > arr[i])
			min = arr[i];
	}

	cout << min;

	return 0;
}