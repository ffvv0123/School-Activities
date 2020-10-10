#include <iostream>
using namespace std;

int median(int* arr, int size);
int main()
{
	int R, C, K;
	int count = 0;
	cin >> R >> C;

	int** arr = new int* [R];
	if (*arr == NULL) {
		cout << "메모리 할당 불가";
		return 0;
	}
	for (int i = 0; i < R; i++) {
		arr[i] = new int[C];
		if (!arr) {
			cout << "메모리 할당 불가";
			return 0;
		}
	}

	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++)
			cin >> arr[i][j];
	}

	cin >> K;

	int* num = new int [(R - 2) * (C - 2)];
	if (!arr) {
		cout << "메모리 할당 불가";
		return 0;
	}


	for (int i = 0; i < R - 2; i++) {
		for (int j = 0; j < C - 2; j++) {
			int med[9] = { arr[i][j], arr[i][j + 1], arr[i][j + 2], arr[i + 1][j], arr[i + 1][j + 1], arr[i + 1][j + 2], arr[i + 2][j], arr[i + 2][j + 1], arr[i + 2][j + 2] };
			num[i + j] = median(med, 9);
			if (num[i + j] >= K)
				count++;
		}
	}	
	cout << count;

	delete[] num;
	for (int i = 0; i < C; i++)
		delete[] arr[i];
	delete[] arr;

	return 0;
}

int median(int *arr, int size) {
	int temp;
	for (int i = 0; i < size - 1; i++) {
		for (int j = i + 1; j < size; j++) {
			if (arr[i] < arr[j]) {
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
	return arr[4];
}