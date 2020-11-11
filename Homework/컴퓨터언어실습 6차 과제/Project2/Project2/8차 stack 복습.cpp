#include <iostream>
#define MAX 2
using namespace std;

class MyIntStack {
	int p[MAX];
	int tos;
public:
	MyIntStack();
	bool push(int n);
	bool pop(int& n);
};

MyIntStack::MyIntStack() {
	tos = 0;
}

bool MyIntStack::push(int n) {
	if (tos == MAX)
		return false;

	p[tos] = n;
	tos++;

	return true;
}

bool MyIntStack::pop(int& n) {
	if (tos == 0)
		return false;

	tos--;
	n = p[tos];

	return true;
}

int main() {
	MyIntStack a;

	for (int i = 0; i < MAX + 1; i++) {
		if (a.push(i))
			cout << i << ' ';
		else
			cout << endl << i + 1 << " 번째 시도 stack full" << endl;
	}

	cout << "-----------------------" << endl;

	int n;
	for (int i = 0; i < MAX + 1; i++) {
		if (a.pop(n))
			cout << n << ' ';
		else
			cout << endl << i + 1 << " 번째 시도 stack empty";
	}
	cout << endl;

	return 0;
}
