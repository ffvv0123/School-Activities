#include <iostream>
#include <queue>
using namespace std;

int main() {
	int num, trial;
	cin >> num >> trial;

	priority_queue<long long int, vector<long long int>, greater<long long int>> q;

	for (int i = 1; i <= num; i++) {
		int k;
		cin >> k;
		q.push(k);
	}
	
	for (int i = 1; i <= trial; i++) {
		long long int min = q.top();
		q.pop();
		min += q.top();
		q.pop();
		q.push(min);
		q.push(min);
	}

	long long int sum = 0;

	while (!q.empty()) {
		sum += q.top();
		q.pop();
	}

	cout << sum;

	return 0;
}