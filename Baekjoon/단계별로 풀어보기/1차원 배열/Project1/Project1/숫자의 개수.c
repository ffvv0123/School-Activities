#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>
#define ARR_SIZE 10

int main()
{
	int num;
	int total = 1;
	int arr[ARR_SIZE] = { 0 };
	int count = 0;
	int trial = 0;

	for (int i = 1; i <= 3; i++) {
		scanf(" %d", &num);
		total *= num;
	}
	while (total > 0) {
		arr[count] = total % 10;
		total /= 10;
		count++;
	}
	for (int i = 0; i <= 9; i++) {
		for (int k = 0; k < count; k++) {
			if (arr[k] == i)
				trial++;				
		}
		printf("%d\n", trial);
		trial = 0;
	}

	return 0;
}