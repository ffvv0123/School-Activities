#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>

void first_appear(char*, int);

int main()
{
	char arr[101] = "";
	int size;

	gets(arr);
	size = sizeof(arr) / sizeof(arr[0]);

	first_appear(&arr, size);

	return 0;
}

void first_appear(char* arr, int size)
{
	int appear[26];
	int count = 0;

	for (int i = 0; i < 26; i++) {
		appear[i] = -1;
	}

	for (int i = 0; i < size; i++) {
		if (appear[arr[i] - 97] == -1) {
			appear[arr[i] - 97] = i;
		}
	}

	for (int i = 0; i < 26; i++)

		printf("%d ", appear[i]);
}