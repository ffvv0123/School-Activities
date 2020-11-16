#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string str;
	int col[5];
	int num[5] = { 0 };

	for (int i = 0; i < 5; i++) {
		cin >> col[i];
	}
	cin.ignore();

	getline(cin, str);

	int size = str.length();

	int* a = new int[size];
	int* e = new int[size];
	int* I = new int[size];
	int* o = new int[size];
	int* u = new int[size];

	for (int i = 0; i < size; i++) {
		a[i] = 0;
		e[i] = 0;
		I[i] = 0;
		o[i] = 0;
		u[i] = 0;
	}

	for (int i = 0; i < size; i++) {
		if (str[i] == 'a' || str[i] == 'A') {
			num[0]++;
			a[i] = i;
		}
		if (str[i] == 'e' || str[i] == 'E') {
			num[1]++;
			e[i] = i;
		}
		if (str[i] == 'i' || str[i] == 'I') {
			num[2]++;
			I[i] = i;
		}
		if (str[i] == 'o' || str[i] == 'O') {
			num[3]++;
			o[i] = i;
		}
		if (str[i] == 'u' || str[i] == 'U') {
			num[4]++;
			u[i] = i;
		}
	}

	for (int i = 0; i < 5; i++) {
		if (num[i] != 0) {
			cout << col[i];
			cout << num[i];
			if (i == 0) {
				for (int j = 0; j < size; j++) {
					if (a[j] != 0)
						cout << a[j];
				}
			}
			if (i == 1) {
				for (int j = 0; j < size; j++) {
					if (str[j] == 'E' || str[j] == 'e')
						cout << e[j];
				}
			}
			if (i == 2) {
				for (int j = 0; j < size; j++) {
					if (str[j] == 'I' || str[j] == 'i')
						cout << I[j];
				}
			}
			if (i == 3) {
				for (int j = 0; j < size; j++) {
					if (str[j] == 'O' || str[j] == 'o')
						cout << o[j];
				}
			}
			if (i == 4) {
				for (int j = 0; j < size; j++) {
					if (str[j] == 'U' || str[j] == 'u')
						cout << u[j];
				}
			}
		}
	}

	for (int i = 0; i < size; i++) {
		if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U') {
			str[i] = '?';
		}
	}

	for (int i = 0; i < size; i++) {
		cout << int(str[i]);
	}

	return 0;
}
