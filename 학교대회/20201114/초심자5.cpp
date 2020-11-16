#include <iostream>
#include <queue>
using namespace std;

int N, M;
queue<int> q;
int priority[100];

void input() {
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> priority[i];
		q.push(i);
	}
}

void pop_queue() {
	while (!q.empty()) {
		q.pop();
	}
}

bool is_big(int cur) {
	for (int i = 0; i < N; i++) {
		if (priority[i] > priority[cur]) {
			return false;
		}
	}

	return true;
}

int solution() {
	int order = 1;	// 순서

	// N, M, priority 정보 입력
	input();

	while (!q.empty()) {
		if (is_big(q.front())) {
			if (q.front() == M) {
				pop_queue();
				return order;
			}

			priority[q.front()] = 0;
			q.pop();
			order++;
		}
		else {
			int n = q.front();
			q.pop();
			q.push(n);
		}
	}

	return -1;
}

int main() {
	int T;
	cin >> T;

	while (T--) {
		cout << solution() << '\n';
	}

	return 0;
}