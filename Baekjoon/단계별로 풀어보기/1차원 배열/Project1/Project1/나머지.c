#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>

int main()
{
	int arr[10];
	int num;
	int count = 0;
	int rest[42] = { 0, };


	for (int i = 0; i < 10; i++) {
		scanf(" %d", &arr[i]);
		num = arr[i] % 42;
		rest[num]++;
	}
	for (int i = 0; i < 42; i++) {
		if (rest[i] >= 1) {
			count++;
		}
	}
	printf("%d", count);

	return 0;
}