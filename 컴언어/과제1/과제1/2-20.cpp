#include <iostream>
using namespace std;
int main() {
	for (int n = 0; n < 4; n++) {
		for (int m = 0; m < n + 1; m++) 
			cout << '*';
		cout << endl;
	}
}