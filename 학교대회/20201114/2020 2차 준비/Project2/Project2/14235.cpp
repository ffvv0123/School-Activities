#include <iostream>
#include <queue>
using namespace std;

int main() {
	int num;
	int count = 0;
	priority_queue<int> val;

	cin >> num;
	int* arr = new int[num];

	for (int i = 0; i < num; i++) {
		cin >> arr[i];

		for (int j = 0; j < arr[i]; j++) {
			int k;
			cin >> k;
			val.push(k);
			count++;
		}

		if (arr[i] == 0) {
			if (count == 0) {
				cout << -1 << endl;
			}
			else {
				cout << val.top() << endl;
				val.pop();
				count--;
			}
		}
	}

	delete[] arr;
	return 0;
}