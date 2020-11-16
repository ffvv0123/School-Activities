#include <iostream>
#include <string>
using namespace std;

int	findIndex(int num);
char findMax(int* arr);

int main() {
	string S;
	int arr[26] = { 0 };

	cin >> S;
	int size = S.length();

	for (int i = 0; i < size; i++) {
		int index = findIndex(S[i]);
		arr[index]++;
	}

	cout << findMax(arr);

	return 0;
}

int	findIndex(int num) {
	if (int(num) >= 65 && int(num) <= 90)
		return num - 65;

	else if (int(num) >= 97 && int(num <= 122))
		return num - 97;
}

char findMax(int* arr) {
	int max = 0;
	int count = 0;
	int index = 0;
	for (int i = 0; i < 26; i++) {
		if (max <= arr[i]) {
			max = arr[i];
			index = i;
		}
	}
	
	for (int i = 0; i < 26; i++) {
		if (max == arr[i]) {
			count++;
		}
	}

	if (count == 1)
		return char(index + 65);
	else
		return '?';
}