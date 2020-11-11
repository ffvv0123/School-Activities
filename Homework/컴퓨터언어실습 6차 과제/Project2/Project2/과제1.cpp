#include <iostream>
#define SIZE 3
using namespace std;

int& refReturn(int* p, int index);

int main() {
	int i, a[SIZE] = { 1, 2, 3 };

	for (i = 0; i < SIZE; i++)
		cout << a[i] << ", ";
	cout << endl;

	refReturn(a, 2) = 5; // check!!!

	for (i = 0; i < SIZE; i++)
		cout << a[i] << ", ";
	cout << endl;

	return 0;
}

int& refReturn(int* p, int index) {
	int& r = p[index];
	return r;
}