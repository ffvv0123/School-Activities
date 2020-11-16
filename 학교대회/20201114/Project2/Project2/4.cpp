#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int num;
	cin >> num;

	int arr[100000];

	for (int i = 0; i < num; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + num);

	for (int i = 0; i < num; i++) {
		cout << arr[i] << ' ';
	}

	return 0;
}