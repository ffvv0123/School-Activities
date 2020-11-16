#include <iostream>
#include <queue>
using namespace std;

int main() {
	int num, k;
	queue<int> q;

	cin >> num >> k;
	cout << "<";

	for (int i = 1; i <= num; i++)
		q.push(i);

	while (!q.empty()) {
		for (int i = 0; i < k - 1; i++) {
			q.push(q.front());
			q.pop();
		}

		cout << q.front();
		q.pop();

		if (!q.empty())
			cout << ", ";
	}
	cout << ">";

	return 0;
}
