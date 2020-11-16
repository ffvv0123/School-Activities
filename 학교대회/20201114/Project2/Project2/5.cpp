#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

bool comp(int a, int b) {
	return a > b;
}

int main() {
	int num, index;
	cin >> num >> index;
	int find;	
	int count = 0;

	int* arr = new int[num];

	queue<int> q;


		for (int i = 0; i < num; i++) {
			int tmp;
			cin >> tmp;
			q.push(tmp);

			if (index = i)
				find = tmp;

			arr[i] = tmp;
		}
		sort(arr, arr + num, comp);

		for (int i = 0; i < num; i++) {
			while (!q.empty()) {
				if (arr[i] == q.front() && q.front() != find) {
					q.pop();
					count++;
				}
				if (arr[i] == find) {
					count++;
					break;
				}
				if (arr[i] < q.front() && q.front() != find) {
					q.push(q.front());
					q.pop();
					count++;
				}
			}
		}
	cout << count << endl;;
}