#include <iostream>
#include <algorithm>
using namespace std;

void checker(int* arr, int len);
bool compare1(int a, int b);
bool compare2(int a, int b);

int main() {
	int num;	
	cin >> num;

	for (int i = 0; i < num; i++) {
		int len;	
		cin >> len;
		
		int* arr = new int[len];

		for (int j = 0; j < len; j++)
			cin >> arr[j];

		checker(arr, len);

		delete[] arr;
	}
	

}

void checker(int* arr, int len) {
	int sum = 0;

	for (int i = 0; i < len; i++) {
		sum += arr[i];
	}

	if (sum == 0) {
		cout << "NO" << endl;
		return;
	}

	cout << "YES" << endl;

	if (sum > 0) {
		sort(arr, arr + len, compare1);

		for (int i = 0; i < len; i++) {
			cout << arr[i] << ' ';
		}
		cout << endl;
	}

	if (sum < 0) {
		sort(arr, arr + len, compare2);

		for (int i = 0; i < len; i++) {
			cout << arr[i] << ' ';
		}
		cout << endl;
	}
}

bool compare1(int a, int b) {
	return a > b;
}

bool compare2(int a, int b) {
	return a < b;
}
