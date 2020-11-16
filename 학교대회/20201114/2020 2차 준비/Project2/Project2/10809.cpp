#include <iostream>
#include <string>
using namespace std;

int main() {
	string S;
	int arr[26];
	int count = 0;

	cin >> S;
	int size = S.length();

	for (int i = 0; i < 26; i++) {
		arr[i] = -1;
	}

	for (int i = 0; i < size; i++) {
		int index = int(S[i]) - 97;
		if (arr[index] == -1)
			arr[index] = i;
	}

	for (int i = 0; i < 26; i++) {
		cout << arr[i] << ' ';
	}

	return 0;
}