#include <iostream>
#include <algorithm>
using namespace std;

int abs(int x, int y);

int main() {
	int num;
	cin >> num;

	int* arr = new int[num];
	int* sum = new int[num] {0};
	int* prime = new int[num] {0};

	for (int i = 0; i < num; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			sum[i] += abs(arr[i], arr[j]);
		}
	}
	sort(sum, sum + num);

	int primeSum = sum[0];

	for (int i = 0; i < num; i++) {
		sum[i] = 0;
	}

	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			sum[i] += abs(arr[i], arr[j]);
		}
	}

	for (int i = 0; i < num; i++) {
		if (primeSum == sum[i])
			prime[i] = arr[i];
	}
	sort(prime, prime + num);
	
	for (int i = 0; i < num; i++) {
		if (prime[i] != 0) {
			cout << prime[i];
			break;
		}
	}

	delete[] sum;
	delete[] arr;
	return 0;
}

int abs(int x, int y) {
	return x - y > 0 ? x - y : y - x;
}