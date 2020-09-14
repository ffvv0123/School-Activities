#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>
#define ARR_SIZE 1000000

int main()
{
	int num;
	int max = -1000000;
	int min = 1000000;
	int arr[ARR_SIZE];
	int val;

	scanf(" %d", &num);

	for (int i = 0; i < num; i++) {
		scanf(" %d", &val);
		arr[i] = val;

		if (arr[i] >= max) {
			max = arr[i];
		}
		if (arr[i] <= min) {
			min = arr[i];
		}
	}
	printf("%d %d", min, max);

	return 0;
}