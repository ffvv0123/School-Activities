#include <iostream>
using namespace std;

int big(int x, int y);
int big(int x, int y, int max);

int main() {
	int x = big(3, 5); 
	int y = big(300, 60); 
	int z = big(30, 60, 50); 

	cout << x << ' ' << y << ' ' << z << endl;

	return 0;
}

int big(int x, int y) {
	int big = x > y ? x : y;

	if (big <= 100)
		return big;
	else
		return 100;
}

int big(int x, int y, int max) {
	int big = x > y ? x : y;

	if (big <= max)
		return big;
	return max;
}